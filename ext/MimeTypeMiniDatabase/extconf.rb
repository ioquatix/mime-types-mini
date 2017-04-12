require 'mkmf'
require 'mime/types/data'
require 'erb'
require 'json'
require 'ostruct'

def load_mime_types
	mime_types_json_path = File.join(MIME::Types::Data::PATH, 'mime-types.json')
	JSON::load(File.open mime_types_json_path)
end

class TemplateBinding < OpenStruct
	def get_binding
	 	binding
	end
end

def generate_extensions_hashtable(mime_types)
	all_extensions = {}

	mime_types.each do |mime_type|
		if extensions = mime_type['extensions']
			extensions.each do |extension|
				all_extensions[extension] = mime_type['content-type']
			end
		end
	end

	template_path = File.expand_path('Extensions.erb', __dir__)
	template = ERB.new(File.read(template_path))

	state = TemplateBinding.new(extensions: all_extensions)
	result = template.result(state.get_binding)

	File.write('Extensions.gperf', result)
end

def generate_extensions
	%x(gperf -CD -t Extensions.gperf --output-file Extensions.h)
end


class TemplateState < TemplateBinding
	def extensions_struct(extensions)
		if extensions
			extensions.join(' ').inspect
		else
			0
		end
	end
end

def generate_mime_types_hashtable(mime_types)
	template_path = File.expand_path('MimeTypes.erb', __dir__)
	template = ERB.new(File.read(template_path))

	template_state = TemplateState.new(mime_types: mime_types)
	result = template.result(template_state.get_binding)

	File.write('MimeTypes.gperf', result)
end

def generate_mime_types
	%x(gperf -C -t MimeTypes.gperf --output-file MimeTypes.h)
end

def compile
	mime_types = load_mime_types

	generate_extensions_hashtable(mime_types)
	generate_extensions

	generate_mime_types_hashtable(mime_types)
	generate_mime_types

	extension_name = 'MimeTypesMiniDatabase'
	dir_config(extension_name)
	create_makefile(extension_name)
end

compile
