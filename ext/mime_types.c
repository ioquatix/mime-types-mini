
struct MimeType {
	char * const content_type;
	char * const encoding;
	char ** const extensions;
	unsigned registered;
};

const struct MimeType mime_types[] = {

	{
		.content_type = "application/1d-interleaved-parityfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/3gpdash-qoe-report+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/3gpp-ims+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/A2L",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/acad",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/access",
		.encoding = "base64",
		.extensions = (char*[]){"mdf", "mda", "mdb", "mde", 0},
		.registered = 0,
	},

	{
		.content_type = "application/activemessage",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-costmap+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-costmapfilter+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-directory+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-endpointcost+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-endpointcostparams+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-endpointprop+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-endpointpropparams+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-error+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-networkmap+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/alto-networkmapfilter+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/AML",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/andrew-inset",
		.encoding = "base64",
		.extensions = (char*[]){"ez", 0},
		.registered = 1,
	},

	{
		.content_type = "application/appledouble",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/applefile",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/applixware",
		.encoding = "base64",
		.extensions = (char*[]){"aw", 0},
		.registered = 0,
	},

	{
		.content_type = "application/ATF",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ATFX",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/atom+xml",
		.encoding = "8bit",
		.extensions = (char*[]){"atom", 0},
		.registered = 1,
	},

	{
		.content_type = "application/atomcat+xml",
		.encoding = "8bit",
		.extensions = (char*[]){"atomcat", 0},
		.registered = 1,
	},

	{
		.content_type = "application/atomdeleted+xml",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/atomicmail",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/atomsvc+xml",
		.encoding = "8bit",
		.extensions = (char*[]){"atomsvc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/ATXML",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/auth-policy+xml",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/bacnet-xdd+zip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/batch-SMTP",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/beep+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/bleeper",
		.encoding = "base64",
		.extensions = (char*[]){"bleep", 0},
		.registered = 0,
	},

	{
		.content_type = "application/calendar+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/calendar+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/call-completion",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cals-1840",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cals1840",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/cbor",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ccmp+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ccxml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"ccxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/CDFX+XML",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cdmi-capability",
		.encoding = "base64",
		.extensions = (char*[]){"cdmia", 0},
		.registered = 1,
	},

	{
		.content_type = "application/cdmi-container",
		.encoding = "base64",
		.extensions = (char*[]){"cdmic", 0},
		.registered = 1,
	},

	{
		.content_type = "application/cdmi-domain",
		.encoding = "base64",
		.extensions = (char*[]){"cdmid", 0},
		.registered = 1,
	},

	{
		.content_type = "application/cdmi-object",
		.encoding = "base64",
		.extensions = (char*[]){"cdmio", 0},
		.registered = 1,
	},

	{
		.content_type = "application/cdmi-queue",
		.encoding = "base64",
		.extensions = (char*[]){"cdmiq", 0},
		.registered = 1,
	},

	{
		.content_type = "application/cdni",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/CEA",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cea-2018+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cellml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cfw",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/clariscad",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/cms",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cnrp+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/coap-group+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/commonground",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/conference-info+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cpl+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/csrattrs",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/csta+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/CSTAdata+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/csvm+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/cu-seeme",
		.encoding = "base64",
		.extensions = (char*[]){"cu", 0},
		.registered = 0,
	},

	{
		.content_type = "application/cybercash",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/dash+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/dashdelta",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/davmount+xml",
		.encoding = "base64",
		.extensions = (char*[]){"davmount", 0},
		.registered = 1,
	},

	{
		.content_type = "application/dca-rft",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/DCD",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/dec-dx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/dialog-info+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/dicom",
		.encoding = "base64",
		.extensions = (char*[]){"dcm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/DII",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/DIT",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/dns",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/docbook+xml",
		.encoding = "base64",
		.extensions = (char*[]){"dbk", 0},
		.registered = 0,
	},

	{
		.content_type = "application/drafting",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/dskpp+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/dssc+der",
		.encoding = "base64",
		.extensions = (char*[]){"dssc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/dssc+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xdssc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/dvcs",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/dxf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/ecmascript",
		.encoding = "base64",
		.extensions = (char*[]){"ecma", 0},
		.registered = 1,
	},

	{
		.content_type = "application/EDI-consent",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/EDI-X12",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/EDIFACT",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/efi",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/EmergencyCallData.Comment+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/EmergencyCallData.DeviceInfo+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/EmergencyCallData.ProviderInfo+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/EmergencyCallData.ServiceInfo+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/EmergencyCallData.SubscriberInfo+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/emma+xml",
		.encoding = "base64",
		.extensions = (char*[]){"emma", 0},
		.registered = 1,
	},

	{
		.content_type = "application/emotionml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/encaprtp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/epp+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/epub+zip",
		.encoding = "base64",
		.extensions = (char*[]){"epub", 0},
		.registered = 1,
	},

	{
		.content_type = "application/eshop",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/example",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/excel",
		.encoding = "base64",
		.extensions = (char*[]){"xls", "xlt", 0},
		.registered = 0,
	},

	{
		.content_type = "application/exi",
		.encoding = "base64",
		.extensions = (char*[]){"exi", 0},
		.registered = 1,
	},

	{
		.content_type = "application/fastinfoset",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/fastsoap",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/fdt+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/fits",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/font-sfnt",
		.encoding = "base64",
		.extensions = (char*[]){"otf", "ttf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/font-tdpfr",
		.encoding = "base64",
		.extensions = (char*[]){"pfr", 0},
		.registered = 1,
	},

	{
		.content_type = "application/font-woff",
		.encoding = "base64",
		.extensions = (char*[]){"woff", "woff2", 0},
		.registered = 1,
	},

	{
		.content_type = "application/fractals",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/framework-attributes+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/futuresplash",
		.encoding = "base64",
		.extensions = (char*[]){"spl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/ghostview",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/gml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"gml", 0},
		.registered = 0,
	},

	{
		.content_type = "application/gpx+xml",
		.encoding = "base64",
		.extensions = (char*[]){"gpx", 0},
		.registered = 0,
	},

	{
		.content_type = "application/gxf",
		.encoding = "base64",
		.extensions = (char*[]){"gxf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/gzip",
		.encoding = "base64",
		.extensions = (char*[]){"gz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/H224",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/held+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/hep",
		.encoding = "base64",
		.extensions = (char*[]){"hep", 0},
		.registered = 0,
	},

	{
		.content_type = "application/http",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/hyperstudio",
		.encoding = "base64",
		.extensions = (char*[]){"stk", 0},
		.registered = 1,
	},

	{
		.content_type = "application/i-deas",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/ibe-key-request+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ibe-pkg-reply+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ibe-pp-data",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/iges",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/im-iscomposing+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/imagemap",
		.encoding = "8bit",
		.extensions = (char*[]){"imagemap", "imap", 0},
		.registered = 0,
	},

	{
		.content_type = "application/index",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/index.cmd",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/index.obj",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/index.response",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/index.vnd",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/inkml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"ink", "inkml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/iotp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ipfix",
		.encoding = "base64",
		.extensions = (char*[]){"ipfix", 0},
		.registered = 1,
	},

	{
		.content_type = "application/ipp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/isup",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/its+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/java-archive",
		.encoding = "base64",
		.extensions = (char*[]){"jar", 0},
		.registered = 0,
	},

	{
		.content_type = "application/java-serialized-object",
		.encoding = "base64",
		.extensions = (char*[]){"ser", 0},
		.registered = 0,
	},

	{
		.content_type = "application/java-vm",
		.encoding = "base64",
		.extensions = (char*[]){"class", 0},
		.registered = 0,
	},

	{
		.content_type = "application/javascript",
		.encoding = "8bit",
		.extensions = (char*[]){"js", "sj", 0},
		.registered = 1,
	},

	{
		.content_type = "application/jose",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/jose+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/jrd+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/json",
		.encoding = "8bit",
		.extensions = (char*[]){"json", 0},
		.registered = 1,
	},

	{
		.content_type = "application/json-patch+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/json-seq",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/jsonml+json",
		.encoding = "base64",
		.extensions = (char*[]){"jsonml", 0},
		.registered = 0,
	},

	{
		.content_type = "application/jwk+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/jwk-set+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/jwt",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/kpml-request+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/kpml-response+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ld+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/link-format",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/load-control+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/lost+xml",
		.encoding = "base64",
		.extensions = (char*[]){"lostxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/lostsync+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/lotus-123",
		.encoding = "base64",
		.extensions = (char*[]){"wks", 0},
		.registered = 0,
	},

	{
		.content_type = "application/LXF",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mac-binhex40",
		.encoding = "8bit",
		.extensions = (char*[]){"hqx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/mac-compactpro",
		.encoding = "base64",
		.extensions = (char*[]){"cpt", 0},
		.registered = 0,
	},

	{
		.content_type = "application/macbinary",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/macwriteii",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mads+xml",
		.encoding = "base64",
		.extensions = (char*[]){"mads", 0},
		.registered = 1,
	},

	{
		.content_type = "application/marc",
		.encoding = "base64",
		.extensions = (char*[]){"mrc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/marcxml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"mrcx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/mathcad",
		.encoding = "base64",
		.extensions = (char*[]){"mcd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/mathematica",
		.encoding = "base64",
		.extensions = (char*[]){"ma", "mb", "nb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/mathematica-old",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/mathml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"mathml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/mathml-content+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mathml-presentation+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-associated-procedure-description+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-deregister+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-envelope+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-msk+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-msk-response+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-protection-description+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-reception-report+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-register+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-register-response+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-schedule+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbms-user-service-description+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mbox",
		.encoding = "base64",
		.extensions = (char*[]){"mbox", 0},
		.registered = 1,
	},

	{
		.content_type = "application/media-policy-dataset+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/media_control+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mediaservercontrol+xml",
		.encoding = "base64",
		.extensions = (char*[]){"mscml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/merge-patch+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/metalink+xml",
		.encoding = "base64",
		.extensions = (char*[]){"metalink", 0},
		.registered = 0,
	},

	{
		.content_type = "application/metalink4+xml",
		.encoding = "base64",
		.extensions = (char*[]){"meta4", 0},
		.registered = 1,
	},

	{
		.content_type = "application/mets+xml",
		.encoding = "base64",
		.extensions = (char*[]){"mets", 0},
		.registered = 1,
	},

	{
		.content_type = "application/MF4",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mikey",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mods+xml",
		.encoding = "base64",
		.extensions = (char*[]){"mods", 0},
		.registered = 1,
	},

	{
		.content_type = "application/moss-keys",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/moss-signature",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mosskey-data",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mosskey-request",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mp21",
		.encoding = "base64",
		.extensions = (char*[]){"m21", "mp21", 0},
		.registered = 1,
	},

	{
		.content_type = "application/mp4",
		.encoding = "base64",
		.extensions = (char*[]){"mp4", "mpg4", "mp4s", 0},
		.registered = 1,
	},

	{
		.content_type = "application/mpeg4-generic",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mpeg4-iod",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mpeg4-iod-xmt",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mrb-consumer+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/mrb-publish+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/msc-ivr+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/msc-mixer+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/msword",
		.encoding = "base64",
		.extensions = (char*[]){"doc", "dot", "wrd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/mxf",
		.encoding = "base64",
		.extensions = (char*[]){"mxf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/nasdata",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/netcdf",
		.encoding = "base64",
		.extensions = (char*[]){"nc", "cdf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/news-checkgroups",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/news-groupinfo",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/news-message-id",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/news-transmission",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/nlsml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/nss",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ocsp-request",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ocsp-response",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/octet-stream",
		.encoding = "base64",
		.extensions = (char*[]){"bin", "dms", "lha", "lzh", "exe", "class", "ani", "pgp", "gpg", "so", "dll", "dylib", "bpk", "deploy", "dist", "distz", "dump", "elc", "lrf", "mar", "pkg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/oda",
		.encoding = "base64",
		.extensions = (char*[]){"oda", 0},
		.registered = 1,
	},

	{
		.content_type = "application/ODX",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/oebps-package+xml",
		.encoding = "base64",
		.extensions = (char*[]){"opf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/ogg",
		.encoding = "base64",
		.extensions = (char*[]){"ogx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/omdoc+xml",
		.encoding = "base64",
		.extensions = (char*[]){"omdoc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/onenote",
		.encoding = "base64",
		.extensions = (char*[]){"onepkg", "onetmp", "onetoc", "onetoc2", 0},
		.registered = 0,
	},

	{
		.content_type = "application/oxps",
		.encoding = "base64",
		.extensions = (char*[]){"oxps", 0},
		.registered = 1,
	},

	{
		.content_type = "application/p2p-overlay+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/parityfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/patch-ops-error+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xer", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pdf",
		.encoding = "base64",
		.extensions = (char*[]){"pdf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/PDX",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/pgp-encrypted",
		.encoding = "7bit",
		.extensions = (char*[]){"pgp", "gpg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pgp-keys",
		.encoding = "7bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/pgp-signature",
		.encoding = "base64",
		.extensions = (char*[]){"asc", "sig", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pics-rules",
		.encoding = "base64",
		.extensions = (char*[]){"prf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/pidf+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/pidf-diff+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/pkcs10",
		.encoding = "base64",
		.extensions = (char*[]){"p10", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pkcs12",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/pkcs7-mime",
		.encoding = "base64",
		.extensions = (char*[]){"p7m", "p7c", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pkcs7-signature",
		.encoding = "base64",
		.extensions = (char*[]){"p7s", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pkcs8",
		.encoding = "base64",
		.extensions = (char*[]){"p8", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pkix-attr-cert",
		.encoding = "base64",
		.extensions = (char*[]){"ac", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pkix-cert",
		.encoding = "base64",
		.extensions = (char*[]){"cer", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pkix-crl",
		.encoding = "base64",
		.extensions = (char*[]){"crl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pkix-pkipath",
		.encoding = "base64",
		.extensions = (char*[]){"pkipath", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pkixcmp",
		.encoding = "base64",
		.extensions = (char*[]){"pki", 0},
		.registered = 1,
	},

	{
		.content_type = "application/pls+xml",
		.encoding = "base64",
		.extensions = (char*[]){"pls", 0},
		.registered = 1,
	},

	{
		.content_type = "application/poc-settings+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/postscript",
		.encoding = "8bit",
		.extensions = (char*[]){"ai", "eps", "ps", 0},
		.registered = 1,
	},

	{
		.content_type = "application/powerpoint",
		.encoding = "base64",
		.extensions = (char*[]){"ppt", "pps", "pot", 0},
		.registered = 0,
	},

	{
		.content_type = "application/ppsp-tracker+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/pro_eng",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/problem+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/problem+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/provenance+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/prs.alvestrand.titrax-sheet",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/prs.cww",
		.encoding = "base64",
		.extensions = (char*[]){"cw", "cww", 0},
		.registered = 1,
	},

	{
		.content_type = "application/prs.hpub+zip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/prs.nprend",
		.encoding = "base64",
		.extensions = (char*[]){"rnd", "rct", 0},
		.registered = 1,
	},

	{
		.content_type = "application/prs.plucker",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/prs.rdf-xml-crypt",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/prs.xsf+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/pskc+xml",
		.encoding = "base64",
		.extensions = (char*[]){"pskcxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/qsig",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/quicktimeplayer",
		.encoding = "base64",
		.extensions = (char*[]){"qtl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/raptorfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/rdap+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/rdf+xml",
		.encoding = "8bit",
		.extensions = (char*[]){"rdf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/reginfo+xml",
		.encoding = "base64",
		.extensions = (char*[]){"rif", 0},
		.registered = 1,
	},

	{
		.content_type = "application/relax-ng-compact-syntax",
		.encoding = "base64",
		.extensions = (char*[]){"rnc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/remote-printing",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/remote_printing",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/reputon+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/resource-lists+xml",
		.encoding = "base64",
		.extensions = (char*[]){"rl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/resource-lists-diff+xml",
		.encoding = "base64",
		.extensions = (char*[]){"rld", 0},
		.registered = 1,
	},

	{
		.content_type = "application/rfc+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/riscos",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/rlmi+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/rls-services+xml",
		.encoding = "base64",
		.extensions = (char*[]){"rs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/rpki-ghostbusters",
		.encoding = "base64",
		.extensions = (char*[]){"gbr", 0},
		.registered = 1,
	},

	{
		.content_type = "application/rpki-manifest",
		.encoding = "base64",
		.extensions = (char*[]){"mft", 0},
		.registered = 1,
	},

	{
		.content_type = "application/rpki-roa",
		.encoding = "base64",
		.extensions = (char*[]){"roa", 0},
		.registered = 1,
	},

	{
		.content_type = "application/rpki-updown",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/rsd+xml",
		.encoding = "base64",
		.extensions = (char*[]){"rsd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/rss+xml",
		.encoding = "base64",
		.extensions = (char*[]){"rss", 0},
		.registered = 0,
	},

	{
		.content_type = "application/rtf",
		.encoding = "base64",
		.extensions = (char*[]){"rtf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/rtploopback",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/rtx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/samlassertion+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/samlmetadata+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/sbml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"sbml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/scaip+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/scim+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/scvp-cv-request",
		.encoding = "base64",
		.extensions = (char*[]){"scq", 0},
		.registered = 1,
	},

	{
		.content_type = "application/scvp-cv-response",
		.encoding = "base64",
		.extensions = (char*[]){"scs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/scvp-vp-request",
		.encoding = "base64",
		.extensions = (char*[]){"spq", 0},
		.registered = 1,
	},

	{
		.content_type = "application/scvp-vp-response",
		.encoding = "base64",
		.extensions = (char*[]){"spp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/sdp",
		.encoding = "base64",
		.extensions = (char*[]){"sdp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/sep+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/sep-exi",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/session-info",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/set",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/set-payment",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/set-payment-initiation",
		.encoding = "base64",
		.extensions = (char*[]){"setpay", 0},
		.registered = 1,
	},

	{
		.content_type = "application/set-registration",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/set-registration-initiation",
		.encoding = "base64",
		.extensions = (char*[]){"setreg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/sgml",
		.encoding = "base64",
		.extensions = (char*[]){"sgml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/sgml-open-catalog",
		.encoding = "base64",
		.extensions = (char*[]){"soc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/shf+xml",
		.encoding = "base64",
		.extensions = (char*[]){"shf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/sieve",
		.encoding = "base64",
		.extensions = (char*[]){"siv", 0},
		.registered = 1,
	},

	{
		.content_type = "application/simple-filter+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/simple-message-summary",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/simpleSymbolContainer",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/SLA",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/slate",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/smil",
		.encoding = "8bit",
		.extensions = (char*[]){"smi", "smil", 0},
		.registered = 1,
	},

	{
		.content_type = "application/smil+xml",
		.encoding = "8bit",
		.extensions = (char*[]){"smi", "smil", 0},
		.registered = 1,
	},

	{
		.content_type = "application/smpte336m",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/soap+fastinfoset",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/soap+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/solids",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/sparql-query",
		.encoding = "base64",
		.extensions = (char*[]){"rq", 0},
		.registered = 1,
	},

	{
		.content_type = "application/sparql-results+xml",
		.encoding = "base64",
		.extensions = (char*[]){"srx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/spirits-event+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/sql",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/srgs",
		.encoding = "base64",
		.extensions = (char*[]){"gram", 0},
		.registered = 1,
	},

	{
		.content_type = "application/srgs+xml",
		.encoding = "base64",
		.extensions = (char*[]){"grxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/sru+xml",
		.encoding = "base64",
		.extensions = (char*[]){"sru", 0},
		.registered = 1,
	},

	{
		.content_type = "application/ssdl+xml",
		.encoding = "base64",
		.extensions = (char*[]){"ssdl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/ssml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"ssml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/STEP",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/tamp-apex-update",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-apex-update-confirm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-community-update",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-community-update-confirm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-error",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-sequence-adjust",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-sequence-adjust-confirm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-status-query",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-status-response",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-update",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tamp-update-confirm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tei+xml",
		.encoding = "base64",
		.extensions = (char*[]){"tei", "teicorpus", 0},
		.registered = 1,
	},

	{
		.content_type = "application/thraud+xml",
		.encoding = "base64",
		.extensions = (char*[]){"tfi", 0},
		.registered = 1,
	},

	{
		.content_type = "application/timestamp-query",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/timestamp-reply",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/timestamped-data",
		.encoding = "base64",
		.extensions = (char*[]){"tsd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/toolbook",
		.encoding = "base64",
		.extensions = (char*[]){"tbk", 0},
		.registered = 0,
	},

	{
		.content_type = "application/ttml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/tve-trigger",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/ulpfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/urc-grpsheet+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/urc-ressheet+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/urc-targetdesc+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/urc-uisocketdesc+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vcard+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vcard+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vda",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/vemmi",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/VMSBACKUP",
		.encoding = "base64",
		.extensions = (char*[]){"bck", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.3gpp-prose+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp-prose-pc3ch+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.access-transfer-events+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.bsf+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.mid-call+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.pic-bw-large",
		.encoding = "base64",
		.extensions = (char*[]){"plb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.pic-bw-small",
		.encoding = "base64",
		.extensions = (char*[]){"psb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.pic-bw-var",
		.encoding = "base64",
		.extensions = (char*[]){"pvb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.sms",
		.encoding = "base64",
		.extensions = (char*[]){"sms", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.sms+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.srvcc-ext+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.SRVCC-info+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.state-and-event-info+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp.ussd+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp2.bcmcsinfo+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp2.sms",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3gpp2.tcap",
		.encoding = "base64",
		.extensions = (char*[]){"tcap", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3lightssoftware.imagescal",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.3M.Post-it-Notes",
		.encoding = "base64",
		.extensions = (char*[]){"pwn", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.accpac.simply.aso",
		.encoding = "base64",
		.extensions = (char*[]){"aso", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.accpac.simply.imp",
		.encoding = "base64",
		.extensions = (char*[]){"imp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.acucobol",
		.encoding = "base64",
		.extensions = (char*[]){"acu", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.acucorp",
		.encoding = "7bit",
		.extensions = (char*[]){"atc", "acutc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.adobe.air-application-installer-package+zip",
		.encoding = "base64",
		.extensions = (char*[]){"air", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.adobe.flash.movie",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.adobe.formscentral.fcdt",
		.encoding = "base64",
		.extensions = (char*[]){"fcdt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.adobe.fxp",
		.encoding = "base64",
		.extensions = (char*[]){"fxp", "fxpl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.adobe.partial-upload",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.adobe.xdp+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xdp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.adobe.xfdf",
		.encoding = "base64",
		.extensions = (char*[]){"xfdf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.aether.imp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ah-barcode",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ahead.space",
		.encoding = "base64",
		.extensions = (char*[]){"ahead", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.airzip.filesecure.azf",
		.encoding = "base64",
		.extensions = (char*[]){"azf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.airzip.filesecure.azs",
		.encoding = "base64",
		.extensions = (char*[]){"azs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.amazon.ebook",
		.encoding = "base64",
		.extensions = (char*[]){"azw", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.americandynamics.acc",
		.encoding = "base64",
		.extensions = (char*[]){"acc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.amiga.ami",
		.encoding = "base64",
		.extensions = (char*[]){"ami", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.amundsen.maze+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.android.package-archive",
		.encoding = "base64",
		.extensions = (char*[]){"apk", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.anki",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.anser-web-certificate-issue-initiation",
		.encoding = "base64",
		.extensions = (char*[]){"cii", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.anser-web-funds-transfer-initiation",
		.encoding = "base64",
		.extensions = (char*[]){"fti", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.antix.game-component",
		.encoding = "base64",
		.extensions = (char*[]){"atx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.apache.thrift.binary",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.apache.thrift.compact",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.apache.thrift.json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.api+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.apple.installer+xml",
		.encoding = "base64",
		.extensions = (char*[]){"mpkg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.apple.mpegurl",
		.encoding = "base64",
		.extensions = (char*[]){"m3u8", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.apple.pkpass",
		.encoding = "base64",
		.extensions = (char*[]){"pkpass", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.arastra.swi",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.aristanetworks.swi",
		.encoding = "base64",
		.extensions = (char*[]){"swi", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.artsquare",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.astraea-software.iota",
		.encoding = "base64",
		.extensions = (char*[]){"iota", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.audiograph",
		.encoding = "base64",
		.extensions = (char*[]){"aep", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.autopackage",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.avistar+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.balsamiq.bmml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.balsamiq.bmpr",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.bekitzur-stech+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.biopax.rdf+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.blueice.multipass",
		.encoding = "base64",
		.extensions = (char*[]){"mpm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.bluetooth.ep.oob",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.bluetooth.le.oob",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.bmi",
		.encoding = "base64",
		.extensions = (char*[]){"bmi", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.businessobjects",
		.encoding = "base64",
		.extensions = (char*[]){"rep", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cab-jscript",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.canon-cpdl",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.canon-lips",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cendio.thinlinc.clientconf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.century-systems.tcp_stream",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.chemdraw+xml",
		.encoding = "base64",
		.extensions = (char*[]){"cdxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.chipnuts.karaoke-mmd",
		.encoding = "base64",
		.extensions = (char*[]){"mmd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cinderella",
		.encoding = "base64",
		.extensions = (char*[]){"cdy", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cirpack.isdn-ext",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.citationstyles.style+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.claymore",
		.encoding = "base64",
		.extensions = (char*[]){"cla", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cloanto.rp9",
		.encoding = "base64",
		.extensions = (char*[]){"rp9", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.clonk.c4group",
		.encoding = "base64",
		.extensions = (char*[]){"c4d", "c4f", "c4g", "c4p", "c4u", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cluetrust.cartomobile-config",
		.encoding = "base64",
		.extensions = (char*[]){"c11amc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cluetrust.cartomobile-config-pkg",
		.encoding = "base64",
		.extensions = (char*[]){"c11amz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.coffeescript",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.collection+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.collection.doc+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.collection.next+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.commerce-battelle",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.commonspace",
		.encoding = "base64",
		.extensions = (char*[]){"csp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.contact.cmsg",
		.encoding = "base64",
		.extensions = (char*[]){"cdbcmsg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.coreos.ignition+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cosmocaller",
		.encoding = "base64",
		.extensions = (char*[]){"cmc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.crick.clicker",
		.encoding = "base64",
		.extensions = (char*[]){"clkx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.crick.clicker.keyboard",
		.encoding = "base64",
		.extensions = (char*[]){"clkk", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.crick.clicker.palette",
		.encoding = "base64",
		.extensions = (char*[]){"clkp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.crick.clicker.template",
		.encoding = "base64",
		.extensions = (char*[]){"clkt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.crick.clicker.wordbank",
		.encoding = "base64",
		.extensions = (char*[]){"clkw", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.criticaltools.wbs+xml",
		.encoding = "base64",
		.extensions = (char*[]){"wbs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ctc-posml",
		.encoding = "base64",
		.extensions = (char*[]){"pml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ctct.ws+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cups-pdf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cups-postscript",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cups-ppd",
		.encoding = "base64",
		.extensions = (char*[]){"ppd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cups-raster",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cups-raw",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.curl",
		.encoding = "base64",
		.extensions = (char*[]){"curl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.curl.car",
		.encoding = "base64",
		.extensions = (char*[]){"car", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.curl.pcurl",
		.encoding = "base64",
		.extensions = (char*[]){"pcurl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.cyan.dean.root+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.cybank",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dart",
		.encoding = "base64",
		.extensions = (char*[]){"dart", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.data-vision.rdz",
		.encoding = "base64",
		.extensions = (char*[]){"rdz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.debian.binary-package",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dece.data",
		.encoding = "base64",
		.extensions = (char*[]){"uvd", "uvf", "uvvd", "uvvf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dece.ttml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"uvt", "uvvt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dece.unspecified",
		.encoding = "base64",
		.extensions = (char*[]){"uvvx", "uvx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dece.zip",
		.encoding = "base64",
		.extensions = (char*[]){"uvvz", "uvz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.denovo.fcselayout-link",
		.encoding = "base64",
		.extensions = (char*[]){"fe_launch", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.desmume.movie",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dir-bi.plate-dl-nosuffix",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dm.delegation+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dna",
		.encoding = "base64",
		.extensions = (char*[]){"dna", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.document+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dolby.mlp",
		.encoding = "base64",
		.extensions = (char*[]){"mlp", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.dolby.mobile.1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dolby.mobile.2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.doremir.scorecloud-binary-document",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dpgraph",
		.encoding = "base64",
		.extensions = (char*[]){"dpg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dreamfactory",
		.encoding = "base64",
		.extensions = (char*[]){"dfac", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.drive+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ds-keypoint",
		.encoding = "base64",
		.extensions = (char*[]){"kpxx", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.dtg.local",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dtg.local.flash",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dtg.local.html",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.ait",
		.encoding = "base64",
		.extensions = (char*[]){"ait", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.dvbj",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.esgcontainer",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.ipdcdftnotifaccess",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.ipdcesgaccess",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.ipdcesgaccess2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.ipdcesgpdd",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.ipdcroaming",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.iptv.alfec-base",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.iptv.alfec-enhancement",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.notif-aggregate-root+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.notif-container+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.notif-generic+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.notif-ia-msglist+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.notif-ia-registration-request+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.notif-ia-registration-response+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.notif-init+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.pfr",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dvb.service",
		.encoding = "base64",
		.extensions = (char*[]){"svc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dxr",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dynageo",
		.encoding = "base64",
		.extensions = (char*[]){"geo", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.dzr",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.easykaraoke.cdgdownload",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ecdis-update",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ecowin.chart",
		.encoding = "base64",
		.extensions = (char*[]){"mag", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ecowin.filerequest",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ecowin.fileupdate",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ecowin.series",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ecowin.seriesrequest",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ecowin.seriesupdate",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.emclient.accessrequest+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.enliven",
		.encoding = "base64",
		.extensions = (char*[]){"nml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.enphase.envoy",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.eprints.data+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.epson.esf",
		.encoding = "base64",
		.extensions = (char*[]){"esf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.epson.msf",
		.encoding = "base64",
		.extensions = (char*[]){"msf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.epson.quickanime",
		.encoding = "base64",
		.extensions = (char*[]){"qam", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.epson.salt",
		.encoding = "base64",
		.extensions = (char*[]){"slt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.epson.ssf",
		.encoding = "base64",
		.extensions = (char*[]){"ssf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ericsson.quickcall",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.eszigno3+xml",
		.encoding = "base64",
		.extensions = (char*[]){"es3", "et3", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.aoc+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.asic-e+zip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.asic-s+zip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.cug+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvcommand+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvdiscovery+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvprofile+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvsad-bc+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvsad-cod+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvsad-npvr+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvservice+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvsync+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.iptvueprofile+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.mcid+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.mheg5",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.overload-control-policy-dataset+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.pstn+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.sci+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.simservs+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.timestamp-token",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.tsl+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.etsi.tsl.der",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.eudora.data",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ezpix-album",
		.encoding = "base64",
		.extensions = (char*[]){"ez2", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ezpix-package",
		.encoding = "base64",
		.extensions = (char*[]){"ez3", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.f-secure.mobile",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fastcopy-disk-image",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fdf",
		.encoding = "base64",
		.extensions = (char*[]){"fdf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fdsn.mseed",
		.encoding = "base64",
		.extensions = (char*[]){"mseed", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fdsn.seed",
		.encoding = "base64",
		.extensions = (char*[]){"dataless", "seed", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ffsns",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.filmit.zfc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fints",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.firemonkeys.cloudcell",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.FloGraphIt",
		.encoding = "base64",
		.extensions = (char*[]){"gph", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fluxtime.clip",
		.encoding = "base64",
		.extensions = (char*[]){"ftc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.font-fontforge-sfd",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.framemaker",
		.encoding = "base64",
		.extensions = (char*[]){"frm", "maker", "frame", "fm", "fb", "book", "fbdoc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.frogans.fnc",
		.encoding = "base64",
		.extensions = (char*[]){"fnc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.frogans.ltf",
		.encoding = "base64",
		.extensions = (char*[]){"ltf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fsc.weblaunch",
		.encoding = "7bit",
		.extensions = (char*[]){"fsc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujitsu.oasys",
		.encoding = "base64",
		.extensions = (char*[]){"oas", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujitsu.oasys2",
		.encoding = "base64",
		.extensions = (char*[]){"oa2", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujitsu.oasys3",
		.encoding = "base64",
		.extensions = (char*[]){"oa3", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujitsu.oasysgp",
		.encoding = "base64",
		.extensions = (char*[]){"fg5", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujitsu.oasysprs",
		.encoding = "base64",
		.extensions = (char*[]){"bh2", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujixerox.ART-EX",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujixerox.ART4",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujixerox.ddd",
		.encoding = "base64",
		.extensions = (char*[]){"ddd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujixerox.docuworks",
		.encoding = "base64",
		.extensions = (char*[]){"xdw", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujixerox.docuworks.binder",
		.encoding = "base64",
		.extensions = (char*[]){"xbd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujixerox.docuworks.container",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fujixerox.HBPL",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fut-misnet",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.fuzzysheet",
		.encoding = "base64",
		.extensions = (char*[]){"fzs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.genomatix.tuxedo",
		.encoding = "base64",
		.extensions = (char*[]){"txd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.geo+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.geocube+xml",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.geogebra.file",
		.encoding = "base64",
		.extensions = (char*[]){"ggb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.geogebra.tool",
		.encoding = "base64",
		.extensions = (char*[]){"ggt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.geometry-explorer",
		.encoding = "base64",
		.extensions = (char*[]){"gex", "gre", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.geonext",
		.encoding = "base64",
		.extensions = (char*[]){"gxt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.geoplan",
		.encoding = "base64",
		.extensions = (char*[]){"g2w", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.geospace",
		.encoding = "base64",
		.extensions = (char*[]){"g3w", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.gerber",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.globalplatform.card-content-mgt",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.globalplatform.card-content-mgt-response",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.gmx",
		.encoding = "base64",
		.extensions = (char*[]){"gmx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.google-earth.kml+xml",
		.encoding = "8bit",
		.extensions = (char*[]){"kml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.google-earth.kmz",
		.encoding = "8bit",
		.extensions = (char*[]){"kmz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.gov.sk.e-form+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.gov.sk.e-form+zip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.gov.sk.xmldatacontainer+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.grafeq",
		.encoding = "base64",
		.extensions = (char*[]){"gqf", "gqs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.gridmp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.groove-account",
		.encoding = "base64",
		.extensions = (char*[]){"gac", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.groove-help",
		.encoding = "base64",
		.extensions = (char*[]){"ghf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.groove-identity-message",
		.encoding = "base64",
		.extensions = (char*[]){"gim", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.groove-injector",
		.encoding = "base64",
		.extensions = (char*[]){"grv", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.groove-tool-message",
		.encoding = "base64",
		.extensions = (char*[]){"gtm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.groove-tool-template",
		.encoding = "base64",
		.extensions = (char*[]){"tpl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.groove-vcard",
		.encoding = "base64",
		.extensions = (char*[]){"vcg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hal+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hal+xml",
		.encoding = "base64",
		.extensions = (char*[]){"hal", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.HandHeld-Entertainment+xml",
		.encoding = "base64",
		.extensions = (char*[]){"zmm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hbci",
		.encoding = "base64",
		.extensions = (char*[]){"hbci", "hbc", "kom", "upa", "pkd", "bpd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hcl-bireports",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hdt",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.heroku+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hhe.lesson-player",
		.encoding = "base64",
		.extensions = (char*[]){"les", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hp-HPGL",
		.encoding = "base64",
		.extensions = (char*[]){"plt", "hpgl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hp-hpid",
		.encoding = "base64",
		.extensions = (char*[]){"hpid", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hp-hps",
		.encoding = "base64",
		.extensions = (char*[]){"hps", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hp-jlyt",
		.encoding = "base64",
		.extensions = (char*[]){"jlt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hp-PCL",
		.encoding = "base64",
		.extensions = (char*[]){"pcl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hp-PCLXL",
		.encoding = "base64",
		.extensions = (char*[]){"pclxl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.httphone",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hydrostatix.sof-data",
		.encoding = "base64",
		.extensions = (char*[]){"sfd-hdstx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hyperdrive+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.hzn-3d-crossword",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ibm.afplinedata",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ibm.electronic-media",
		.encoding = "base64",
		.extensions = (char*[]){"emm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ibm.MiniPay",
		.encoding = "base64",
		.extensions = (char*[]){"mpy", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ibm.modcap",
		.encoding = "base64",
		.extensions = (char*[]){"afp", "list3820", "listafp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ibm.rights-management",
		.encoding = "base64",
		.extensions = (char*[]){"irm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ibm.secure-container",
		.encoding = "base64",
		.extensions = (char*[]){"sc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.iccprofile",
		.encoding = "base64",
		.extensions = (char*[]){"icc", "icm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ieee.1905",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.igloader",
		.encoding = "base64",
		.extensions = (char*[]){"igl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.immervision-ivp",
		.encoding = "base64",
		.extensions = (char*[]){"ivp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.immervision-ivu",
		.encoding = "base64",
		.extensions = (char*[]){"ivu", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.imsccv1p1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.imsccv1p2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.imsccv1p3",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.lis.v2.result+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.lti.v2.toolconsumerprofile+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.lti.v2.toolproxy+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.lti.v2.toolproxy.id+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.lti.v2.toolsettings+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ims.lti.v2.toolsettings.simple+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.informedcontrol.rms+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.informix-visionary",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.infotech.project",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.infotech.project+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.innopath.wamp.notification",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.insors.igm",
		.encoding = "base64",
		.extensions = (char*[]){"igm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.intercon.formnet",
		.encoding = "base64",
		.extensions = (char*[]){"xpw", "xpx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.intergeo",
		.encoding = "base64",
		.extensions = (char*[]){"i2g", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.intertrust.digibox",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.intertrust.nncp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.intu.qbo",
		.encoding = "base64",
		.extensions = (char*[]){"qbo", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.intu.qfx",
		.encoding = "base64",
		.extensions = (char*[]){"qfx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.iptc.g2.catalogitem+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.iptc.g2.conceptitem+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.iptc.g2.knowledgeitem+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.iptc.g2.newsitem+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.iptc.g2.newsmessage+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.iptc.g2.packageitem+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.iptc.g2.planningitem+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ipunplugged.rcprofile",
		.encoding = "base64",
		.extensions = (char*[]){"rcprofile", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.irepository.package+xml",
		.encoding = "base64",
		.extensions = (char*[]){"irp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.is-xpr",
		.encoding = "base64",
		.extensions = (char*[]){"xpr", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.isac.fcs",
		.encoding = "base64",
		.extensions = (char*[]){"fcs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.jam",
		.encoding = "base64",
		.extensions = (char*[]){"jam", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.japannet-directory-service",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.japannet-jpnstore-wakeup",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.japannet-payment-wakeup",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.japannet-registration",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.japannet-registration-wakeup",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.japannet-setstore-wakeup",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.japannet-verification",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.japannet-verification-wakeup",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.jcp.javame.midlet-rms",
		.encoding = "base64",
		.extensions = (char*[]){"rms", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.jisp",
		.encoding = "base64",
		.extensions = (char*[]){"jisp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.joost.joda-archive",
		.encoding = "base64",
		.extensions = (char*[]){"joda", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.jsk.isdn-ngn",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kahootz",
		.encoding = "base64",
		.extensions = (char*[]){"ktr", "ktz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kde.karbon",
		.encoding = "base64",
		.extensions = (char*[]){"karbon", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kde.kchart",
		.encoding = "base64",
		.extensions = (char*[]){"chrt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kde.kformula",
		.encoding = "base64",
		.extensions = (char*[]){"kfo", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kde.kivio",
		.encoding = "base64",
		.extensions = (char*[]){"flw", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kde.kontour",
		.encoding = "base64",
		.extensions = (char*[]){"kon", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kde.kpresenter",
		.encoding = "base64",
		.extensions = (char*[]){"kpr", "kpt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kde.kspread",
		.encoding = "base64",
		.extensions = (char*[]){"ksp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kde.kword",
		.encoding = "base64",
		.extensions = (char*[]){"kwd", "kwt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kenameaapp",
		.encoding = "base64",
		.extensions = (char*[]){"htke", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kidspiration",
		.encoding = "base64",
		.extensions = (char*[]){"kia", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Kinar",
		.encoding = "base64",
		.extensions = (char*[]){"kne", "knp", "sdf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.koan",
		.encoding = "base64",
		.extensions = (char*[]){"skd", "skm", "skp", "skt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.kodak-descriptor",
		.encoding = "base64",
		.extensions = (char*[]){"sse", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.las.las+xml",
		.encoding = "base64",
		.extensions = (char*[]){"lasxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.liberty-request+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.llamagraphics.life-balance.desktop",
		.encoding = "base64",
		.extensions = (char*[]){"lbd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.llamagraphics.life-balance.exchange+xml",
		.encoding = "base64",
		.extensions = (char*[]){"lbe", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.lotus-1-2-3",
		.encoding = "base64",
		.extensions = (char*[]){"wks", "123", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.lotus-approach",
		.encoding = "base64",
		.extensions = (char*[]){"apr", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.lotus-freelance",
		.encoding = "base64",
		.extensions = (char*[]){"pre", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.lotus-notes",
		.encoding = "base64",
		.extensions = (char*[]){"nsf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.lotus-organizer",
		.encoding = "base64",
		.extensions = (char*[]){"org", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.lotus-screencam",
		.encoding = "base64",
		.extensions = (char*[]){"scm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.lotus-wordpro",
		.encoding = "base64",
		.extensions = (char*[]){"lwp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.macports.portpkg",
		.encoding = "base64",
		.extensions = (char*[]){"portpkg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mapbox-vector-tile",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.marlin.drm.actiontoken+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.marlin.drm.conftoken+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.marlin.drm.license+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.marlin.drm.mdcf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mason+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.maxmind.maxmind-db",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mcd",
		.encoding = "base64",
		.extensions = (char*[]){"mcd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.medcalcdata",
		.encoding = "base64",
		.extensions = (char*[]){"mc1", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mediastation.cdkey",
		.encoding = "base64",
		.extensions = (char*[]){"cdkey", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.meridian-slingshot",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.MFER",
		.encoding = "base64",
		.extensions = (char*[]){"mwf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mfmp",
		.encoding = "base64",
		.extensions = (char*[]){"mfm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.micro+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.micrografx.flo",
		.encoding = "base64",
		.extensions = (char*[]){"flo", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.micrografx.igx",
		.encoding = "base64",
		.extensions = (char*[]){"igx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.microsoft.portable-executable",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.miele+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mif",
		.encoding = "base64",
		.extensions = (char*[]){"mif", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.minisoft-hp3000-save",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mitsubishi.misty-guard.trustweb",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Mobius.DAF",
		.encoding = "base64",
		.extensions = (char*[]){"daf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Mobius.DIS",
		.encoding = "base64",
		.extensions = (char*[]){"dis", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Mobius.MBK",
		.encoding = "base64",
		.extensions = (char*[]){"mbk", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Mobius.MQY",
		.encoding = "base64",
		.extensions = (char*[]){"mqy", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Mobius.MSL",
		.encoding = "base64",
		.extensions = (char*[]){"msl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Mobius.PLC",
		.encoding = "base64",
		.extensions = (char*[]){"plc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Mobius.TXF",
		.encoding = "base64",
		.extensions = (char*[]){"txf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mophun.application",
		.encoding = "base64",
		.extensions = (char*[]){"mpn", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mophun.certificate",
		.encoding = "base64",
		.extensions = (char*[]){"mpc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.motorola.flexsuite",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.motorola.flexsuite.adsi",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.motorola.flexsuite.fis",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.motorola.flexsuite.gotap",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.motorola.flexsuite.kmr",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.motorola.flexsuite.ttc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.motorola.flexsuite.wem",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.motorola.iprm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mozilla.xul+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xul", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-3mfdocument",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-artgalry",
		.encoding = "base64",
		.extensions = (char*[]){"cil", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-asf",
		.encoding = "base64",
		.extensions = (char*[]){"asf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-cab-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"cab", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-excel",
		.encoding = "base64",
		.extensions = (char*[]){"xls", "xlt", "xla", "xlc", "xlm", "xlw", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-excel.addin.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"xlam", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-excel.sheet.binary.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"xlsb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-excel.sheet.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"xlsm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-excel.template.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"xltm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-fontobject",
		.encoding = "base64",
		.extensions = (char*[]){"eot", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-htmlhelp",
		.encoding = "base64",
		.extensions = (char*[]){"chm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-ims",
		.encoding = "base64",
		.extensions = (char*[]){"ims", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-lrm",
		.encoding = "base64",
		.extensions = (char*[]){"lrm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-office.activeX+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-officetheme",
		.encoding = "base64",
		.extensions = (char*[]){"thmx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-outlook",
		.encoding = "base64",
		.extensions = (char*[]){"msg", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.ms-pki.seccat",
		.encoding = "base64",
		.extensions = (char*[]){"cat", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.ms-pki.stl",
		.encoding = "base64",
		.extensions = (char*[]){"stl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.ms-playready.initiator+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-powerpoint",
		.encoding = "base64",
		.extensions = (char*[]){"ppt", "pps", "pot", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-powerpoint.addin.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"ppam", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-powerpoint.presentation.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"pptm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-powerpoint.slide.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"sldm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-powerpoint.slideshow.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"ppsm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-powerpoint.template.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"potm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-PrintDeviceCapabilities+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-PrintSchemaTicket+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-project",
		.encoding = "base64",
		.extensions = (char*[]){"mpp", "mpt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-tnef",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-windows.devicepairing",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-windows.nwprinting.oob",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-windows.printerpairing",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-windows.wsd.oob",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-wmdrm.lic-chlg-req",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-wmdrm.lic-resp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-wmdrm.meter-chlg-req",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-wmdrm.meter-resp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-word.document.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"docm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-word.template.macroEnabled.12",
		.encoding = "base64",
		.extensions = (char*[]){"dotm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-works",
		.encoding = "base64",
		.extensions = (char*[]){"wcm", "wdb", "wks", "wps", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-wpl",
		.encoding = "base64",
		.extensions = (char*[]){"wpl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ms-xpsdocument",
		.encoding = "8bit",
		.extensions = (char*[]){"xps", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.msa-disk-image",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mseq",
		.encoding = "base64",
		.extensions = (char*[]){"mseq", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.msign",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.multiad.creator",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.multiad.creator.cif",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.music-niff",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.musician",
		.encoding = "base64",
		.extensions = (char*[]){"mus", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.muvee.style",
		.encoding = "base64",
		.extensions = (char*[]){"msty", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.mynfc",
		.encoding = "base64",
		.extensions = (char*[]){"taglet", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ncd.control",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ncd.reference",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nervana",
		.encoding = "base64",
		.extensions = (char*[]){"ent", "entity", "req", "request", "bkm", "kcm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.netfpx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.neurolanguage.nlu",
		.encoding = "base64",
		.extensions = (char*[]){"nlu", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nintendo.nitro.rom",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nintendo.snes.rom",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nitf",
		.encoding = "base64",
		.extensions = (char*[]){"nitf", "ntf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.noblenet-directory",
		.encoding = "base64",
		.extensions = (char*[]){"nnd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.noblenet-sealer",
		.encoding = "base64",
		.extensions = (char*[]){"nns", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.noblenet-web",
		.encoding = "base64",
		.extensions = (char*[]){"nnw", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.catalogs",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.conml+wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.conml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.iptv.config+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.iSDS-radio-presets",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.landmark+wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.landmark+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.landmarkcollection+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.n-gage.ac+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.n-gage.data",
		.encoding = "base64",
		.extensions = (char*[]){"ngdat", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.n-gage.symbian.install",
		.encoding = "base64",
		.extensions = (char*[]){"n-gage", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.ncd",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.ncd+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.pcd+wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.pcd+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.radio-preset",
		.encoding = "base64",
		.extensions = (char*[]){"rpst", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.nokia.radio-presets",
		.encoding = "base64",
		.extensions = (char*[]){"rpss", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.novadigm.EDM",
		.encoding = "base64",
		.extensions = (char*[]){"edm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.novadigm.EDX",
		.encoding = "base64",
		.extensions = (char*[]){"edx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.novadigm.EXT",
		.encoding = "base64",
		.extensions = (char*[]){"ext", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ntt-local.content-share",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ntt-local.file-transfer",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ntt-local.ogw_remote-access",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ntt-local.sip-ta_remote",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ntt-local.sip-ta_tcp_stream",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.chart",
		.encoding = "base64",
		.extensions = (char*[]){"odc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.chart-template",
		.encoding = "base64",
		.extensions = (char*[]){"odc", "otc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.database",
		.encoding = "base64",
		.extensions = (char*[]){"odb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.formula",
		.encoding = "base64",
		.extensions = (char*[]){"odf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.formula-template",
		.encoding = "base64",
		.extensions = (char*[]){"odf", "odft", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.graphics",
		.encoding = "base64",
		.extensions = (char*[]){"odg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.graphics-template",
		.encoding = "base64",
		.extensions = (char*[]){"otg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.image",
		.encoding = "base64",
		.extensions = (char*[]){"odi", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.image-template",
		.encoding = "base64",
		.extensions = (char*[]){"odi", "oti", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.presentation",
		.encoding = "base64",
		.extensions = (char*[]){"odp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.presentation-template",
		.encoding = "base64",
		.extensions = (char*[]){"otp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.spreadsheet",
		.encoding = "base64",
		.extensions = (char*[]){"ods", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.spreadsheet-template",
		.encoding = "base64",
		.extensions = (char*[]){"ots", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.text",
		.encoding = "base64",
		.extensions = (char*[]){"odt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.text-master",
		.encoding = "base64",
		.extensions = (char*[]){"odm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.text-template",
		.encoding = "base64",
		.extensions = (char*[]){"ott", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oasis.opendocument.text-web",
		.encoding = "base64",
		.extensions = (char*[]){"oth", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.obn",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oftn.l10n+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.contentaccessdownload+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.contentaccessstreaming+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.cspg-hexbinary",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.dae.svg+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.dae.xhtml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.mippvcontrolmessage+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.pae.gem",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.spdiscovery+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.spdlist+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.ueprofile+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oipf.userprofile+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.olpc-sugar",
		.encoding = "base64",
		.extensions = (char*[]){"xo", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma-scws-config",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma-scws-http-request",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma-scws-http-response",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.associated-procedure-parameter+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.drm-trigger+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.imd+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.ltkm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.notification+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.provisioningtrigger",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.sgboot",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.sgdd+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.sgdu",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.simple-symbol-container",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.smartcard-trigger+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.sprov+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.bcast.stkm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.cab-address-book+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.cab-feature-handler+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.cab-pcc+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.cab-subs-invite+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.cab-user-prefs+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.dcd",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.dcdc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.dd2+xml",
		.encoding = "base64",
		.extensions = (char*[]){"dd2", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.drm.risd+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.group-usage-list+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.lwm2m+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.pal+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.poc.detailed-progress-report+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.poc.final-report+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.poc.groups+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.poc.invocation-descriptor+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.poc.optimized-progress-report+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.push",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.scidm.messages+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oma.xcap-directory+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.omads-email+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.omads-file+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.omads-folder+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.omaloc-supl-init",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.onepager",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openblox.game+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openblox.game-binary",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openeye.oeb",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openofficeorg.extension",
		.encoding = "base64",
		.extensions = (char*[]){"oxt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.custom-properties+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.customXmlProperties+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.drawing+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.drawingml.chart+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.drawingml.chartshapes+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.drawingml.diagramColors+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.drawingml.diagramData+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.drawingml.diagramLayout+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.drawingml.diagramStyle+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.extended-properties+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.commentAuthors+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.comments+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.handoutMaster+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.notesMaster+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.notesSlide+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.presentation",
		.encoding = "base64",
		.extensions = (char*[]){"pptx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.presentation.main+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.presProps+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.slide",
		.encoding = "base64",
		.extensions = (char*[]){"sldx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.slide+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.slideLayout+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.slideMaster+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.slideshow",
		.encoding = "base64",
		.extensions = (char*[]){"ppsx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.slideshow.main+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.slideUpdateInfo+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.tableStyles+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.tags+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.template",
		.encoding = "base64",
		.extensions = (char*[]){"potx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.template.main+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.presentationml.viewProps+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.calcChain+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.chartsheet+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.comments+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.connections+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.dialogsheet+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.externalLink+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.pivotCacheDefinition+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.pivotCacheRecords+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.pivotTable+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.queryTable+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.revisionHeaders+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.revisionLog+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.sharedStrings+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet",
		.encoding = "base64",
		.extensions = (char*[]){"xlsx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet.main+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.sheetMetadata+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.styles+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.table+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.tableSingleCells+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.template",
		.encoding = "base64",
		.extensions = (char*[]){"xltx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.template.main+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.userNames+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.volatileDependencies+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.theme+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.themeOverride+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.vmlDrawing",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.comments+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.document",
		.encoding = "base64",
		.extensions = (char*[]){"docx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.document.glossary+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.document.main+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.endnotes+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.fontTable+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.footer+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.footnotes+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.numbering+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.settings+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.styles+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.template",
		.encoding = "base64",
		.extensions = (char*[]){"dotx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.template.main+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-officedocument.wordprocessingml.webSettings+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-package.core-properties+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-package.digital-signature-xmlsignature+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.openxmlformats-package.relationships+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oracle.resource+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.orange.indata",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.osa.netdeploy",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.osgeo.mapguide.package",
		.encoding = "base64",
		.extensions = (char*[]){"mgp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.osgi.bundle",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.osgi.dp",
		.encoding = "base64",
		.extensions = (char*[]){"dp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.osgi.subsystem",
		.encoding = "base64",
		.extensions = (char*[]){"esa", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.otps.ct-kip+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.oxli.countgraph",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pagerduty+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.palm",
		.encoding = "base64",
		.extensions = (char*[]){"prc", "pdb", "pqa", "oprc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.panoply",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.paos.xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pawaafile",
		.encoding = "base64",
		.extensions = (char*[]){"paw", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pcos",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pg.format",
		.encoding = "base64",
		.extensions = (char*[]){"str", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pg.osasli",
		.encoding = "base64",
		.extensions = (char*[]){"ei6", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.piaccess.application-licence",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.picsel",
		.encoding = "base64",
		.extensions = (char*[]){"efif", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pmi.widget",
		.encoding = "base64",
		.extensions = (char*[]){"wg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.poc.group-advertisement+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pocketlearn",
		.encoding = "base64",
		.extensions = (char*[]){"plf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.powerbuilder6",
		.encoding = "base64",
		.extensions = (char*[]){"pbd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.powerbuilder6-s",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.powerbuilder7",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.powerbuilder7-s",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.powerbuilder75",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.powerbuilder75-s",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.preminet",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.previewsystems.box",
		.encoding = "base64",
		.extensions = (char*[]){"box", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.proteus.magazine",
		.encoding = "base64",
		.extensions = (char*[]){"mgz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.publishare-delta-tree",
		.encoding = "base64",
		.extensions = (char*[]){"qps", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pvi.ptid1",
		.encoding = "base64",
		.extensions = (char*[]){"pti", "ptid", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pwg-multiplexed",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.pwg-xhtml-print+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.qualcomm.brew-app-res",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.quarantainenet",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.Quark.QuarkXPress",
		.encoding = "8bit",
		.extensions = (char*[]){"qxd", "qxt", "qwd", "qwt", "qxl", "qxb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.quobject-quoxdocument",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.moml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-audit+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-audit-conf+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-audit-conn+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-audit-dialog+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-audit-stream+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-conf+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-dialog+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-dialog-base+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-dialog-fax-detect+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-dialog-fax-sendrecv+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-dialog-group+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-dialog-speech+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.radisys.msml-dialog-transform+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.rainstor.data",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.rapid",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.realvnc.bed",
		.encoding = "base64",
		.extensions = (char*[]){"bed", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.recordare.musicxml",
		.encoding = "base64",
		.extensions = (char*[]){"mxl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.recordare.musicxml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"musicxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.RenLearn.rlprint",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.rig.cryptonote",
		.encoding = "base64",
		.extensions = (char*[]){"cryptonote", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.rim.cod",
		.encoding = "base64",
		.extensions = (char*[]){"cod", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.rn-realmedia",
		.encoding = "base64",
		.extensions = (char*[]){"rm", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.rn-realmedia-vbr",
		.encoding = "base64",
		.extensions = (char*[]){"rmvb", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.route66.link66+xml",
		.encoding = "base64",
		.extensions = (char*[]){"link66", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.rs-274x",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ruckus.download",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.s3sms",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sailingtracker.track",
		.encoding = "base64",
		.extensions = (char*[]){"st", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sbm.cid",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sbm.mid2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.scribus",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.3df",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.csf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.doc",
		.encoding = "base64",
		.extensions = (char*[]){"sdoc", "sdo", "s1w", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.eml",
		.encoding = "base64",
		.extensions = (char*[]){"seml", "sem", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.mht",
		.encoding = "base64",
		.extensions = (char*[]){"smht", "smh", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.net",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.ppt",
		.encoding = "base64",
		.extensions = (char*[]){"sppt", "spp", "s1p", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.tiff",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealed.xls",
		.encoding = "base64",
		.extensions = (char*[]){"sxls", "sxl", "s1e", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealedmedia.softseal.html",
		.encoding = "base64",
		.extensions = (char*[]){"stml", "stm", "s1h", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sealedmedia.softseal.pdf",
		.encoding = "base64",
		.extensions = (char*[]){"spdf", "spd", "s1a", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.seemail",
		.encoding = "base64",
		.extensions = (char*[]){"see", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sema",
		.encoding = "base64",
		.extensions = (char*[]){"sema", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.semd",
		.encoding = "base64",
		.extensions = (char*[]){"semd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.semf",
		.encoding = "base64",
		.extensions = (char*[]){"semf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.shana.informed.formdata",
		.encoding = "base64",
		.extensions = (char*[]){"ifm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.shana.informed.formtemplate",
		.encoding = "base64",
		.extensions = (char*[]){"itp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.shana.informed.interchange",
		.encoding = "base64",
		.extensions = (char*[]){"iif", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.shana.informed.package",
		.encoding = "base64",
		.extensions = (char*[]){"ipk", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.SimTech-MindMapper",
		.encoding = "base64",
		.extensions = (char*[]){"twd", "twds", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.siren+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.smaf",
		.encoding = "base64",
		.extensions = (char*[]){"mmf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.smart.notebook",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.smart.teacher",
		.encoding = "base64",
		.extensions = (char*[]){"teacher", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.software602.filler.form+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.software602.filler.form-xml-zip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.solent.sdkm+xml",
		.encoding = "base64",
		.extensions = (char*[]){"sdkd", "sdkm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.spotfire.dxp",
		.encoding = "base64",
		.extensions = (char*[]){"dxp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.spotfire.sfs",
		.encoding = "base64",
		.extensions = (char*[]){"sfs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sss-cod",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sss-dtf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sss-ntf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.stardivision.calc",
		.encoding = "base64",
		.extensions = (char*[]){"sdc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.stardivision.chart",
		.encoding = "base64",
		.extensions = (char*[]){"sds", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.stardivision.draw",
		.encoding = "base64",
		.extensions = (char*[]){"sda", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.stardivision.impress",
		.encoding = "base64",
		.extensions = (char*[]){"sdd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.stardivision.math",
		.encoding = "base64",
		.extensions = (char*[]){"sdf", "smf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.stardivision.writer",
		.encoding = "base64",
		.extensions = (char*[]){"sdw", "vor", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.stardivision.writer-global",
		.encoding = "base64",
		.extensions = (char*[]){"sgl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.stepmania.package",
		.encoding = "base64",
		.extensions = (char*[]){"smzip", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.stepmania.stepchart",
		.encoding = "base64",
		.extensions = (char*[]){"sm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.street-stream",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sun.wadl+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.sun.xml.calc",
		.encoding = "base64",
		.extensions = (char*[]){"sxc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.calc.template",
		.encoding = "base64",
		.extensions = (char*[]){"stc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.draw",
		.encoding = "base64",
		.extensions = (char*[]){"sxd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.draw.template",
		.encoding = "base64",
		.extensions = (char*[]){"std", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.impress",
		.encoding = "base64",
		.extensions = (char*[]){"sxi", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.impress.template",
		.encoding = "base64",
		.extensions = (char*[]){"sti", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.math",
		.encoding = "base64",
		.extensions = (char*[]){"sxm", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.writer",
		.encoding = "base64",
		.extensions = (char*[]){"sxw", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.writer.global",
		.encoding = "base64",
		.extensions = (char*[]){"sxg", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sun.xml.writer.template",
		.encoding = "base64",
		.extensions = (char*[]){"stw", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.sus-calendar",
		.encoding = "base64",
		.extensions = (char*[]){"sus", "susp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.svd",
		.encoding = "base64",
		.extensions = (char*[]){"svd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.swiftview-ics",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.symbian.install",
		.encoding = "base64",
		.extensions = (char*[]){"sis", "sisx", 0},
		.registered = 0,
	},

	{
		.content_type = "application/vnd.syncml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xsm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.syncml.dm+wbxml",
		.encoding = "base64",
		.extensions = (char*[]){"bdm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.syncml.dm+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xdm", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.syncml.dm.notification",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.syncml.dmddf+wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.syncml.dmddf+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.syncml.dmtnds+wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.syncml.dmtnds+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.syncml.ds.notification",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.tao.intent-module-archive",
		.encoding = "base64",
		.extensions = (char*[]){"tao", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.tcpdump.pcap",
		.encoding = "base64",
		.extensions = (char*[]){"cap", "dmp", "pcap", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.tmd.mediaflex.api+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.tml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.tmobile-livetv",
		.encoding = "base64",
		.extensions = (char*[]){"tmo", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.trid.tpt",
		.encoding = "base64",
		.extensions = (char*[]){"tpt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.triscape.mxs",
		.encoding = "base64",
		.extensions = (char*[]){"mxs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.trueapp",
		.encoding = "base64",
		.extensions = (char*[]){"tra", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.truedoc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ubisoft.webplayer",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.ufdl",
		.encoding = "base64",
		.extensions = (char*[]){"ufd", "ufdl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uiq.theme",
		.encoding = "base64",
		.extensions = (char*[]){"utz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.umajin",
		.encoding = "base64",
		.extensions = (char*[]){"umj", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.unity",
		.encoding = "base64",
		.extensions = (char*[]){"unityweb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uoml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"uoml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.alert",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.alert-wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.bearer-choice",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.bearer-choice-wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.cacheop",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.cacheop-wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.channel",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.channel-wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.list",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.list-wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.listcmd",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.listcmd-wbxml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uplanet.signal",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.uri-map",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.valve.source.material",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.vcx",
		.encoding = "base64",
		.extensions = (char*[]){"vcx", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.vd-study",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.vectorworks",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.vel+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.verimatrix.vcas",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.vidsoft.vidconference",
		.encoding = "8bit",
		.extensions = (char*[]){"vsc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.visio",
		.encoding = "base64",
		.extensions = (char*[]){"vsd", "vst", "vsw", "vss", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.visionary",
		.encoding = "base64",
		.extensions = (char*[]){"vis", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.vividence.scriptfile",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.vsf",
		.encoding = "base64",
		.extensions = (char*[]){"vsf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wap.sic",
		.encoding = "base64",
		.extensions = (char*[]){"sic", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wap.slc",
		.encoding = "base64",
		.extensions = (char*[]){"slc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wap.wbxml",
		.encoding = "base64",
		.extensions = (char*[]){"wbxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wap.wmlc",
		.encoding = "base64",
		.extensions = (char*[]){"wmlc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wap.wmlscriptc",
		.encoding = "base64",
		.extensions = (char*[]){"wmlsc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.webturbo",
		.encoding = "base64",
		.extensions = (char*[]){"wtb", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wfa.p2p",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wfa.wsc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.windows.devicepairing",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wmc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wmf.bootstrap",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wolfram.mathematica",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wolfram.mathematica.package",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wolfram.player",
		.encoding = "base64",
		.extensions = (char*[]){"nbp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wordperfect",
		.encoding = "base64",
		.extensions = (char*[]){"wpd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wqd",
		.encoding = "base64",
		.extensions = (char*[]){"wqd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wrq-hp3000-labelled",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wt.stf",
		.encoding = "base64",
		.extensions = (char*[]){"stf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wv.csp+wbxml",
		.encoding = "base64",
		.extensions = (char*[]){"wv", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wv.csp+xml",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.wv.ssp+xml",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xacml+json",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xara",
		.encoding = "base64",
		.extensions = (char*[]){"xar", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xfdl",
		.encoding = "base64",
		.extensions = (char*[]){"xfdl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xfdl.webform",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xmi+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xmpie.cpkg",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xmpie.dpkg",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xmpie.plan",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xmpie.ppkg",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.xmpie.xlim",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.hv-dic",
		.encoding = "base64",
		.extensions = (char*[]){"hvd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.hv-script",
		.encoding = "base64",
		.extensions = (char*[]){"hvs", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.hv-voice",
		.encoding = "base64",
		.extensions = (char*[]){"hvp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.openscoreformat",
		.encoding = "base64",
		.extensions = (char*[]){"osf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.openscoreformat.osfpvg+xml",
		.encoding = "base64",
		.extensions = (char*[]){"osfpvg", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.remote-setup",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.smaf-audio",
		.encoding = "base64",
		.extensions = (char*[]){"saf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.smaf-phrase",
		.encoding = "base64",
		.extensions = (char*[]){"spf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.through-ngn",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yamaha.tunnel-udpencap",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yaoweme",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/vnd.yellowriver-custom-menu",
		.encoding = "base64",
		.extensions = (char*[]){"cmp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.zul",
		.encoding = "base64",
		.extensions = (char*[]){"zir", "zirz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vnd.zzazz.deck+xml",
		.encoding = "base64",
		.extensions = (char*[]){"zaz", 0},
		.registered = 1,
	},

	{
		.content_type = "application/voicexml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"vxml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/vq-rtcpxr",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/watcherinfo+xml",
		.encoding = "base64",
		.extensions = (char*[]){"wif", 0},
		.registered = 1,
	},

	{
		.content_type = "application/whoispp-query",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/whoispp-response",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/widget",
		.encoding = "base64",
		.extensions = (char*[]){"wgt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/winhlp",
		.encoding = "base64",
		.extensions = (char*[]){"hlp", 0},
		.registered = 0,
	},

	{
		.content_type = "application/wita",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/word",
		.encoding = "base64",
		.extensions = (char*[]){"doc", "dot", 0},
		.registered = 0,
	},

	{
		.content_type = "application/wordperfect",
		.encoding = "base64",
		.extensions = (char*[]){"wp", 0},
		.registered = 0,
	},

	{
		.content_type = "application/wordperfect5.1",
		.encoding = "base64",
		.extensions = (char*[]){"wp5", "wp", 0},
		.registered = 1,
	},

	{
		.content_type = "application/wordperfect6.1",
		.encoding = "base64",
		.extensions = (char*[]){"wp6", 0},
		.registered = 0,
	},

	{
		.content_type = "application/wordperfectd",
		.encoding = "base64",
		.extensions = (char*[]){"wpd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/wsdl+xml",
		.encoding = "base64",
		.extensions = (char*[]){"wsdl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/wspolicy+xml",
		.encoding = "base64",
		.extensions = (char*[]){"wspolicy", 0},
		.registered = 1,
	},

	{
		.content_type = "application/x-123",
		.encoding = "base64",
		.extensions = (char*[]){"wk", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-7z-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"7z", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-abiword",
		.encoding = "base64",
		.extensions = (char*[]){"abw", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-access",
		.encoding = "base64",
		.extensions = (char*[]){"mdf", "mda", "mdb", "mde", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ace-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"ace", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-apple-diskimage",
		.encoding = "base64",
		.extensions = (char*[]){"dmg", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-authorware-bin",
		.encoding = "base64",
		.extensions = (char*[]){"aab", "u32", "vox", "x32", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-authorware-map",
		.encoding = "base64",
		.extensions = (char*[]){"aam", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-authorware-seg",
		.encoding = "base64",
		.extensions = (char*[]){"aas", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-bcpio",
		.encoding = "base64",
		.extensions = (char*[]){"bcpio", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-bittorrent",
		.encoding = "base64",
		.extensions = (char*[]){"torrent", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-bleeper",
		.encoding = "base64",
		.extensions = (char*[]){"bleep", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-blorb",
		.encoding = "base64",
		.extensions = (char*[]){"blb", "blorb", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-bzip",
		.encoding = "base64",
		.extensions = (char*[]){"bz", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-bzip2",
		.encoding = "base64",
		.extensions = (char*[]){"boz", "bz2", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-cbr",
		.encoding = "base64",
		.extensions = (char*[]){"cb7", "cba", "cbr", "cbt", "cbz", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-cdlink",
		.encoding = "base64",
		.extensions = (char*[]){"vcd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-cfs-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"cfs", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-chat",
		.encoding = "base64",
		.extensions = (char*[]){"chat", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-chess-pgn",
		.encoding = "base64",
		.extensions = (char*[]){"pgn", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-chrome-extension",
		.encoding = "base64",
		.extensions = (char*[]){"crx", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-clariscad",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-compress",
		.encoding = "base64",
		.extensions = (char*[]){"z", "Z", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"z", "Z", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-conference",
		.encoding = "base64",
		.extensions = (char*[]){"nsc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-cpio",
		.encoding = "base64",
		.extensions = (char*[]){"cpio", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-csh",
		.encoding = "8bit",
		.extensions = (char*[]){"csh", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-cu-seeme",
		.encoding = "base64",
		.extensions = (char*[]){"csm", "cu", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-debian-package",
		.encoding = "base64",
		.extensions = (char*[]){"deb", "udeb", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-dgc-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"dgc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-director",
		.encoding = "base64",
		.extensions = (char*[]){"dcr", "@dir", "@dxr", "cct", "cst", "cxt", "dir", "dxr", "fgd", "swa", "w3d", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-doom",
		.encoding = "base64",
		.extensions = (char*[]){"wad", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-drafting",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-dtbncx+xml",
		.encoding = "base64",
		.extensions = (char*[]){"ncx", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-dtbook+xml",
		.encoding = "base64",
		.extensions = (char*[]){"dtb", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-dtbresource+xml",
		.encoding = "base64",
		.extensions = (char*[]){"res", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-dvi",
		.encoding = "base64",
		.extensions = (char*[]){"dvi", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-dxf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-envoy",
		.encoding = "base64",
		.extensions = (char*[]){"evy", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-eva",
		.encoding = "base64",
		.extensions = (char*[]){"eva", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-excel",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-font-bdf",
		.encoding = "base64",
		.extensions = (char*[]){"bdf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-ghostscript",
		.encoding = "base64",
		.extensions = (char*[]){"gsf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-linux-psf",
		.encoding = "base64",
		.extensions = (char*[]){"psf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-opentype",
		.encoding = "base64",
		.extensions = (char*[]){"otf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-otf",
		.encoding = "base64",
		.extensions = (char*[]){"otf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-pcf",
		.encoding = "base64",
		.extensions = (char*[]){"pcf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-snf",
		.encoding = "base64",
		.extensions = (char*[]){"snf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-truetype",
		.encoding = "base64",
		.extensions = (char*[]){"ttf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-ttf",
		.encoding = "base64",
		.extensions = (char*[]){"ttc", "ttf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-font-type1",
		.encoding = "base64",
		.extensions = (char*[]){"afm", "pfa", "pfb", "pfm", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-fractals",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-freearc",
		.encoding = "base64",
		.extensions = (char*[]){"arc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-futuresplash",
		.encoding = "base64",
		.extensions = (char*[]){"spl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-gca-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"gca", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ghostview",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-glulx",
		.encoding = "base64",
		.extensions = (char*[]){"ulx", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-gnumeric",
		.encoding = "base64",
		.extensions = (char*[]){"gnumeric", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-gramps-xml",
		.encoding = "base64",
		.extensions = (char*[]){"gramps", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-gtar",
		.encoding = "base64",
		.extensions = (char*[]){"gtar", "tgz", "tbz2", "tbz", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-gzip",
		.encoding = "base64",
		.extensions = (char*[]){"gz", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-hdf",
		.encoding = "base64",
		.extensions = (char*[]){"hdf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-hep",
		.encoding = "base64",
		.extensions = (char*[]){"hep", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-html+ruby",
		.encoding = "8bit",
		.extensions = (char*[]){"rhtml", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-httpd-php",
		.encoding = "8bit",
		.extensions = (char*[]){"phtml", "pht", "php", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ibooks+zip",
		.encoding = "base64",
		.extensions = (char*[]){"ibooks", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ica",
		.encoding = "base64",
		.extensions = (char*[]){"ica", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ideas",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-imagemap",
		.encoding = "8bit",
		.extensions = (char*[]){"imagemap", "imap", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-install-instructions",
		.encoding = "base64",
		.extensions = (char*[]){"install", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-iso9660-image",
		.encoding = "base64",
		.extensions = (char*[]){"iso", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-iwork-keynote-sffkey",
		.encoding = "base64",
		.extensions = (char*[]){"key", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-iwork-numbers-sffnumbers",
		.encoding = "base64",
		.extensions = (char*[]){"numbers", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-iwork-pages-sffpages",
		.encoding = "base64",
		.extensions = (char*[]){"pages", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-java-archive",
		.encoding = "base64",
		.extensions = (char*[]){"jar", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-java-jnlp-file",
		.encoding = "base64",
		.extensions = (char*[]){"jnlp", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-java-serialized-object",
		.encoding = "base64",
		.extensions = (char*[]){"ser", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-java-vm",
		.encoding = "base64",
		.extensions = (char*[]){"class", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-javascript",
		.encoding = "8bit",
		.extensions = (char*[]){"js", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-koan",
		.encoding = "base64",
		.extensions = (char*[]){"skp", "skd", "skt", "skm", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-latex",
		.encoding = "8bit",
		.extensions = (char*[]){"ltx", "latex", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-lotus-123",
		.encoding = "base64",
		.extensions = (char*[]){"wks", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-lzh-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"lha", "lzh", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mac",
		.encoding = "base64",
		.extensions = (char*[]){"bin", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mac-compactpro",
		.encoding = "base64",
		.extensions = (char*[]){"cpt", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-macbase64",
		.encoding = "base64",
		.extensions = (char*[]){"bin", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-macbinary",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-maker",
		.encoding = "base64",
		.extensions = (char*[]){"frm", "maker", "frame", "fm", "fb", "book", "fbdoc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mathcad",
		.encoding = "base64",
		.extensions = (char*[]){"mcd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mathematica-old",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-mie",
		.encoding = "base64",
		.extensions = (char*[]){"mie", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mif",
		.encoding = "base64",
		.extensions = (char*[]){"mif", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mobipocket-ebook",
		.encoding = "base64",
		.extensions = (char*[]){"mobi", "prc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ms-application",
		.encoding = "base64",
		.extensions = (char*[]){"application", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ms-shortcut",
		.encoding = "base64",
		.extensions = (char*[]){"lnk", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ms-wmd",
		.encoding = "base64",
		.extensions = (char*[]){"wmd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ms-wmz",
		.encoding = "base64",
		.extensions = (char*[]){"wmz", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ms-xbap",
		.encoding = "base64",
		.extensions = (char*[]){"xbap", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msaccess",
		.encoding = "base64",
		.extensions = (char*[]){"mda", "mdb", "mde", "mdf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msbinder",
		.encoding = "base64",
		.extensions = (char*[]){"obd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mscardfile",
		.encoding = "base64",
		.extensions = (char*[]){"crd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msclip",
		.encoding = "base64",
		.extensions = (char*[]){"clp", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msdos-program",
		.encoding = "base64",
		.extensions = (char*[]){"cmd", "bat", "com", "exe", "reg", "ps1", "vbs", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msdownload",
		.encoding = "base64",
		.extensions = (char*[]){"exe", "com", "cmd", "bat", "dll", "msi", "reg", "ps1", "vbs", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msmediaview",
		.encoding = "base64",
		.extensions = (char*[]){"m13", "m14", "mvb", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msmetafile",
		.encoding = "base64",
		.extensions = (char*[]){"emf", "emz", "wmf", "wmz", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msmoney",
		.encoding = "base64",
		.extensions = (char*[]){"mny", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mspublisher",
		.encoding = "base64",
		.extensions = (char*[]){"pub", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msschedule",
		.encoding = "base64",
		.extensions = (char*[]){"scd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msterminal",
		.encoding = "base64",
		.extensions = (char*[]){"trm", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-msword",
		.encoding = "base64",
		.extensions = (char*[]){"doc", "dot", "wrd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-mswrite",
		.encoding = "base64",
		.extensions = (char*[]){"wri", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-netcdf",
		.encoding = "base64",
		.extensions = (char*[]){"nc", "cdf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ns-proxy-autoconfig",
		.encoding = "base64",
		.extensions = (char*[]){"pac", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-nzb",
		.encoding = "base64",
		.extensions = (char*[]){"nzb", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-opera-extension",
		.encoding = "base64",
		.extensions = (char*[]){"oex", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-pagemaker",
		.encoding = "base64",
		.extensions = (char*[]){"pm", "pm5", "pt5", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-perl",
		.encoding = "8bit",
		.extensions = (char*[]){"pl", "pm", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-pgp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-pkcs12",
		.encoding = "base64",
		.extensions = (char*[]){"p12", "pfx", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-pkcs7-certificates",
		.encoding = "base64",
		.extensions = (char*[]){"p7b", "spc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-pkcs7-certreqresp",
		.encoding = "base64",
		.extensions = (char*[]){"p7r", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-python",
		.encoding = "8bit",
		.extensions = (char*[]){"py", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-quicktimeplayer",
		.encoding = "base64",
		.extensions = (char*[]){"qtl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-rar-compressed",
		.encoding = "base64",
		.extensions = (char*[]){"rar", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-remote_printing",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-research-info-systems",
		.encoding = "base64",
		.extensions = (char*[]){"ris", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-rtf",
		.encoding = "base64",
		.extensions = (char*[]){"rtf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-ruby",
		.encoding = "8bit",
		.extensions = (char*[]){"rb", "rbw", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-set",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-sh",
		.encoding = "8bit",
		.extensions = (char*[]){"sh", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-shar",
		.encoding = "8bit",
		.extensions = (char*[]){"shar", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-shockwave-flash",
		.encoding = "base64",
		.extensions = (char*[]){"swf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-silverlight-app",
		.encoding = "base64",
		.extensions = (char*[]){"xap", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-SLA",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-solids",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-spss",
		.encoding = "base64",
		.extensions = (char*[]){"sav", "sbs", "sps", "spo", "spp", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-sql",
		.encoding = "base64",
		.extensions = (char*[]){"sql", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-STEP",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-stuffit",
		.encoding = "base64",
		.extensions = (char*[]){"sit", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-stuffitx",
		.encoding = "base64",
		.extensions = (char*[]){"sitx", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-subrip",
		.encoding = "base64",
		.extensions = (char*[]){"srt", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-sv4cpio",
		.encoding = "base64",
		.extensions = (char*[]){"sv4cpio", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-sv4crc",
		.encoding = "base64",
		.extensions = (char*[]){"sv4crc", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-t3vm-image",
		.encoding = "base64",
		.extensions = (char*[]){"t3", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-tads",
		.encoding = "base64",
		.extensions = (char*[]){"gam", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-tar",
		.encoding = "base64",
		.extensions = (char*[]){"tar", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-tcl",
		.encoding = "8bit",
		.extensions = (char*[]){"tcl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-tex",
		.encoding = "8bit",
		.extensions = (char*[]){"tex", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-tex-tfm",
		.encoding = "base64",
		.extensions = (char*[]){"tfm", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-texinfo",
		.encoding = "8bit",
		.extensions = (char*[]){"texinfo", "texi", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-tgif",
		.encoding = "base64",
		.extensions = (char*[]){"obj", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-toolbook",
		.encoding = "base64",
		.extensions = (char*[]){"tbk", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-troff",
		.encoding = "base64",
		.extensions = (char*[]){"t", "tr", "roff", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-troff-man",
		.encoding = "8bit",
		.extensions = (char*[]){"man", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-troff-me",
		.encoding = "base64",
		.extensions = (char*[]){"me", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-troff-ms",
		.encoding = "base64",
		.extensions = (char*[]){"ms", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-u-star",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/x-ustar",
		.encoding = "base64",
		.extensions = (char*[]){"ustar", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-VMSBACKUP",
		.encoding = "base64",
		.extensions = (char*[]){"bck", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-wais-source",
		.encoding = "base64",
		.extensions = (char*[]){"src", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-web-app-manifest+json",
		.encoding = "base64",
		.extensions = (char*[]){"webapp", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-Wingz",
		.encoding = "base64",
		.extensions = (char*[]){"wz", "wkz", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-word",
		.encoding = "base64",
		.extensions = (char*[]){"doc", "dot", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-wordperfect",
		.encoding = "base64",
		.extensions = (char*[]){"wp", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-wordperfect6.1",
		.encoding = "base64",
		.extensions = (char*[]){"wp6", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-wordperfectd",
		.encoding = "base64",
		.extensions = (char*[]){"wpd", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-www-form-urlencoded",
		.encoding = "7bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/x-x509-ca-cert",
		.encoding = "base64",
		.extensions = (char*[]){"crt", "der", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-xfig",
		.encoding = "base64",
		.extensions = (char*[]){"fig", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-xliff+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xlf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-xpinstall",
		.encoding = "base64",
		.extensions = (char*[]){"xpi", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-xz",
		.encoding = "base64",
		.extensions = (char*[]){"xz", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x-zmachine",
		.encoding = "base64",
		.extensions = (char*[]){"z1", "z2", "z3", "z4", "z5", "z6", "z7", "z8", 0},
		.registered = 0,
	},

	{
		.content_type = "application/x400-bp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/x400.bp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "application/xacml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xaml+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xaml", 0},
		.registered = 0,
	},

	{
		.content_type = "application/xcap-att+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xcap-caps+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xcap-diff+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xdf", 0},
		.registered = 1,
	},

	{
		.content_type = "application/xcap-el+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xcap-error+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xcap-ns+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xcon-conference-info+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xcon-conference-info-diff+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xenc+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xenc", 0},
		.registered = 1,
	},

	{
		.content_type = "application/xhtml+xml",
		.encoding = "8bit",
		.extensions = (char*[]){"xht", "xhtml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/xhtml-voice+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xml",
		.encoding = "8bit",
		.extensions = (char*[]){"xml", "xsl", 0},
		.registered = 1,
	},

	{
		.content_type = "application/xml-dtd",
		.encoding = "8bit",
		.extensions = (char*[]){"dtd", 0},
		.registered = 1,
	},

	{
		.content_type = "application/xml-external-parsed-entity",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xml-patch+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xmpp+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "application/xop+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xop", 0},
		.registered = 1,
	},

	{
		.content_type = "application/xproc+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xpl", 0},
		.registered = 0,
	},

	{
		.content_type = "application/xslt+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xslt", 0},
		.registered = 1,
	},

	{
		.content_type = "application/xspf+xml",
		.encoding = "base64",
		.extensions = (char*[]){"xspf", 0},
		.registered = 0,
	},

	{
		.content_type = "application/xv+xml",
		.encoding = "base64",
		.extensions = (char*[]){"mxml", "xhvml", "xvm", "xvml", 0},
		.registered = 1,
	},

	{
		.content_type = "application/yang",
		.encoding = "base64",
		.extensions = (char*[]){"yang", 0},
		.registered = 1,
	},

	{
		.content_type = "application/yin+xml",
		.encoding = "base64",
		.extensions = (char*[]){"yin", 0},
		.registered = 1,
	},

	{
		.content_type = "application/zip",
		.encoding = "base64",
		.extensions = (char*[]){"zip", 0},
		.registered = 1,
	},

	{
		.content_type = "application/zlib",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/1d-interleaved-parityfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/32kadpcm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/3gpp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/3gpp2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/ac3",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/adpcm",
		.encoding = "base64",
		.extensions = (char*[]){"adp", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/AMR",
		.encoding = "base64",
		.extensions = (char*[]){"amr", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/AMR-WB",
		.encoding = "base64",
		.extensions = (char*[]){"awb", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/amr-wb+",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/aptx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/asc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/ATRAC-ADVANCED-LOSSLESS",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/ATRAC-X",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/ATRAC3",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/basic",
		.encoding = "base64",
		.extensions = (char*[]){"au", "snd", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/BV16",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/BV32",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/clearmode",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/CN",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/DAT12",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/dls",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/dsr-es201108",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/dsr-es202050",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/dsr-es202211",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/dsr-es202212",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/DV",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/DVI4",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/eac3",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/encaprtp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRC",
		.encoding = "base64",
		.extensions = (char*[]){"evc", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/EVRC-QCP",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRC0",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRC1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCB",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCB0",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCB1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCNW",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCNW0",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCNW1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCWB",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCWB0",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVRCWB1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/EVS",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/example",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/fwdred",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G711-0",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G719",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G722",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G7221",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G723",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G726-16",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G726-24",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G726-32",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G726-40",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G728",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G729",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G7291",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G729D",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/G729E",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/GSM",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/GSM-EFR",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/GSM-HR-08",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/iLBC",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/ip-mr_v2.5",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/L16",
		.encoding = "base64",
		.extensions = (char*[]){"l16", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/L20",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/L24",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/L8",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/LPC",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/midi",
		.encoding = "base64",
		.extensions = (char*[]){"kar", "mid", "midi", "rmi", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/mobile-xmf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/mp4",
		.encoding = "base64",
		.extensions = (char*[]){"mp4", "mpg4", "f4a", "f4b", "mp4a", "m4a", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/MP4A-LATM",
		.encoding = "base64",
		.extensions = (char*[]){"m4a", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/MPA",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/mpa-robust",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/mpeg",
		.encoding = "base64",
		.extensions = (char*[]){"mpga", "mp2", "mp3", "m2a", "m3a", "mp2a", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/mpeg4-generic",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/ogg",
		.encoding = "base64",
		.extensions = (char*[]){"oga", "ogg", "spx", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/opus",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/parityfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/PCMA",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/PCMA-WB",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/PCMU",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/PCMU-WB",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/prs.sid",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/QCELP",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/raptorfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/RED",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/rtp-enc-aescm128",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/rtp-midi",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/rtploopback",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/rtx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/s3m",
		.encoding = "base64",
		.extensions = (char*[]){"s3m", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/silk",
		.encoding = "base64",
		.extensions = (char*[]){"sil", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/SMV",
		.encoding = "base64",
		.extensions = (char*[]){"smv", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/SMV-QCP",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/SMV0",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/sp-midi",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/speex",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/t140c",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/t38",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/telephone-event",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/tone",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/UEMCLIP",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/ulpfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/VDVI",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/VMR-WB",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.3gpp.iufp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.4SB",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.audiokoz",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.CELP",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.cisco.nse",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.cmles.radio-events",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.cns.anp1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.cns.inf1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dece.audio",
		.encoding = "base64",
		.extensions = (char*[]){"uva", "uvva", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.digital-winds",
		.encoding = "7bit",
		.extensions = (char*[]){"eol", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dlna.adts",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dolby.heaac.1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dolby.heaac.2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dolby.mlp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dolby.mps",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dolby.pl2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dolby.pl2x",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dolby.pl2z",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dolby.pulse.1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dra",
		.encoding = "base64",
		.extensions = (char*[]){"dra", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dts",
		.encoding = "base64",
		.extensions = (char*[]){"dts", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dts.hd",
		.encoding = "base64",
		.extensions = (char*[]){"dtshd", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.dvb.file",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.everad.plj",
		.encoding = "base64",
		.extensions = (char*[]){"plj", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.hns.audio",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.lucent.voice",
		.encoding = "base64",
		.extensions = (char*[]){"lvp", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.ms-playready.media.pya",
		.encoding = "base64",
		.extensions = (char*[]){"pya", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.nokia.mobile-xmf",
		.encoding = "base64",
		.extensions = (char*[]){"mxmf", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.nortel.vbk",
		.encoding = "base64",
		.extensions = (char*[]){"vbk", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.nuera.ecelp4800",
		.encoding = "base64",
		.extensions = (char*[]){"ecelp4800", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.nuera.ecelp7470",
		.encoding = "base64",
		.extensions = (char*[]){"ecelp7470", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.nuera.ecelp9600",
		.encoding = "base64",
		.extensions = (char*[]){"ecelp9600", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.octel.sbc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.qcelp",
		.encoding = "base64",
		.extensions = (char*[]){"qcp", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.rhetorex.32kadpcm",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.rip",
		.encoding = "base64",
		.extensions = (char*[]){"rip", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.sealedmedia.softseal.mpeg",
		.encoding = "base64",
		.extensions = (char*[]){"smp3", "smp", "s1m", 0},
		.registered = 1,
	},

	{
		.content_type = "audio/vnd.vmx.cvsd",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vorbis",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/vorbis-config",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "audio/webm",
		.encoding = "base64",
		.extensions = (char*[]){"weba", "webm", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-aac",
		.encoding = "base64",
		.extensions = (char*[]){"aac", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-aiff",
		.encoding = "base64",
		.extensions = (char*[]){"aif", "aifc", "aiff", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-caf",
		.encoding = "base64",
		.extensions = (char*[]){"caf", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-flac",
		.encoding = "base64",
		.extensions = (char*[]){"flac", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-matroska",
		.encoding = "base64",
		.extensions = (char*[]){"mka", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-midi",
		.encoding = "base64",
		.extensions = (char*[]){"mid", "midi", "kar", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-mpegurl",
		.encoding = "base64",
		.extensions = (char*[]){"m3u", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-ms-wax",
		.encoding = "base64",
		.extensions = (char*[]){"wax", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-ms-wma",
		.encoding = "base64",
		.extensions = (char*[]){"wma", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-ms-wmv",
		.encoding = "base64",
		.extensions = (char*[]){"wmv", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-pn-realaudio",
		.encoding = "base64",
		.extensions = (char*[]){"ra", "ram", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-pn-realaudio-plugin",
		.encoding = "base64",
		.extensions = (char*[]){"rmp", "rpm", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-realaudio",
		.encoding = "base64",
		.extensions = (char*[]){"ra", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/x-wav",
		.encoding = "base64",
		.extensions = (char*[]){"wav", 0},
		.registered = 0,
	},

	{
		.content_type = "audio/xm",
		.encoding = "base64",
		.extensions = (char*[]){"xm", 0},
		.registered = 0,
	},

	{
		.content_type = "chemical/x-cdx",
		.encoding = "base64",
		.extensions = (char*[]){"cdx", 0},
		.registered = 0,
	},

	{
		.content_type = "chemical/x-cif",
		.encoding = "base64",
		.extensions = (char*[]){"cif", 0},
		.registered = 0,
	},

	{
		.content_type = "chemical/x-cmdf",
		.encoding = "base64",
		.extensions = (char*[]){"cmdf", 0},
		.registered = 0,
	},

	{
		.content_type = "chemical/x-cml",
		.encoding = "base64",
		.extensions = (char*[]){"cml", 0},
		.registered = 0,
	},

	{
		.content_type = "chemical/x-csml",
		.encoding = "base64",
		.extensions = (char*[]){"csml", 0},
		.registered = 0,
	},

	{
		.content_type = "chemical/x-pdb",
		.encoding = "base64",
		.extensions = (char*[]){"pdb", 0},
		.registered = 0,
	},

	{
		.content_type = "chemical/x-xyz",
		.encoding = "base64",
		.extensions = (char*[]){"xyz", 0},
		.registered = 0,
	},

	{
		.content_type = "drawing/dwf",
		.encoding = "base64",
		.extensions = (char*[]){"dwf", 0},
		.registered = 0,
	},

	{
		.content_type = "image/bmp",
		.encoding = "base64",
		.extensions = (char*[]){"bmp", 0},
		.registered = 1,
	},

	{
		.content_type = "image/cgm",
		.encoding = "base64",
		.extensions = (char*[]){"cgm", 0},
		.registered = 1,
	},

	{
		.content_type = "image/cmu-raster",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "image/emf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/example",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/fits",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/g3fax",
		.encoding = "base64",
		.extensions = (char*[]){"g3", 0},
		.registered = 1,
	},

	{
		.content_type = "image/gif",
		.encoding = "base64",
		.extensions = (char*[]){"gif", 0},
		.registered = 1,
	},

	{
		.content_type = "image/ief",
		.encoding = "base64",
		.extensions = (char*[]){"ief", 0},
		.registered = 1,
	},

	{
		.content_type = "image/jp2",
		.encoding = "base64",
		.extensions = (char*[]){"jp2", "jpg2", 0},
		.registered = 1,
	},

	{
		.content_type = "image/jpeg",
		.encoding = "base64",
		.extensions = (char*[]){"jpeg", "jpg", "jpe", 0},
		.registered = 1,
	},

	{
		.content_type = "image/jpm",
		.encoding = "base64",
		.extensions = (char*[]){"jpm", "jpgm", 0},
		.registered = 1,
	},

	{
		.content_type = "image/jpx",
		.encoding = "base64",
		.extensions = (char*[]){"jpx", "jpf", 0},
		.registered = 1,
	},

	{
		.content_type = "image/ktx",
		.encoding = "base64",
		.extensions = (char*[]){"ktx", 0},
		.registered = 1,
	},

	{
		.content_type = "image/naplps",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/pjpeg",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "image/png",
		.encoding = "base64",
		.extensions = (char*[]){"png", 0},
		.registered = 1,
	},

	{
		.content_type = "image/prs.btif",
		.encoding = "base64",
		.extensions = (char*[]){"btif", 0},
		.registered = 1,
	},

	{
		.content_type = "image/prs.pti",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/pwg-raster",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/sgi",
		.encoding = "base64",
		.extensions = (char*[]){"sgi", 0},
		.registered = 0,
	},

	{
		.content_type = "image/svg+xml",
		.encoding = "8bit",
		.extensions = (char*[]){"svg", "svgz", 0},
		.registered = 1,
	},

	{
		.content_type = "image/t38",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/targa",
		.encoding = "base64",
		.extensions = (char*[]){"tga", 0},
		.registered = 0,
	},

	{
		.content_type = "image/tiff",
		.encoding = "base64",
		.extensions = (char*[]){"tiff", "tif", 0},
		.registered = 1,
	},

	{
		.content_type = "image/tiff-fx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.adobe.photoshop",
		.encoding = "base64",
		.extensions = (char*[]){"psd", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.airzip.accelerator.azv",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.cns.inf2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.dece.graphic",
		.encoding = "base64",
		.extensions = (char*[]){"uvg", "uvi", "uvvg", "uvvi", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.dgn",
		.encoding = "base64",
		.extensions = (char*[]){"dgn", 0},
		.registered = 0,
	},

	{
		.content_type = "image/vnd.djvu",
		.encoding = "base64",
		.extensions = (char*[]){"djvu", "djv", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.dvb.subtitle",
		.encoding = "base64",
		.extensions = (char*[]){"sub", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.dwg",
		.encoding = "base64",
		.extensions = (char*[]){"dwg", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.dxf",
		.encoding = "base64",
		.extensions = (char*[]){"dxf", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.fastbidsheet",
		.encoding = "base64",
		.extensions = (char*[]){"fbs", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.fpx",
		.encoding = "base64",
		.extensions = (char*[]){"fpx", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.fst",
		.encoding = "base64",
		.extensions = (char*[]){"fst", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.fujixerox.edmics-mmr",
		.encoding = "base64",
		.extensions = (char*[]){"mmr", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.fujixerox.edmics-rlc",
		.encoding = "base64",
		.extensions = (char*[]){"rlc", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.globalgraphics.pgb",
		.encoding = "base64",
		.extensions = (char*[]){"pgb", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.microsoft.icon",
		.encoding = "base64",
		.extensions = (char*[]){"ico", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.mix",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.mozilla.apng",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.ms-modi",
		.encoding = "base64",
		.extensions = (char*[]){"mdi", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.ms-photo",
		.encoding = "base64",
		.extensions = (char*[]){"wdp", 0},
		.registered = 0,
	},

	{
		.content_type = "image/vnd.net-fpx",
		.encoding = "base64",
		.extensions = (char*[]){"npx", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.net.fpx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "image/vnd.radiance",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.sealed.png",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.sealedmedia.softseal.gif",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.sealedmedia.softseal.jpg",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.svf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.tencent.tap",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.valve.source.texture",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/vnd.wap.wbmp",
		.encoding = "base64",
		.extensions = (char*[]){"wbmp", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.xiff",
		.encoding = "base64",
		.extensions = (char*[]){"xif", 0},
		.registered = 1,
	},

	{
		.content_type = "image/vnd.zbrush.pcx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/webp",
		.encoding = "base64",
		.extensions = (char*[]){"webp", 0},
		.registered = 0,
	},

	{
		.content_type = "image/wmf",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "image/x-3ds",
		.encoding = "base64",
		.extensions = (char*[]){"3ds", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-bmp",
		.encoding = "base64",
		.extensions = (char*[]){"bmp", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-cmu-raster",
		.encoding = "base64",
		.extensions = (char*[]){"ras", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-cmx",
		.encoding = "base64",
		.extensions = (char*[]){"cmx", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-compressed-xcf",
		.encoding = "base64",
		.extensions = (char*[]){"xcfbz2", "xcfgz", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-freehand",
		.encoding = "base64",
		.extensions = (char*[]){"fh", "fh4", "fh5", "fh7", "fhc", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-hasselblad-3fr",
		.encoding = "base64",
		.extensions = (char*[]){"3fr", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-icon",
		.encoding = "base64",
		.extensions = (char*[]){"ico", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-mrsid-image",
		.encoding = "base64",
		.extensions = (char*[]){"sid", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-ms-bmp",
		.encoding = "base64",
		.extensions = (char*[]){"bmp", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-paintshoppro",
		.encoding = "base64",
		.extensions = (char*[]){"psp", "pspimage", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-pcx",
		.encoding = "base64",
		.extensions = (char*[]){"pcx", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-pict",
		.encoding = "base64",
		.extensions = (char*[]){"pct", "pic", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-portable-anymap",
		.encoding = "base64",
		.extensions = (char*[]){"pnm", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-portable-bitmap",
		.encoding = "base64",
		.extensions = (char*[]){"pbm", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-portable-graymap",
		.encoding = "base64",
		.extensions = (char*[]){"pgm", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-portable-pixmap",
		.encoding = "base64",
		.extensions = (char*[]){"ppm", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-rgb",
		.encoding = "base64",
		.extensions = (char*[]){"rgb", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-targa",
		.encoding = "base64",
		.extensions = (char*[]){"tga", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-tga",
		.encoding = "base64",
		.extensions = (char*[]){"tga", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-vnd.dgn",
		.encoding = "base64",
		.extensions = (char*[]){"dgn", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-win-bmp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "image/x-xbitmap",
		.encoding = "7bit",
		.extensions = (char*[]){"xbm", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-xbm",
		.encoding = "7bit",
		.extensions = (char*[]){"xbm", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-xcf",
		.encoding = "base64",
		.extensions = (char*[]){"xcf", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-xpixmap",
		.encoding = "8bit",
		.extensions = (char*[]){"xpm", 0},
		.registered = 0,
	},

	{
		.content_type = "image/x-xwindowdump",
		.encoding = "base64",
		.extensions = (char*[]){"xwd", 0},
		.registered = 0,
	},

	{
		.content_type = "message/CPIM",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/delivery-status",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/disposition-notification",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/example",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/external-body",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/feedback-report",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/global",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/global-delivery-status",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/global-disposition-notification",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/global-headers",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/http",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/imdn+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/news",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/partial",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/rfc822",
		.encoding = "8bit",
		.extensions = (char*[]){"eml", "mime", 0},
		.registered = 1,
	},

	{
		.content_type = "message/s-http",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/sip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/sipfrag",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/tracking-status",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/vnd.si.simp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "message/vnd.wfa.wsc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/example",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/iges",
		.encoding = "base64",
		.extensions = (char*[]){"igs", "iges", 0},
		.registered = 1,
	},

	{
		.content_type = "model/mesh",
		.encoding = "base64",
		.extensions = (char*[]){"msh", "mesh", "silo", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vnd.collada+xml",
		.encoding = "base64",
		.extensions = (char*[]){"dae", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vnd.dwf",
		.encoding = "base64",
		.extensions = (char*[]){"dwf", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vnd.flatland.3dml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/vnd.gdl",
		.encoding = "base64",
		.extensions = (char*[]){"gdl", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vnd.gs-gdl",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/vnd.gtw",
		.encoding = "base64",
		.extensions = (char*[]){"gtw", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vnd.moml+xml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/vnd.mts",
		.encoding = "base64",
		.extensions = (char*[]){"mts", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vnd.opengex",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/vnd.parasolid.transmit.binary",
		.encoding = "base64",
		.extensions = (char*[]){"x_b", "xmt_bin", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vnd.parasolid.transmit.text",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"x_t", "xmt_txt", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vnd.rosette.annotated-data-model",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/vnd.valve.source.compiled-map",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/vnd.vtu",
		.encoding = "base64",
		.extensions = (char*[]){"vtu", 0},
		.registered = 1,
	},

	{
		.content_type = "model/vrml",
		.encoding = "base64",
		.extensions = (char*[]){"wrl", "vrml", 0},
		.registered = 1,
	},

	{
		.content_type = "model/x3d+binary",
		.encoding = "base64",
		.extensions = (char*[]){"x3db", "x3dbz", 0},
		.registered = 0,
	},

	{
		.content_type = "model/x3d+fastinfoset",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "model/x3d+vrml",
		.encoding = "base64",
		.extensions = (char*[]){"x3dv", "x3dvz", 0},
		.registered = 0,
	},

	{
		.content_type = "model/x3d+xml",
		.encoding = "base64",
		.extensions = (char*[]){"x3d", "x3dz", 0},
		.registered = 1,
	},

	{
		.content_type = "model/x3d-vrml",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/alternative",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/appledouble",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/byteranges",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/digest",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/encrypted",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/example",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/form-data",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/header-set",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/mixed",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/parallel",
		.encoding = "8bit",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/related",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/report",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/signed",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/voice-message",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/x-gzip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "multipart/x-mixed-replace",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "multipart/x-parallel",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "multipart/x-tar",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "multipart/x-ustar",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "multipart/x-www-form-urlencoded",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "multipart/x-zip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "text/1d-interleaved-parityfec",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/cache-manifest",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"appcache", "manifest", 0},
		.registered = 1,
	},

	{
		.content_type = "text/calendar",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"ics", "ifb", 0},
		.registered = 1,
	},

	{
		.content_type = "text/comma-separated-values",
		.encoding = "8bit",
		.extensions = (char*[]){"csv", 0},
		.registered = 0,
	},

	{
		.content_type = "text/css",
		.encoding = "8bit",
		.extensions = (char*[]){"css", 0},
		.registered = 1,
	},

	{
		.content_type = "text/csv",
		.encoding = "8bit",
		.extensions = (char*[]){"csv", 0},
		.registered = 1,
	},

	{
		.content_type = "text/csv-schema",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/directory",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/dns",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/ecmascript",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/encaprtp",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/enriched",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/example",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/fwdred",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/grammar-ref-list",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/html",
		.encoding = "8bit",
		.extensions = (char*[]){"html", "htm", "htmlx", "shtml", "htx", 0},
		.registered = 1,
	},

	{
		.content_type = "text/javascript",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"js", 0},
		.registered = 1,
	},

	{
		.content_type = "text/jcr-cnd",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/markdown",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/mizar",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/n3",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"n3", 0},
		.registered = 1,
	},

	{
		.content_type = "text/parameters",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/parityfec",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/plain",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"txt", "asc", "c", "cc", "h", "hh", "cpp", "hpp", "dat", "hlp", "conf", "def", "doc", "in", "list", "log", "markdown", "md", "rst", "text", "textile", 0},
		.registered = 1,
	},

	{
		.content_type = "text/provenance-notation",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/prs.fallenstein.rst",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"rst", 0},
		.registered = 1,
	},

	{
		.content_type = "text/prs.lines.tag",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"dsc", 0},
		.registered = 1,
	},

	{
		.content_type = "text/prs.prop.logic",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/raptorfec",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/RED",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/rfc822-headers",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/richtext",
		.encoding = "8bit",
		.extensions = (char*[]){"rtx", 0},
		.registered = 1,
	},

	{
		.content_type = "text/rtf",
		.encoding = "8bit",
		.extensions = (char*[]){"rtf", 0},
		.registered = 1,
	},

	{
		.content_type = "text/rtp-enc-aescm128",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/rtploopback",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/rtx",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/sgml",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"sgml", "sgm", 0},
		.registered = 1,
	},

	{
		.content_type = "text/t140",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/tab-separated-values",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"tsv", 0},
		.registered = 1,
	},

	{
		.content_type = "text/troff",
		.encoding = "8bit",
		.extensions = (char*[]){"t", "tr", "roff", "troff", "man", "me", "ms", 0},
		.registered = 1,
	},

	{
		.content_type = "text/turtle",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"ttl", 0},
		.registered = 1,
	},

	{
		.content_type = "text/ulpfec",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/uri-list",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"uri", "uris", "urls", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vcard",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"vcard", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.a",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.abc",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.curl",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"curl", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.curl.dcurl",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"dcurl", 0},
		.registered = 0,
	},

	{
		.content_type = "text/vnd.curl.mcurl",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"mcurl", 0},
		.registered = 0,
	},

	{
		.content_type = "text/vnd.curl.scurl",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"scurl", 0},
		.registered = 0,
	},

	{
		.content_type = "text/vnd.debian.copyright",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.DMClientScript",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.dvb.subtitle",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"sub", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.esmertec.theme-descriptor",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.flatland.3dml",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "text/vnd.fly",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"fly", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.fmi.flexstor",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"flx", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.graphviz",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"gv", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.in3d.3dml",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"3dml", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.in3d.spot",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"spot", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.IPTC.NewsML",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.IPTC.NITF",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.latex-z",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.motorola.reflex",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.ms-mediapackage",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.net2phone.commcenter.command",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"ccc", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.radisys.msml-basic-layout",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.si.uricatalogue",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.sun.j2me.app-descriptor",
		.encoding = "8bit",
		.extensions = (char*[]){"jad", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.trolltech.linguist",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "text/vnd.wap.si",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"si", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.wap.sl",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"sl", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.wap.wml",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"wml", 0},
		.registered = 1,
	},

	{
		.content_type = "text/vnd.wap.wmlscript",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"wmls", 0},
		.registered = 1,
	},

	{
		.content_type = "text/x-asm",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"asm", "s", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-c",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"c", "cc", "cpp", "cxx", "dic", "h", "hh", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-coffescript",
		.encoding = "8bit",
		.extensions = (char*[]){"coffee", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-component",
		.encoding = "8bit",
		.extensions = (char*[]){"htc", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-fortran",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"f", "f77", "f90", "for", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-java-source",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"java", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-nfo",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"nfo", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-opml",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"opml", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-pascal",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"p", "pas", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-rtf",
		.encoding = "8bit",
		.extensions = (char*[]){"rtf", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-setext",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"etx", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-sfv",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"sfv", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-uuencode",
		.encoding = "quoted-printable",
		.extensions = (char*[]){"uu", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-vcalendar",
		.encoding = "8bit",
		.extensions = (char*[]){"vcs", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-vcard",
		.encoding = "8bit",
		.extensions = (char*[]){"vcf", 0},
		.registered = 0,
	},

	{
		.content_type = "text/x-vnd.flatland.3dml",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 0,
	},

	{
		.content_type = "text/x-yaml",
		.encoding = "8bit",
		.extensions = (char*[]){"yaml", "yml", 0},
		.registered = 0,
	},

	{
		.content_type = "text/xml",
		.encoding = "8bit",
		.extensions = (char*[]){"xml", "dtd", 0},
		.registered = 1,
	},

	{
		.content_type = "text/xml-external-parsed-entity",
		.encoding = "quoted-printable",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/1d-interleaved-parityfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/3gpp",
		.encoding = "base64",
		.extensions = (char*[]){"3gp", "3gpp", 0},
		.registered = 1,
	},

	{
		.content_type = "video/3gpp-tt",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/3gpp2",
		.encoding = "base64",
		.extensions = (char*[]){"3g2", "3gpp2", 0},
		.registered = 1,
	},

	{
		.content_type = "video/BMPEG",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/BT656",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/CelB",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/dl",
		.encoding = "base64",
		.extensions = (char*[]){"dl", 0},
		.registered = 0,
	},

	{
		.content_type = "video/DV",
		.encoding = "base64",
		.extensions = (char*[]){"dv", 0},
		.registered = 1,
	},

	{
		.content_type = "video/encaprtp",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/example",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/gl",
		.encoding = "base64",
		.extensions = (char*[]){"gl", 0},
		.registered = 0,
	},

	{
		.content_type = "video/H261",
		.encoding = "base64",
		.extensions = (char*[]){"h261", 0},
		.registered = 1,
	},

	{
		.content_type = "video/H263",
		.encoding = "base64",
		.extensions = (char*[]){"h263", 0},
		.registered = 1,
	},

	{
		.content_type = "video/H263-1998",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/H263-2000",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/H264",
		.encoding = "base64",
		.extensions = (char*[]){"h264", 0},
		.registered = 1,
	},

	{
		.content_type = "video/H264-RCDO",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/H264-SVC",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/H265",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/iso.segment",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/JPEG",
		.encoding = "base64",
		.extensions = (char*[]){"jpgv", 0},
		.registered = 1,
	},

	{
		.content_type = "video/jpeg2000",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/jpm",
		.encoding = "base64",
		.extensions = (char*[]){"jpgm", "jpm", 0},
		.registered = 0,
	},

	{
		.content_type = "video/MJ2",
		.encoding = "base64",
		.extensions = (char*[]){"mj2", "mjp2", 0},
		.registered = 1,
	},

	{
		.content_type = "video/MP1S",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/MP2P",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/MP2T",
		.encoding = "base64",
		.extensions = (char*[]){"ts", 0},
		.registered = 1,
	},

	{
		.content_type = "video/mp4",
		.encoding = "base64",
		.extensions = (char*[]){"mp4", "mpg4", "f4v", "f4p", "mp4v", 0},
		.registered = 1,
	},

	{
		.content_type = "video/MP4V-ES",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/mpeg",
		.encoding = "base64",
		.extensions = (char*[]){"mp2", "mp3g", "mpe", "mpeg", "mpg", "m1v", "m2v", 0},
		.registered = 1,
	},

	{
		.content_type = "video/mpeg4-generic",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/MPV",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/nv",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/ogg",
		.encoding = "base64",
		.extensions = (char*[]){"ogg", "ogv", 0},
		.registered = 1,
	},

	{
		.content_type = "video/parityfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/pointer",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/quicktime",
		.encoding = "base64",
		.extensions = (char*[]){"qt", "mov", 0},
		.registered = 1,
	},

	{
		.content_type = "video/raptorfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/raw",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/rtp-enc-aescm128",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/rtploopback",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/rtx",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/SMPTE292M",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/ulpfec",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vc1",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.CCTV",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.dece.hd",
		.encoding = "base64",
		.extensions = (char*[]){"uvh", "uvvh", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.dece.mobile",
		.encoding = "base64",
		.extensions = (char*[]){"uvm", "uvvm", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.dece.mp4",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.dece.pd",
		.encoding = "base64",
		.extensions = (char*[]){"uvp", "uvvp", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.dece.sd",
		.encoding = "base64",
		.extensions = (char*[]){"uvs", "uvvs", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.dece.video",
		.encoding = "base64",
		.extensions = (char*[]){"uvv", "uvvv", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.directv.mpeg",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.directv.mpeg-tts",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.dlna.mpeg-tts",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.dvb.file",
		.encoding = "base64",
		.extensions = (char*[]){"dvb", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.fvt",
		.encoding = "base64",
		.extensions = (char*[]){"fvt", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.hns.video",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.iptvforum.1dparityfec-1010",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.iptvforum.1dparityfec-2005",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.iptvforum.2dparityfec-1010",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.iptvforum.2dparityfec-2005",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.iptvforum.ttsavc",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.iptvforum.ttsmpeg2",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.motorola.video",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.motorola.videop",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.mpegurl",
		.encoding = "8bit",
		.extensions = (char*[]){"mxu", "m4u", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.ms-playready.media.pyv",
		.encoding = "base64",
		.extensions = (char*[]){"pyv", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.nokia.interleaved-multimedia",
		.encoding = "base64",
		.extensions = (char*[]){"nim", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.nokia.videovoip",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.objectvideo",
		.encoding = "base64",
		.extensions = (char*[]){"mp4", "m4v", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.radgamettools.bink",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.radgamettools.smacker",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/vnd.sealed.mpeg1",
		.encoding = "base64",
		.extensions = (char*[]){"s11", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.sealed.mpeg4",
		.encoding = "base64",
		.extensions = (char*[]){"smpg", "s14", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.sealed.swf",
		.encoding = "base64",
		.extensions = (char*[]){"sswf", "ssw", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.sealedmedia.softseal.mov",
		.encoding = "base64",
		.extensions = (char*[]){"smov", "smo", "s1q", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.uvvu.mp4",
		.encoding = "base64",
		.extensions = (char*[]){"uvu", "uvvu", 0},
		.registered = 1,
	},

	{
		.content_type = "video/vnd.vivo",
		.encoding = "base64",
		.extensions = (char*[]){"viv", "vivo", 0},
		.registered = 1,
	},

	{
		.content_type = "video/VP8",
		.encoding = "base64",
		.extensions = 0,
		.registered = 1,
	},

	{
		.content_type = "video/webm",
		.encoding = "base64",
		.extensions = (char*[]){"webm", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-dl",
		.encoding = "base64",
		.extensions = (char*[]){"dl", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-dv",
		.encoding = "base64",
		.extensions = (char*[]){"dv", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-f4v",
		.encoding = "base64",
		.extensions = (char*[]){"f4v", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-fli",
		.encoding = "base64",
		.extensions = (char*[]){"fli", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-flv",
		.encoding = "base64",
		.extensions = (char*[]){"flv", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-gl",
		.encoding = "base64",
		.extensions = (char*[]){"gl", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-ivf",
		.encoding = "base64",
		.extensions = (char*[]){"ivf", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-m4v",
		.encoding = "base64",
		.extensions = (char*[]){"m4v", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-matroska",
		.encoding = "base64",
		.extensions = (char*[]){"mk3d", "mks", "mkv", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-mng",
		.encoding = "base64",
		.extensions = (char*[]){"mng", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-motion-jpeg",
		.encoding = "base64",
		.extensions = (char*[]){"mjpg", "mjpeg", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-ms-asf",
		.encoding = "base64",
		.extensions = (char*[]){"asf", "asx", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-ms-vob",
		.encoding = "base64",
		.extensions = (char*[]){"vob", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-ms-wm",
		.encoding = "base64",
		.extensions = (char*[]){"wm", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-ms-wmv",
		.encoding = "base64",
		.extensions = (char*[]){"wmv", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-ms-wmx",
		.encoding = "base64",
		.extensions = (char*[]){"wmx", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-ms-wvx",
		.encoding = "base64",
		.extensions = (char*[]){"wvx", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-msvideo",
		.encoding = "base64",
		.extensions = (char*[]){"avi", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-sgi-movie",
		.encoding = "base64",
		.extensions = (char*[]){"movie", 0},
		.registered = 0,
	},

	{
		.content_type = "video/x-smv",
		.encoding = "base64",
		.extensions = (char*[]){"smv", 0},
		.registered = 0,
	},

	{
		.content_type = "x-chemical/x-pdb",
		.encoding = "base64",
		.extensions = (char*[]){"pdb", 0},
		.registered = 0,
	},

	{
		.content_type = "x-chemical/x-xyz",
		.encoding = "base64",
		.extensions = (char*[]){"xyz", 0},
		.registered = 0,
	},

	{
		.content_type = "x-conference/x-cooltalk",
		.encoding = "base64",
		.extensions = (char*[]){"ice", 0},
		.registered = 0,
	},

	{
		.content_type = "x-drawing/dwf",
		.encoding = "base64",
		.extensions = (char*[]){"dwf", 0},
		.registered = 0,
	},

	{
		.content_type = "x-world/x-vrml",
		.encoding = "base64",
		.extensions = (char*[]){"wrl", "vrml", 0},
		.registered = 0,
	},

};


