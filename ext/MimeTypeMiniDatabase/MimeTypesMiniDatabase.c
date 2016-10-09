// Include the Ruby headers and goodies
#include "ruby.h"

#include "Extensions.h"

VALUE MimeTypesMiniDatabase = Qnil;

void Init_MimeTypesMiniDatabase();

static VALUE method_content_type_for_extension(VALUE self, VALUE extension) {
	int len = RSTRING_LEN(extension);
	char* str = RSTRING_PTR(extension);
	
	const struct ContentTypeExtension * result = lookup_content_type_by_extension(str, len);
	
	if (result) {
		return rb_str_new_cstr(result->content_type);
	} else {
		return Qnil;
	}
}

void Init_MimeTypesMiniDatabase() {
	VALUE Mime = rb_define_module("Mime");
	VALUE MimeTypes = rb_define_module_under(Mime, "Types");
	VALUE MimeTypesMini = rb_define_module_under(MimeTypes, "Mini");

	MimeTypesMiniDatabase = rb_define_module_under(MimeTypesMini, "Database");
	
	rb_define_module_function(MimeTypesMiniDatabase, "content_type_for_extension", method_content_type_for_extension, 1);
}
