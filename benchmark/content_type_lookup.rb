
require 'benchmark/ips'

require 'mime/types'
require 'mime/types/mini'

puts "Ruby #{RUBY_VERSION} at #{Time.now}"

# There IS a measuarble difference:
Benchmark.ips do |x|
	x.report("MIME::Types") do |times|
		i = 0
		
		while i < times
			MIME::Types["text/html"].first.extensions
			
			i += 1
		end
	end
	
	x.report("Mime::Types::Mini") do |times|
		i = 0
		
		while i < times
			Mime::Types::Mini::Database.mime_type_for_content_type("text/html").extensions
			
			i += 1
		end
	end
	
	x.compare!
end
