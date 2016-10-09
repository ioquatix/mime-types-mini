
struct MimeType {
	const char * const content_type;
	const char * const encoding;
	const char ** const extensions;
	const unsigned registered;
};

MimeType best_mime_type_for_extension(const char * extension);
const char * best_extension_for_content_type(const char * content_type);
