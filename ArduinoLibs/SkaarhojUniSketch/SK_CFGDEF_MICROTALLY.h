#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 6	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 570 260\" width=\"50%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"570\" height=\"260\" x=0 y=0 ry=50 rx=50 style=\"fill:rgb(0,0,0);\" /><rect width=\"540\" height=\"230\" x=15 y=15 ry=30 rx=30 style=\"fill:url(#grad1);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16336, GZIP size: 5389 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6D, 0x73, 0x9B, 0x48, 0x93, 0xDF, 0x9F, 0x5F, 
	0xC1, 0x92, 0x5A, 0x5B, 0x9C, 0x90, 0x0C, 0x08, 0x24, 0x59, 
	0x58, 0xCE, 0xD9, 0x4E, 0xB2, 0x76, 0x6D, 0xBC, 0xEB, 0x8A, 
	0xB2, 0xC9, 0xDE, 0xA9, 0x54, 0x29, 0x0C, 0x23, 0x8B, 0x04, 
	0x83, 0x0E, 0x90, 0x1D, 0x9F, 0xE3, 0xFF, 0x7E, 0xDD, 0x3D, 
	0x03, 0x1A, 0x10, 0x72, 0x94, 0xEC, 0x73, 0x49, 0x45, 0xC3, 
	0xBC, 0xF4, 0xCB, 0xF4, 0xDB, 0xF4, 0x34, 0xE4, 0xCE, 0x4B, 
	0x95, 0xF3, 0x8F, 0xFE, 0x78, 0x3A, 0x1D, 0xEA, 0x66, 0xDF, 
	0xEA, 0x3A, 0xFA, 0xD0, 0xD0, 0xD5, 0xAB, 0xDF, 0x2E, 0x15, 
	0x53, 0xD5, 0x6D, 0x63, 0xA6, 0xC3, 0xB8, 0x6D, 0x0C, 0x8A, 
	0xF1, 0x77, 0x1F, 0xA4, 0x71, 0xBE, 0xDE, 0xEC, 0x09, 0x00, 
	0xAB, 0x06, 0xC0, 0x27, 0x00, 0xC2, 0xAA, 0x43, 0x14, 0x24, 
	0x7A, 0x75, 0x88, 0x82, 0x06, 0x9F, 0x98, 0xB9, 0xFF, 0xBA, 
	0x03, 0xF6, 0x02, 0x76, 0xF7, 0x36, 0xCB, 0x81, 0x43, 0x53, 
	0x57, 0x4F, 0xDE, 0xBF, 0xBE, 0x54, 0x75, 0x13, 0x60, 0x4C, 
	0x47, 0x57, 0x27, 0x0F, 0x59, 0xCE, 0x6E, 0x55, 0x69, 0xE1, 
	0x9B, 0x55, 0x8C, 0x7B, 0x99, 0x9A, 0xB0, 0xF6, 0x2A, 0x4D, 
	0x6E, 0x52, 0xEF, 0x56, 0x99, 0xA4, 0xBE, 0xAA, 0x77, 0x4C, 
	0xBD, 0x63, 0xE9, 0x53, 0x55, 0xD5, 0xD5, 0xF3, 0x24, 0x0A, 
	0x94, 0x57, 0xC9, 0x7D, 0x0C, 0xCF, 0xEF, 0x93, 0x9B, 0x9B, 
	0x88, 0xC1, 0xC3, 0xD9, 0x83, 0x0F, 0xED, 0x0C, 0x11, 0x13, 
	0x28, 0xBB, 0x0B, 0xD9, 0xFD, 0x06, 0x68, 0x7D, 0xD5, 0xDD, 
	0xC1, 0x55, 0x7A, 0xF3, 0x9D, 0x55, 0x27, 0x7F, 0xFD, 0xAD, 
	0xFC, 0xB9, 0xCA, 0x97, 0xAB, 0x5C, 0x2C, 0xEC, 0x3D, 0xCF, 
	0x09, 0x0D, 0xFE, 0x96, 0x26, 0xAB, 0xA5, 0x72, 0x52, 0xED, 
	0x9E, 0x6E, 0xE0, 0xFE, 0x6B, 0x99, 0xE5, 0x29, 0x83, 0x3D, 
	0xFE, 0xCE, 0x1E, 0x58, 0xCA, 0x99, 0xB0, 0xF5, 0x8E, 0xD3, 
	0x38, 0xAD, 0xBC, 0x09, 0xA3, 0xA8, 0x5C, 0x63, 0x35, 0xAF, 
	0x81, 0xDF, 0x8D, 0x25, 0xC8, 0x61, 0x8D, 0x4E, 0x7F, 0x4D, 
	0xA4, 0x3E, 0x5B, 0x90, 0xE9, 0x6F, 0x47, 0x20, 0xA8, 0x48, 
	0x2B, 0x2E, 0xAF, 0x94, 0x49, 0xCE, 0xE1, 0x06, 0x30, 0xA2, 
	0xF7, 0x70, 0x62, 0x17, 0x65, 0x59, 0x43, 0x5D, 0x6D, 0x15, 
	0xD0, 0x0A, 0x4D, 0x68, 0x6B, 0x24, 0x60, 0x22, 0xB9, 0x97, 
	0xE6, 0xEA, 0xAC, 0xE8, 0xBE, 0x8E, 0x03, 0xEC, 0x18, 0xBA, 
	0x69, 0x81, 0xA9, 0x9D, 0xAC, 0xF2, 0x44, 0xB9, 0x88, 0x73, 
	0x96, 0xDE, 0x79, 0x91, 0x2A, 0x28, 0xBE, 0xF3, 0xE2, 0x20, 
	0xB9, 0xA5, 0x5E, 0x49, 0xF0, 0x4F, 0x24, 0xFF, 0xE7, 0x7C, 
	0x5E, 0x61, 0xA8, 0x42, 0xFF, 0x2C, 0x0A, 0x97, 0x9C, 0xB0, 
	0x55, 0x19, 0x4E, 0xE2, 0x3C, 0x4D, 0x22, 0x3E, 0xD3, 0x19, 
	0x8A, 0xDD, 0x9E, 0xAD, 0x72, 0x14, 0x72, 0x61, 0x20, 0xC0, 
	0x85, 0xD4, 0x7D, 0xF3, 0xFE, 0x54, 0xEA, 0xBD, 0x4F, 0xBD, 
	0x38, 0x0B, 0xF3, 0x30, 0x89, 0x61, 0x8B, 0x0F, 0xC8, 0x0C, 
	0x2A, 0xE7, 0x90, 0x68, 0x54, 0x66, 0xAF, 0x92, 0x4C, 0x02, 
	0xBB, 0x8A, 0xBC, 0x07, 0xE5, 0xD2, 0xF3, 0x53, 0xC0, 0x0C, 
	0x5B, 0x37, 0xD1, 0xCB, 0x68, 0x50, 0x45, 0x91, 0x24, 0xCB, 
	0x0D, 0x83, 0x13, 0x22, 0x16, 0x92, 0xE5, 0x92, 0x78, 0x9B, 
	0xC0, 0xC2, 0xF5, 0x2E, 0xDF, 0x31, 0x3F, 0x49, 0x03, 0x8E, 
	0x55, 0x23, 0xB4, 0x96, 0xB1, 0x9E, 0x9D, 0x24, 0xAB, 0xD4, 
	0x67, 0xA5, 0x06, 0xA6, 0xEA, 0xE5, 0xC1, 0x6B, 0x8C, 0x15, 
	0xD4, 0x42, 0x04, 0x20, 0x3F, 0x30, 0x45, 0x5B, 0xF4, 0x7B, 
	0xA2, 0xB5, 0x45, 0xEB, 0x88, 0xB6, 0x8F, 0x2C, 0x74, 0x64, 
	0xF5, 0x75, 0x7E, 0x58, 0x79, 0xD0, 0xFB, 0xE0, 0xA5, 0x0F, 
	0x4A, 0x1E, 0xDE, 0x86, 0xF1, 0x8D, 0x62, 0x19, 0xBF, 0xD6, 
	0x46, 0x1C, 0x18, 0xD9, 0x51, 0xCB, 0xA4, 0xA5, 0x20, 0x24, 
	0x35, 0x19, 0xF0, 0xCF, 0xDC, 0xC9, 0x38, 0x07, 0x02, 0x4A, 
	0xF9, 0x90, 0x44, 0xAB, 0x5B, 0x52, 0x9D, 0x21, 0x0F, 0x9F, 
	0x7A, 0x91, 0x17, 0xFB, 0xE5, 0xB8, 0x65, 0x17, 0x13, 0x6F, 
	0xD9, 0x1D, 0x8B, 0x32, 0x69, 0xBD, 0xA4, 0xE7, 0x77, 0x5E, 
	0xCE, 0x8D, 0x60, 0x2A, 0x28, 0x81, 0x84, 0xC3, 0xAF, 0xF0, 
	0xFB, 0x2A, 0x44, 0xAD, 0x7E, 0x0C, 0x97, 0x38, 0xF4, 0xEA, 
	0xC3, 0x6B, 0x55, 0x98, 0x92, 0xFA, 0x6A, 0xF2, 0xBB, 0xC9, 
	0x1B, 0x8B, 0x3B, 0x82, 0xE5, 0x40, 0xEC, 0x7C, 0x03, 0xA1, 
	0x91, 0x65, 0x92, 0x7A, 0x35, 0x8E, 0x75, 0xDB, 0x74, 0x2D, 
	0x4E, 0x5C, 0x79, 0xB0, 0x00, 0x41, 0x20, 0x4E, 0x98, 0x6B, 
	0x93, 0xDF, 0xF0, 0xF4, 0x72, 0x5D, 0x5F, 0xAC, 0xEB, 0x01, 
	0xEE, 0xC4, 0x5F, 0xD1, 0xEE, 0x7A, 0x7C, 0x77, 0x17, 0x69, 
	0x58, 0x76, 0x61, 0x7A, 0xC2, 0xE2, 0x2C, 0x49, 0x95, 0xDF, 
	0xBC, 0x30, 0xA6, 0x51, 0x69, 0xA7, 0x46, 0x70, 0x0D, 0xBF, 
	0x7D, 0xFA, 0x35, 0x2D, 0xDE, 0x0C, 0xA1, 0x99, 0x09, 0xC8, 
	0xC5, 0x2A, 0xCF, 0x79, 0x1C, 0x94, 0xA1, 0xCC, 0x03, 0xC7, 
	0xA0, 0xA6, 0xCF, 0x9B, 0x81, 0x43, 0xCD, 0x21, 0xEF, 0x99, 
	0x86, 0x68, 0x2D, 0xD1, 0x8A, 0xC5, 0x70, 0x18, 0x51, 0x6B, 
	0x89, 0x7E, 0x4F, 0x40, 0x3B, 0x62, 0xFD, 0xC0, 0x72, 0x0A, 
	0x78, 0x01, 0x60, 0x8B, 0x95, 0x16, 0x8E, 0x08, 0x96, 0x3E, 
	0x2E, 0xC2, 0x9C, 0xC9, 0x9A, 0x96, 0x19, 0x03, 0xD4, 0xC6, 
	0xEF, 0xD8, 0x0E, 0x79, 0xDB, 0x33, 0x44, 0x6B, 0x89, 0xD6, 
	0x16, 0x6D, 0x9F, 0xB7, 0xB6, 0x98, 0xB7, 0x05, 0x9C, 0x2D, 
	0xE0, 0x1C, 0x31, 0xEE, 0x08, 0x38, 0x47, 0xC0, 0x39, 0x02, 
	0xAE, 0x2F, 0xE6, 0xFB, 0x02, 0x6E, 0x20, 0xFA, 0x03, 0xD1, 
	0x1F, 0x52, 0x5F, 0x98, 0xEC, 0xDB, 0x70, 0x4E, 0xD1, 0xC9, 
	0x5E, 0x2B, 0xE8, 0x37, 0xEF, 0xF6, 0xD6, 0xDB, 0x18, 0xE3, 
	0xEA, 0x91, 0x86, 0xCE, 0x57, 0x4C, 0xD2, 0x2A, 0x85, 0x3E, 
	0x2F, 0xCB, 0xA5, 0xA1, 0x89, 0x97, 0xAF, 0x52, 0x0F, 0xCD, 
	0xB8, 0x90, 0xC4, 0x1F, 0x49, 0x7A, 0x0B, 0xDE, 0x0B, 0xD6, 
	0xC9, 0x32, 0x3E, 0xC9, 0x02, 0x6E, 0x74, 0xBA, 0x7A, 0xEA, 
	0xA5, 0x59, 0xB1, 0xEE, 0x3B, 0x3E, 0x4A, 0xE1, 0xDD, 0x40, 
	0xD3, 0xF1, 0x93, 0x38, 0xC8, 0x0A, 0xE1, 0xBF, 0x62, 0xB9, 
	0x17, 0x46, 0x05, 0x0E, 0x0E, 0xF5, 0x36, 0xB9, 0x47, 0x97, 
	0x61, 0x41, 0xB8, 0xBA, 0x45, 0x24, 0xE1, 0xCD, 0xA2, 0x58, 
	0x7E, 0x76, 0xF6, 0x97, 0x32, 0x61, 0x79, 0x0E, 0xC1, 0xA1, 
	0x24, 0x8C, 0x31, 0x85, 0xF9, 0x1E, 0x9E, 0x4C, 0xC0, 0xFE, 
	0x1D, 0xE3, 0xB4, 0xFA, 0xC8, 0x5D, 0xFC, 0xA5, 0xE0, 0xF4, 
	0x1D, 0xCB, 0x58, 0x5E, 0x40, 0x70, 0xF9, 0x15, 0x32, 0x13, 
	0x72, 0x52, 0x4F, 0x00, 0x03, 0xAE, 0x3E, 0x84, 0x18, 0x14, 
	0x06, 0x2C, 0x51, 0xDE, 0x03, 0x4E, 0x3C, 0x04, 0x31, 0x15, 
	0x10, 0x99, 0x8A, 0x5A, 0x26, 0x1E, 0x2A, 0xCF, 0x5E, 0x0E, 
	0xB0, 0x5B, 0x80, 0xF1, 0xD0, 0x50, 0x80, 0x51, 0x64, 0xE0, 
	0x3E, 0x77, 0xB6, 0x48, 0x93, 0x5B, 0x0F, 0xFD, 0xAD, 0xE4, 
	0x9E, 0x02, 0x70, 0x03, 0xEB, 0xE0, 0xAD, 0x75, 0xEE, 0x09, 
	0xC5, 0xD5, 0xC5, 0x15, 0xB9, 0xBF, 0x23, 0xE4, 0x86, 0xD1, 
	0x83, 0x27, 0x01, 0xC0, 0x5C, 0xC2, 0x23, 0x0F, 0x62, 0x01, 
	0x6C, 0x80, 0xBE, 0x08, 0xAF, 0x60, 0xF9, 0xBF, 0x76, 0xC0, 
	0xE4, 0x7E, 0x55, 0xFE, 0x3B, 0xC1, 0xA0, 0x8B, 0xF8, 0x78, 
	0x5E, 0xB6, 0x00, 0x19, 0xF0, 0x28, 0xA6, 0xF2, 0x78, 0x0D, 
	0x72, 0xA7, 0xDE, 0x77, 0x4F, 0x75, 0xE5, 0xAF, 0x65, 0xF9, 
	0xB8, 0x8E, 0xBF, 0x0E, 0x9D, 0x04, 0x18, 0xF8, 0x00, 0xDB, 
	0x61, 0xD1, 0xF9, 0x79, 0x64, 0x97, 0xEC, 0x36, 0x49, 0x1F, 
	0x50, 0x48, 0x98, 0x62, 0x51, 0x5E, 0x85, 0x36, 0x08, 0x18, 
	0x31, 0xF8, 0xFD, 0x30, 0x56, 0x0E, 0x71, 0xC5, 0xD2, 0x2C, 
	0x04, 0x7B, 0x17, 0x7E, 0xC4, 0x17, 0x6C, 0xA7, 0x04, 0x3B, 
	0x11, 0x91, 0x96, 0x1F, 0x58, 0xA2, 0xFB, 0x3E, 0xD9, 0x71, 
	0xEE, 0x84, 0x9F, 0x86, 0x75, 0xCA, 0x94, 0x42, 0x44, 0xDE, 
	0x0D, 0x89, 0xAA, 0xDF, 0x13, 0x1D, 0x5C, 0x38, 0x41, 0x1B, 
	0x6D, 0xDA, 0x97, 0xC0, 0x72, 0x11, 0xDF, 0x31, 0x7E, 0xD8, 
	0x92, 0x72, 0x6F, 0x33, 0x52, 0xB1, 0x68, 0x78, 0xEB, 0x88, 
	0xD6, 0xC4, 0x1F, 0x2B, 0xE3, 0xDC, 0x10, 0x11, 0xC6, 0x82, 
	0x6B, 0xCF, 0xFF, 0xA2, 0x94, 0xD4, 0x24, 0x84, 0xB4, 0x4A, 
	0x7D, 0x1F, 0x32, 0x05, 0x4E, 0xEC, 0xF3, 0x8F, 0x67, 0x2F, 
	0x20, 0x83, 0x37, 0x0C, 0x3E, 0xCA, 0x53, 0x78, 0x38, 0xC7, 
	0xE7, 0x62, 0x6F, 0x10, 0x12, 0x94, 0x13, 0x9F, 0x0C, 0x8E, 
	0xF7, 0x3F, 0x7A, 0x61, 0xAE, 0x60, 0x98, 0xCD, 0x94, 0x8C, 
	0xDC, 0x5B, 0x85, 0xFD, 0x0B, 0xE8, 0xB3, 0x55, 0x96, 0x27, 
	0xB7, 0xCA, 0x39, 0x9C, 0xFA, 0x11, 0xC4, 0x7D, 0xB1, 0xFD, 
	0x8B, 0xD8, 0x03, 0x04, 0x77, 0xC2, 0x44, 0x70, 0x04, 0x53, 
	0x1E, 0x05, 0x60, 0x63, 0xE6, 0xF3, 0x64, 0x90, 0x5B, 0xBD, 
	0x17, 0xB3, 0x48, 0x39, 0x4D, 0x21, 0x04, 0xE4, 0x31, 0xCB, 
	0xD0, 0x6B, 0x24, 0xB7, 0x7A, 0x0B, 0x59, 0x42, 0x9E, 0x11, 
	0xBF, 0x5A, 0xC1, 0x30, 0x9F, 0x79, 0x13, 0xC6, 0x0C, 0xCE, 
	0xE1, 0xF8, 0x86, 0xC9, 0xB3, 0xC5, 0x2D, 0x04, 0xB2, 0x11, 
	0xB8, 0xAE, 0x64, 0x70, 0x0B, 0xA9, 0xA5, 0x40, 0x28, 0x95, 
	0xD3, 0x08, 0x84, 0x04, 0xEB, 0x75, 0x4B, 0xEF, 0xE9, 0xB6, 
	0xEE, 0x80, 0x2F, 0x0E, 0xF4, 0x21, 0x98, 0x34, 0xA4, 0x15, 
	0xC0, 0x28, 0x38, 0x0A, 0xC4, 0x10, 0x88, 0xA9, 0x60, 0xA4, 
	0x66, 0x5F, 0x37, 0x07, 0x70, 0x25, 0xD2, 0xCD, 0x43, 0x1D, 
	0xF3, 0x1D, 0x1E, 0x0E, 0x21, 0xAC, 0x46, 0x49, 0x6A, 0x16, 
	0x0F, 0x98, 0x48, 0x5D, 0x5E, 0x11, 0x8D, 0x2B, 0x7C, 0x9E, 
	0xAC, 0x96, 0x70, 0xE8, 0xF2, 0x5C, 0x0C, 0xD7, 0x44, 0xCC, 
	0x8B, 0x89, 0x05, 0xFE, 0xF4, 0xE3, 0x79, 0x18, 0x20, 0x7E, 
	0x6D, 0x2A, 0x70, 0xCB, 0x29, 0x9F, 0xEE, 0xE8, 0xC9, 0x2A, 
	0xC7, 0xAC, 0x62, 0xEC, 0x03, 0x28, 0x49, 0xB4, 0x96, 0x68, 
	0x7B, 0xA2, 0xB5, 0x45, 0xEB, 0x88, 0xB6, 0x2F, 0xDA, 0x81, 
	0x68, 0x87, 0xD4, 0x5A, 0x02, 0xDE, 0x12, 0xF0, 0x96, 0x80, 
	0xB7, 0x04, 0xBC, 0x25, 0xE0, 0x2D, 0x01, 0x6F, 0x09, 0x78, 
	0x8B, 0xC3, 0x83, 0x19, 0x9D, 0x88, 0xF6, 0x54, 0xB4, 0x67, 
	0xA2, 0x25, 0x7F, 0xFB, 0xF1, 0x0C, 0x54, 0xE5, 0x39, 0x0C, 
	0xC2, 0xF0, 0x27, 0xAB, 0x7C, 0xEA, 0x95, 0x4F, 0xF6, 0x0E, 
	0x49, 0xA4, 0x48, 0xF2, 0x71, 0x21, 0xA4, 0x61, 0x8A, 0x48, 
	0xC7, 0x84, 0x4D, 0xC0, 0x35, 0x81, 0x2B, 0x50, 0xF4, 0x29, 
	0x4D, 0x9F, 0x3D, 0x9F, 0xDF, 0x4D, 0x30, 0xCC, 0x63, 0xA6, 
	0x43, 0xB1, 0x9A, 0x67, 0x75, 0x3F, 0x6C, 0x51, 0x7F, 0xBF, 
	0x7D, 0x87, 0x9C, 0xBD, 0x9E, 0xE0, 0x49, 0x71, 0x76, 0x52, 
	0x33, 0xA5, 0x4B, 0x38, 0xBB, 0x89, 0xC2, 0x65, 0x12, 0x87, 
	0x79, 0x92, 0xEE, 0x24, 0x62, 0xDA, 0xFD, 0xC9, 0x9B, 0x0F, 
	0xC8, 0x22, 0xD8, 0xA7, 0x10, 0x0D, 0x32, 0x7E, 0x9A, 0xE4, 
	0xE0, 0xAA, 0x78, 0x00, 0x33, 0x3A, 0x1F, 0xDF, 0xA1, 0xD7, 
	0x41, 0xFB, 0x37, 0xFC, 0xFB, 0x2F, 0xDA, 0x58, 0x90, 0x2F, 
	0x50, 0x68, 0x4C, 0x4C, 0x00, 0xD8, 0x41, 0x05, 0xE8, 0xA0, 
	0x04, 0x39, 0x28, 0x01, 0x0E, 0xC4, 0x72, 0x12, 0x17, 0x24, 
	0x9D, 0x64, 0xEA, 0xD0, 0x5A, 0xA2, 0xED, 0x89, 0xD6, 0x16, 
	0xAD, 0x23, 0xDA, 0xBE, 0x68, 0x07, 0xA2, 0x1D, 0x8A, 0xF6, 
	0x50, 0xB4, 0xA6, 0xB1, 0xD3, 0x76, 0x91, 0x0F, 0x94, 0xE1, 
	0x6F, 0x14, 0xDB, 0x65, 0x9D, 0x41, 0x9A, 0x01, 0xB6, 0x51, 
	0x70, 0xCC, 0xCF, 0x82, 0x2C, 0xFC, 0x5F, 0x4A, 0xA9, 0xDD, 
	0x7F, 0xCD, 0x57, 0x31, 0x85, 0x38, 0xE5, 0xE6, 0xF5, 0xE9, 
	0x45, 0x8B, 0x69, 0x8F, 0x29, 0x83, 0xE4, 0x27, 0x56, 0x02, 
	0xC8, 0x8C, 0x6F, 0x59, 0x9C, 0x77, 0x6F, 0x58, 0xFE, 0x3A, 
	0x62, 0xF8, 0x78, 0xFA, 0x70, 0x11, 0xC0, 0x8A, 0xA7, 0x12, 
	0x04, 0x52, 0x8D, 0x93, 0x16, 0xD3, 0x73, 0xED, 0x71, 0x9E, 
	0xA4, 0x2D, 0x8C, 0x38, 0xB1, 0x12, 0xC6, 0x4A, 0xAE, 0xB1, 
	0x2E, 0x4E, 0xE5, 0x79, 0x1A, 0x5E, 0xAF, 0x72, 0xD6, 0x8A, 
	0xF5, 0x7C, 0x1A, 0xCF, 0x34, 0x57, 0xA0, 0x66, 0x15, 0x0C, 
	0x6F, 0x39, 0x06, 0x31, 0x27, 0x50, 0x3E, 0x26, 0xB1, 0x1F, 
	0x85, 0xFE, 0x97, 0xD1, 0x3E, 0xB1, 0xA5, 0xCE, 0xE3, 0xFD, 
	0x76, 0xDE, 0xDE, 0x57, 0xB5, 0x6E, 0x06, 0x57, 0xBE, 0x28, 
	0x82, 0xCB, 0x56, 0xF2, 0x01, 0xB2, 0x93, 0x96, 0xE6, 0xEE, 
	0xEB, 0xFE, 0x2A, 0x85, 0x2C, 0x7D, 0xA4, 0x2E, 0x93, 0x10, 
	0xEF, 0x60, 0xEA, 0x93, 0xC4, 0xE2, 0x12, 0x72, 0x9E, 0xFC, 
	0x52, 0xDA, 0x57, 0x41, 0x60, 0x0E, 0x97, 0xF4, 0x91, 0xFA, 
	0x22, 0xA0, 0x3F, 0xAA, 0x0E, 0x37, 0x85, 0xE4, 0x0B, 0x83, 
	0x01, 0x9E, 0x42, 0xF3, 0x6E, 0xE7, 0x9E, 0x2C, 0x61, 0xA4, 
	0x5A, 0x9B, 0x38, 0x27, 0xDB, 0x71, 0xFA, 0xF4, 0x47, 0xC2, 
	0xD9, 0xEF, 0xF7, 0x37, 0x71, 0x9A, 0x15, 0x9C, 0x7E, 0xFA, 
	0x7A, 0x53, 0x0E, 0xA5, 0x0E, 0x7C, 0xB8, 0xC6, 0xE4, 0x4C, 
	0xA8, 0x01, 0x08, 0xC3, 0x42, 0x19, 0x74, 0xB2, 0x33, 0xEC, 
	0x1F, 0x93, 0x96, 0xBA, 0xC8, 0xF3, 0xE5, 0xE8, 0xE0, 0xE0, 
	0xFE, 0xFE, 0xBE, 0x7B, 0xDF, 0xEB, 0x26, 0xE9, 0x0D, 0xDD, 
	0x12, 0x0E, 0xB2, 0x3B, 0x08, 0xA2, 0x35, 0xD4, 0x1E, 0x62, 
	0xD6, 0x1E, 0xBD, 0xB3, 0x16, 0x57, 0x83, 0x9F, 0xA7, 0x51, 
	0x78, 0x7B, 0xA3, 0x6A, 0xBA, 0x6C, 0x06, 0x30, 0x4D, 0xE4, 
	0x59, 0xD7, 0x5B, 0x2E, 0x59, 0x1C, 0x9C, 0x2D, 0xC2, 0x28, 
	0x68, 0xC9, 0x78, 0xB2, 0xFC, 0x0F, 0xEF, 0xF6, 0x4D, 0x14, 
	0x64, 0x6B, 0x6B, 0x61, 0xDD, 0x10, 0xCE, 0xC0, 0xF4, 0xFC, 
	0xFD, 0xE5, 0xDB, 0x31, 0x9C, 0xD0, 0x9F, 0xC7, 0x86, 0xFB, 
	0xF9, 0xC8, 0x84, 0x9F, 0x76, 0x5B, 0xCB, 0x8F, 0x3F, 0xEF, 
	0xED, 0xB5, 0x08, 0x2D, 0xCA, 0x45, 0x0D, 0xE3, 0x25, 0x96, 
	0x29, 0x1E, 0xC3, 0x60, 0xA4, 0x12, 0xAA, 0x4F, 0x6A, 0xFB, 
	0xB3, 0x1E, 0xC3, 0xB5, 0x50, 0xEE, 0x67, 0x58, 0x94, 0x18, 
	0xA9, 0x24, 0xDF, 0x11, 0x6C, 0x69, 0xF9, 0xD5, 0x55, 0x75, 
	0x38, 0x02, 0x57, 0x6C, 0x94, 0x61, 0x92, 0x96, 0x4D, 0x3F, 
	0xCF, 0x5E, 0x96, 0x4F, 0x23, 0x15, 0xE4, 0x0F, 0xFB, 0x58, 
	0xB3, 0xD1, 0x1E, 0xAB, 0x47, 0xD7, 0xE9, 0xC1, 0xB1, 0x2A, 
	0x31, 0x9E, 0xBE, 0xBD, 0x8E, 0x24, 0x45, 0xB3, 0x6E, 0xCA, 
	0x96, 0x70, 0x6E, 0xB2, 0x96, 0xFA, 0x0D, 0x34, 0x0A, 0xCB, 
	0x2B, 0xAB, 0xEF, 0xD3, 0xC9, 0x29, 0xDF, 0xA1, 0x3F, 0xE6, 
	0x02, 0xCB, 0x4E, 0x17, 0x6A, 0x9B, 0xB5, 0x55, 0x60, 0x30, 
	0xD7, 0x74, 0xBF, 0xBA, 0x67, 0xBF, 0x4B, 0x2C, 0x77, 0x89, 
	0xE3, 0xF1, 0xA5, 0x97, 0x2F, 0xBA, 0xF3, 0x28, 0x01, 0xD9, 
	0x98, 0xA8, 0x0E, 0x62, 0xB4, 0x1B, 0xB1, 0xF8, 0x26, 0x5F, 
	0x74, 0x4C, 0xAD, 0xAD, 0xFE, 0xAA, 0xBA, 0xE4, 0x62, 0x63, 
	0x92, 0xC9, 0xC2, 0x56, 0x35, 0xB7, 0xB2, 0xE8, 0xD8, 0x04, 
	0xA1, 0xC5, 0x12, 0x89, 0xEA, 0xAC, 0x51, 0xEC, 0x3D, 0x9F, 
	0xAD, 0x9F, 0x46, 0xC6, 0x78, 0x9C, 0xBF, 0x2C, 0xEE, 0x3E, 
	0x23, 0x9E, 0xCD, 0x2A, 0xC0, 0x2C, 0x88, 0x47, 0xD3, 0x41, 
	0x03, 0xBE, 0x1E, 0x53, 0x1B, 0x57, 0x35, 0x51, 0xB8, 0xA7, 
	0x1A, 0x44, 0xB0, 0x65, 0xDA, 0xA2, 0x0E, 0x50, 0x6D, 0xE0, 
	0x49, 0xD5, 0xF3, 0x87, 0x25, 0xE8, 0x01, 0x3C, 0x3F, 0xC7, 
	0x54, 0x9D, 0x6B, 0x40, 0xED, 0xC0, 0x78, 0x98, 0xA3, 0x82, 
	0x5E, 0xB1, 0x88, 0x61, 0xFE, 0xAC, 0xFA, 0x91, 0x97, 0x65, 
	0x40, 0x94, 0x05, 0x39, 0xE9, 0xE2, 0x19, 0x32, 0xFE, 0xF2, 
	0x61, 0x47, 0x3A, 0x67, 0x57, 0x25, 0xA1, 0xB3, 0x64, 0xF9, 
	0xF0, 0x63, 0x64, 0xC2, 0x38, 0xDB, 0x91, 0xCC, 0xC5, 0x1F, 
	0x93, 0x92, 0xCE, 0x45, 0x9C, 0x61, 0x72, 0xB9, 0xA6, 0x04, 
	0x68, 0x14, 0x41, 0xCD, 0x2D, 0x22, 0x63, 0x3A, 0x36, 0xF4, 
	0x10, 0x8C, 0x3C, 0x3C, 0x9A, 0xFC, 0xFE, 0xE9, 0xF2, 0xE4, 
	0xEF, 0x93, 0xB3, 0xF7, 0x17, 0x7F, 0xFE, 0x31, 0x71, 0x43, 
	0xB0, 0xF7, 0x70, 0xDE, 0x22, 0x51, 0x13, 0x53, 0xD9, 0xD2, 
	0x8B, 0x85, 0xAD, 0xCF, 0x63, 0x9F, 0x78, 0xE9, 0x10, 0x2F, 
	0xF0, 0x1B, 0x0A, 0xFE, 0x37, 0x97, 0x62, 0xE1, 0x69, 0x73, 
	0x29, 0x68, 0x37, 0xDC, 0xDB, 0x43, 0x1D, 0x7F, 0xFB, 0x76, 
	0xFE, 0xF1, 0x6E, 0xCA, 0x66, 0x7B, 0x7B, 0xBC, 0x05, 0xDD, 
	0x4B, 0x8F, 0xD3, 0x10, 0x7A, 0xC6, 0x2F, 0xE3, 0x96, 0xE9, 
	0x54, 0x06, 0xA7, 0xC6, 0x4C, 0xD3, 0x82, 0xF4, 0x4D, 0x3C, 
	0x41, 0xB3, 0xD6, 0x43, 0xCD, 0x65, 0x51, 0xC6, 0x14, 0xE0, 
	0xF7, 0x97, 0x14, 0x9C, 0x62, 0x6C, 0x92, 0x45, 0x7A, 0xE3, 
	0x22, 0x48, 0xD7, 0xD9, 0xD5, 0x5C, 0x60, 0xD6, 0xDB, 0x66, 
	0x3A, 0x84, 0x57, 0x12, 0x36, 0xFC, 0x86, 0xCF, 0x88, 0xBC, 
	0x8D, 0xF2, 0x7C, 0x92, 0xE2, 0x1E, 0xD9, 0x44, 0xF5, 0xF8, 
	0x19, 0x97, 0x61, 0xEF, 0x7F, 0x56, 0x2C, 0x7D, 0x98, 0x80, 
	0xA9, 0xF9, 0x90, 0x30, 0xC0, 0x95, 0xB7, 0xA5, 0x82, 0x67, 
	0x64, 0x60, 0xD4, 0xA0, 0x08, 0x37, 0x3D, 0x8A, 0x85, 0x5B, 
	0xB8, 0x29, 0xC8, 0x3F, 0x9E, 0xA6, 0x33, 0xE1, 0x8B, 0x77, 
	0x61, 0x16, 0x5E, 0x87, 0x51, 0x98, 0x3F, 0x8C, 0x55, 0x7A, 
	0x86, 0x23, 0xD4, 0x0D, 0xB3, 0xD4, 0x1F, 0x33, 0xFD, 0x33, 
	0x36, 0xF9, 0x9A, 0x01, 0x6E, 0x2D, 0xC4, 0x00, 0x17, 0xDA, 
	0xB7, 0x6F, 0x2D, 0xFE, 0x30, 0x9E, 0xCE, 0x34, 0xBD, 0x14, 
	0xE4, 0x18, 0x9F, 0x10, 0x87, 0x10, 0x39, 0x3D, 0x4E, 0x11, 
	0xDB, 0xEC, 0x65, 0xAD, 0x3F, 0x9A, 0xCE, 0xF4, 0x32, 0x8A, 
	0xB8, 0xFF, 0x3F, 0xDB, 0x5A, 0x84, 0x41, 0xC0, 0x62, 0x75, 
	0xBD, 0x0F, 0xF2, 0x61, 0x69, 0x1B, 0x10, 0x46, 0xD6, 0xBC, 
	0xE3, 0x4E, 0x4A, 0x8E, 0xE4, 0xBD, 0x87, 0x79, 0x4B, 0x7B, 
	0xBC, 0x4F, 0xC3, 0x9C, 0x9D, 0x4D, 0x26, 0xAD, 0x35, 0xB3, 
	0xAC, 0xB0, 0x06, 0x58, 0x0A, 0x7C, 0xE5, 0xC0, 0x57, 0x7E, 
	0x74, 0xFE, 0xD1, 0x2F, 0x38, 0xCB, 0x81, 0xB3, 0x47, 0xBE, 
	0xAB, 0x47, 0x73, 0x34, 0xC5, 0x02, 0x2A, 0xFC, 0x83, 0xEB, 
	0x2E, 0x3C, 0x3B, 0xF0, 0x8C, 0x17, 0xAA, 0x1E, 0x3C, 0x0F, 
	0x20, 0x51, 0x1C, 0xD8, 0x33, 0xDD, 0x96, 0xD6, 0x38, 0xA3, 
	0xE9, 0xD0, 0xD0, 0x87, 0xF0, 0xD4, 0x1F, 0x4D, 0xFB, 0x70, 
	0xDF, 0x83, 0xA7, 0x01, 0xCC, 0xC3, 0xA3, 0x89, 0xAF, 0x6F, 
	0x4C, 0x63, 0x34, 0x85, 0xC8, 0x0F, 0x59, 0x25, 0x76, 0x10, 
	0xFB, 0x21, 0x5C, 0x51, 0xF1, 0xBE, 0x64, 0x3A, 0xB4, 0x0C, 
	0x1E, 0x00, 0xD2, 0xA2, 0xB5, 0x00, 0x68, 0xD3, 0xD4, 0xA1, 
	0x98, 0xB2, 0x10, 0x1A, 0xC8, 0xF6, 0xF0, 0x19, 0x80, 0x7B, 
	0x00, 0x8B, 0x1C, 0x58, 0xC0, 0x9A, 0x03, 0x2C, 0xD0, 0x78, 
	0x8F, 0xC6, 0x1D, 0xE2, 0x18, 0x58, 0xEB, 0x0F, 0x1C, 0x3E, 
	0xEE, 0xD0, 0x38, 0x74, 0xE1, 0x99, 0x98, 0x83, 0x45, 0x43, 
	0x78, 0x06, 0x2A, 0xCE, 0x10, 0x18, 0xC5, 0x35, 0x43, 0xC0, 
	0x4F, 0x80, 0x40, 0xD1, 0xE9, 0xF5, 0x60, 0x9F, 0x48, 0xD1, 
	0x86, 0x34, 0x19, 0x56, 0xF6, 0x80, 0xA2, 0x05, 0x69, 0xF2, 
	0x60, 0x38, 0x80, 0x0E, 0x90, 0x84, 0x07, 0x60, 0xC3, 0x84, 
	0x0E, 0x8A, 0xC3, 0x86, 0xEC, 0xD9, 0x42, 0x10, 0x20, 0xEA, 
	0x18, 0x90, 0x38, 0xDB, 0x16, 0x74, 0x86, 0x38, 0x03, 0x9C, 
	0xE1, 0x86, 0x7A, 0x87, 0xB8, 0x79, 0x10, 0x18, 0x22, 0x05, 
	0x49, 0xE2, 0x98, 0x03, 0xCF, 0x36, 0xEE, 0x03, 0x79, 0x74, 
	0x90, 0x02, 0x74, 0x6C, 0xEA, 0x00, 0x9E, 0xDE, 0x60, 0x00, 
	0x83, 0xD8, 0x01, 0x8E, 0x87, 0x8E, 0xA9, 0xF7, 0xFA, 0x40, 
	0xAE, 0x0F, 0x30, 0x80, 0x10, 0x28, 0xC0, 0xDE, 0xFB, 0x26, 
	0xEF, 0x58, 0x16, 0x90, 0x1B, 0xC0, 0xCC, 0xA1, 0x90, 0x3A, 
	0x8E, 0x83, 0xD8, 0x51, 0xD0, 0x03, 0x54, 0x9D, 0x05, 0xBB, 
	0x80, 0xE7, 0x21, 0x12, 0x84, 0xEC, 0xDE, 0x42, 0x5E, 0x87, 
	0xB0, 0x68, 0x38, 0xB0, 0x74, 0x7B, 0xD8, 0x9F, 0xC1, 0x4A, 
	0x80, 0x40, 0xB6, 0x10, 0xE4, 0xD0, 0xA4, 0x0E, 0x3C, 0x10, 
	0xAC, 0x31, 0x7B, 0x72, 0xB3, 0xFB, 0x30, 0xF7, 0x17, 0x60, 
	0x79, 0x3E, 0xC6, 0x1E, 0x7B, 0xA6, 0x3D, 0x06, 0x6C, 0xEE, 
	0xAD, 0xA2, 0x7C, 0x04, 0xE1, 0x26, 0x9E, 0x96, 0xE3, 0xB3, 
	0xA9, 0x39, 0xD3, 0x78, 0x44, 0xA5, 0xCC, 0x47, 0x4D, 0xF1, 
	0x26, 0xAD, 0x3F, 0x7E, 0x1D, 0x89, 0x25, 0xE6, 0xAC, 0x53, 
	0x59, 0x6E, 0xCC, 0x0E, 0x2C, 0xFD, 0xA1, 0x98, 0xB5, 0x6A, 
	0xB3, 0x26, 0xCE, 0xA6, 0x5F, 0x47, 0x70, 0x47, 0x49, 0x1F, 
	0xF0, 0x97, 0xE7, 0x0F, 0x35, 0x0C, 0xFA, 0x82, 0x92, 0xFB, 
	0x51, 0x0D, 0xF4, 0x49, 0x04, 0x44, 0x99, 0x1D, 0x3F, 0x4C, 
	0x29, 0xEF, 0x7E, 0xF4, 0x25, 0x8E, 0x74, 0x5F, 0x62, 0x40, 
	0x4F, 0xEB, 0xE8, 0x0F, 0x2C, 0xC8, 0x05, 0x85, 0x00, 0x30, 
	0xE7, 0xA2, 0xB4, 0x58, 0xA4, 0xAE, 0x29, 0xA6, 0x64, 0x18, 
	0x4D, 0x4A, 0xB9, 0xF8, 0x1E, 0x90, 0x04, 0x53, 0xAF, 0xAE, 
	0x9C, 0xB4, 0xB6, 0x8A, 0xA3, 0x55, 0x23, 0xD7, 0xE9, 0x19, 
	0x5A, 0x4D, 0x26, 0x75, 0x09, 0x77, 0x1C, 0x5A, 0xF2, 0x5D, 
	0xC1, 0x00, 0xAA, 0x2D, 0xB2, 0x01, 0x0C, 0x78, 0x04, 0x01, 
	0xEF, 0xEE, 0x35, 0xA4, 0xA0, 0x5F, 0x5C, 0x62, 0x1B, 0x7C, 
	0x8C, 0xB7, 0x96, 0x68, 0xED, 0xDD, 0xB7, 0x51, 0x17, 0x5A, 
	0xAF, 0xB2, 0x03, 0x7A, 0x9F, 0xCB, 0x79, 0x84, 0xFC, 0xA9, 
	0x60, 0xCA, 0xB4, 0x9C, 0x26, 0x2E, 0x4C, 0x41, 0xBD, 0x27, 
	0x5A, 0x67, 0x77, 0x2E, 0x88, 0x8E, 0x44, 0xB8, 0x5D, 0x37, 
	0xA7, 0x1E, 0xEC, 0xBC, 0x60, 0xC4, 0x72, 0x4A, 0x46, 0x8C, 
	0x46, 0x71, 0x0C, 0x76, 0x27, 0x6C, 0x81, 0x0E, 0x9E, 0xA3, 
	0x6B, 0x77, 0x06, 0xC3, 0x52, 0x04, 0xB6, 0xB5, 0x16, 0x81, 
	0x33, 0x68, 0xA2, 0x7C, 0xB8, 0x85, 0xF2, 0x4E, 0xF6, 0x6B, 
	0x0E, 0x86, 0x02, 0xA7, 0xFE, 0x4F, 0xB0, 0x18, 0xFD, 0x7F, 
	0x03, 0x96, 0x9E, 0xDD, 0xB4, 0xBD, 0xE1, 0x3F, 0xD9, 0xDE, 
	0xE1, 0xB0, 0x01, 0x65, 0x6F, 0x1B, 0xCA, 0x06, 0x5D, 0x39, 
	0x15, 0x55, 0x75, 0xCC, 0xD2, 0x22, 0xD6, 0xEE, 0xD2, 0x2B, 
	0x0D, 0x62, 0xCB, 0xE6, 0x37, 0xD1, 0xB6, 0x1D, 0x03, 0xFD, 
	0x6D, 0x77, 0xCC, 0x32, 0xFB, 0xCE, 0xB6, 0x80, 0xD1, 0x28, 
	0x91, 0xB6, 0x09, 0xD6, 0x56, 0x93, 0xCA, 0xF0, 0x87, 0x19, 
	0xC6, 0x92, 0x7C, 0x85, 0xDD, 0x43, 0xA7, 0x21, 0xA4, 0x58, 
	0x92, 0xBB, 0x1E, 0xFE, 0x14, 0x8D, 0xB6, 0x59, 0x71, 0xC9, 
	0xCE, 0xC0, 0x68, 0x20, 0x63, 0x0E, 0xD6, 0x64, 0xEC, 0x46, 
	0x09, 0x99, 0x3F, 0x6D, 0x33, 0x24, 0xAE, 0x9F, 0x92, 0x90, 
	0x59, 0x93, 0x10, 0x0A, 0xE3, 0xDF, 0x2E, 0xA2, 0x61, 0x35, 
	0x62, 0x59, 0xCE, 0x16, 0x32, 0xDF, 0x17, 0xD1, 0x0F, 0x84, 
	0x6B, 0xB3, 0xEE, 0x04, 0x87, 0x74, 0x9E, 0x38, 0x48, 0xD1, 
	0x29, 0x8D, 0x76, 0x6D, 0xB5, 0x43, 0xFB, 0xC7, 0x85, 0x57, 
	0x0D, 0x89, 0x9D, 0x41, 0xBF, 0xEB, 0x6C, 0xD0, 0xB0, 0xE4, 
	0x50, 0xD8, 0x6B, 0xDA, 0x54, 0x7F, 0xF7, 0x4D, 0xD9, 0x35, 
	0x75, 0x0D, 0xCC, 0x0D, 0x7A, 0x98, 0x9D, 0x95, 0x42, 0xB4, 
	0x7E, 0x22, 0xC0, 0xB5, 0x7B, 0x56, 0xD5, 0xF7, 0x3A, 0x43, 
	0x6B, 0x07, 0xE3, 0xDA, 0x0D, 0x57, 0xBB, 0x8A, 0x4B, 0x96, 
	0xC3, 0xE1, 0x0F, 0xA4, 0x14, 0x83, 0xAA, 0xC3, 0x59, 0x76, 
	0x79, 0xF6, 0x3A, 0xA5, 0xB4, 0xED, 0xD2, 0x52, 0x9F, 0x8A, 
	0xCB, 0x81, 0x3F, 0x16, 0x30, 0x3D, 0xB8, 0x99, 0x2C, 0xE1, 
	0x3E, 0x82, 0x85, 0x14, 0x4D, 0x5C, 0x8C, 0xCB, 0x2B, 0x42, 
	0x58, 0x5C, 0x11, 0x8A, 0x9C, 0x2A, 0x67, 0x5F, 0x6B, 0x0C, 
	0x54, 0xEC, 0xD9, 0xEE, 0xB5, 0xFB, 0xC6, 0x7F, 0x84, 0x1D, 
	0xF8, 0x29, 0x70, 0x40, 0xEE, 0x42, 0x50, 0x1D, 0x2F, 0xF6, 
	0x17, 0x49, 0x0A, 0x97, 0xF2, 0x5B, 0xB8, 0xF6, 0xA0, 0x78, 
	0x44, 0x91, 0x8E, 0xD7, 0xF9, 0xE6, 0x49, 0x9C, 0x77, 0xEE, 
	0x79, 0xE1, 0x16, 0x2E, 0x9C, 0x49, 0x14, 0x14, 0x83, 0x58, 
	0x21, 0x85, 0xA1, 0x9E, 0x03, 0xB7, 0x4E, 0x37, 0xED, 0x22, 
	0x2E, 0x7C, 0x8D, 0x0C, 0x77, 0xB0, 0xB1, 0x0F, 0x37, 0xE3, 
	0xB5, 0x0E, 0x52, 0xDA, 0xE0, 0xF3, 0xDC, 0x6E, 0x26, 0xA4, 
	0x6D, 0xFB, 0xD9, 0xF4, 0xEB, 0x65, 0xAD, 0x5F, 0x4F, 0xBB, 
	0x20, 0x37, 0x6B, 0x83, 0x62, 0x37, 0xF7, 0x22, 0xD8, 0xC6, 
	0x0F, 0x08, 0xCA, 0xF2, 0x63, 0x51, 0xE3, 0xAC, 0x57, 0x20, 
	0xFB, 0x4B, 0x2C, 0xE6, 0x93, 0xA6, 0x3B, 0x49, 0x1A, 0x30, 
	0x94, 0x12, 0x5F, 0xB2, 0xB9, 0xE7, 0xBC, 0x6D, 0xD6, 0xB6, 
	0xEC, 0x16, 0x5B, 0x86, 0x1D, 0x07, 0xE1, 0x5D, 0x59, 0xB2, 
	0x80, 0xAB, 0xFC, 0x13, 0xDD, 0xFB, 0x99, 0x9E, 0x6A, 0xA2, 
	0x3E, 0xC0, 0x2B, 0x56, 0x3D, 0xB8, 0xDB, 0x63, 0xA9, 0x43, 
	0x2A, 0x51, 0xED, 0x1F, 0x61, 0x0D, 0x43, 0xA1, 0x4B, 0xEA, 
	0x78, 0xBD, 0x03, 0x48, 0x9C, 0x96, 0x5F, 0x5D, 0x49, 0x39, 
	0xA3, 0x98, 0x2A, 0x54, 0x2E, 0xBE, 0xC5, 0x0B, 0x7D, 0x2F, 
	0xEA, 0x78, 0x51, 0x78, 0x13, 0x8F, 0xF2, 0x64, 0xE9, 0xAA, 
	0xC7, 0x2F, 0xF6, 0xDB, 0x2D, 0xE0, 0x4F, 0x6B, 0xEF, 0x2B, 
	0x7B, 0xF1, 0x75, 0xB6, 0x74, 0x95, 0xA3, 0x03, 0x44, 0x7B, 
	0xAC, 0x1C, 0x01, 0x63, 0x4A, 0x18, 0x8C, 0xD5, 0xE8, 0x3A, 
	0x0A, 0x3E, 0xF1, 0x12, 0xB2, 0x42, 0x55, 0x1A, 0x1C, 0x52, 
	0x8F, 0xF7, 0xDB, 0x54, 0xE0, 0x2B, 0x6D, 0x52, 0x6B, 0xAB, 
	0x47, 0x07, 0x00, 0x73, 0xAC, 0xEA, 0x49, 0x1C, 0x85, 0x31, 
	0xE3, 0x66, 0x98, 0x8D, 0x37, 0xCA, 0x90, 0x80, 0x10, 0x6B, 
	0x7A, 0xA2, 0x08, 0x59, 0xF4, 0x78, 0xDD, 0x82, 0xEB, 0x9F, 
	0x57, 0x2D, 0x4A, 0xD4, 0x45, 0x79, 0x72, 0x1E, 0x25, 0x5E, 
	0x3E, 0xA2, 0x17, 0x7D, 0xEA, 0x93, 0xA8, 0x8F, 0x64, 0x9A, 
	0x9E, 0x55, 0x2B, 0xE6, 0x6A, 0x12, 0x7F, 0x61, 0x0F, 0x2B, 
	0x7C, 0x5B, 0x41, 0xB7, 0xE9, 0x7D, 0xDA, 0x00, 0x55, 0x49, 
	0xF6, 0x35, 0x49, 0x7E, 0xC4, 0x7E, 0xBE, 0x08, 0xB3, 0x2E, 
	0x91, 0xD3, 0x5C, 0x55, 0x7B, 0x02, 0x94, 0xA9, 0xEE, 0xAD, 
	0x2F, 0xE4, 0x11, 0x38, 0x57, 0x74, 0x54, 0x29, 0x06, 0xBA, 
	0x51, 0xE1, 0x61, 0x9E, 0xAC, 0xC0, 0xB2, 0x80, 0x35, 0x3F, 
	0x53, 0x75, 0x2A, 0xB6, 0x62, 0xF9, 0x32, 0xA7, 0xF2, 0x65, 
	0xC4, 0x99, 0x45, 0xCC, 0xBC, 0x1E, 0x90, 0xEB, 0x91, 0xA0, 
	0x45, 0x18, 0xAE, 0x53, 0x19, 0x81, 0x1F, 0xA5, 0x54, 0xAD, 
	0x91, 0x0B, 0x02, 0xC4, 0x01, 0x38, 0x7B, 0xC0, 0x49, 0x66, 
	0x54, 0xC4, 0x58, 0x57, 0x75, 0xF1, 0x1B, 0x88, 0xB2, 0xA4, 
	0x0B, 0x9D, 0x27, 0x4D, 0x4F, 0xEA, 0xD6, 0x95, 0xE5, 0xAF, 
	0x50, 0x68, 0xB8, 0x33, 0xDC, 0x95, 0x69, 0x1C, 0x47, 0xB4, 
	0x15, 0x60, 0x23, 0xD0, 0x63, 0x76, 0xAF, 0xFC, 0xB9, 0xC4, 
	0xEA, 0x44, 0x8B, 0xD7, 0x31, 0xB3, 0x91, 0x02, 0x7C, 0xEB, 
	0x91, 0x6E, 0xE8, 0x95, 0xDD, 0x8F, 0xC7, 0xD1, 0x4B, 0x73, 
	0x64, 0x68, 0x0D, 0xF5, 0xD3, 0x75, 0xA1, 0x3A, 0xA9, 0xC2, 
	0x50, 0xD9, 0x8D, 0xE9, 0x81, 0x68, 0x13, 0xD8, 0xC6, 0x86, 
	0xC6, 0xFC, 0x05, 0xBE, 0x88, 0x25, 0x3F, 0x2B, 0xB0, 0x70, 
	0xE5, 0x01, 0xDB, 0xFB, 0x10, 0x07, 0x2B, 0x6A, 0x72, 0x65, 
	0xD1, 0x84, 0x4B, 0xFC, 0x6A, 0x03, 0x70, 0x97, 0x9E, 0x22, 
	0xCB, 0x32, 0x4F, 0xA3, 0x62, 0xD7, 0xB2, 0xEF, 0xA8, 0xE2, 
	0x8B, 0xBE, 0x88, 0xA5, 0xCA, 0xC5, 0x95, 0xF4, 0xB9, 0x08, 
	0x71, 0xE8, 0x6D, 0xD6, 0xB6, 0x8F, 0x2F, 0xAE, 0x46, 0xE0, 
	0x1A, 0xD7, 0xC7, 0xBC, 0xCC, 0xAD, 0xA3, 0x08, 0xED, 0xB5, 
	0x04, 0x1B, 0x8A, 0xED, 0x48, 0xFA, 0xE2, 0x0A, 0xB5, 0x2F, 
	0x54, 0x23, 0x0D, 0x54, 0xCA, 0xED, 0x8E, 0x5C, 0x6D, 0xC7, 
	0x45, 0x67, 0xF3, 0x1B, 0x08, 0x53, 0xD3, 0x68, 0xB6, 0x51, 
	0x64, 0xEF, 0x1D, 0x47, 0x2F, 0x55, 0xA5, 0xAB, 0xC0, 0xCE, 
	0x54, 0xB7, 0xF6, 0x26, 0xA0, 0x28, 0xC1, 0x8B, 0x9F, 0xE3, 
	0xC9, 0xEA, 0x3A, 0x66, 0xB9, 0x72, 0xE9, 0x65, 0x5F, 0x46, 
	0x3F, 0xC4, 0x78, 0x46, 0x80, 0x12, 0xE3, 0xD2, 0xC0, 0xF7, 
	0x19, 0x37, 0x77, 0x63, 0x1C, 0x35, 0xC8, 0xCB, 0x5B, 0xFC, 
	0xBB, 0x60, 0xB9, 0xC2, 0x05, 0x71, 0x8E, 0x0F, 0xA2, 0xF7, 
	0x1B, 0xB3, 0xE3, 0x31, 0x18, 0x97, 0x3C, 0x70, 0x34, 0x36, 
	0xED, 0x8A, 0x07, 0x52, 0x74, 0x94, 0xD5, 0xBB, 0x5E, 0x0D, 
	0xA7, 0x9D, 0x50, 0xA9, 0x1C, 0x4E, 0xE5, 0xED, 0xC2, 0xDA, 
	0xD7, 0xB1, 0x14, 0x8F, 0xD6, 0x7D, 0x1E, 0x91, 0xFC, 0x05, 
	0xF3, 0xBF, 0x5C, 0x27, 0x5F, 0x31, 0xAC, 0x89, 0xEA, 0x2B, 
	0xB7, 0x4C, 0x58, 0x78, 0x71, 0x75, 0x5D, 0x06, 0x96, 0x8D, 
	0x62, 0x21, 0x8F, 0x2D, 0x04, 0xCE, 0x82, 0x97, 0xFB, 0xA2, 
	0x22, 0xBA, 0x3F, 0xDA, 0xE7, 0x45, 0xC4, 0x7D, 0xB0, 0x64, 
	0x8C, 0x0B, 0xC5, 0x0A, 0x64, 0x1A, 0x05, 0x88, 0xC5, 0xE5, 
	0xF2, 0x11, 0xCB, 0x27, 0x32, 0xFF, 0x77, 0x75, 0xAF, 0x5E, 
	0x33, 0x51, 0xE8, 0x26, 0x08, 0x21, 0x39, 0xF0, 0x1E, 0x46, 
	0x4A, 0x48, 0x51, 0xB8, 0x73, 0x1D, 0x25, 0xFE, 0x17, 0x57, 
	0x59, 0x33, 0x86, 0x9E, 0xDD, 0xDA, 0x42, 0xEC, 0xA5, 0x9A, 
	0x2D, 0x92, 0x7B, 0xD0, 0x92, 0x28, 0x74, 0x42, 0x50, 0x27, 
	0x2E, 0xB9, 0x4A, 0xF8, 0x32, 0xD4, 0x8F, 0x39, 0x96, 0x64, 
	0x6C, 0xCD, 0x34, 0x52, 0x69, 0xC5, 0x16, 0x95, 0x0D, 0x53, 
	0xBB, 0xDB, 0x34, 0x35, 0xE2, 0xFE, 0x53, 0x51, 0xF2, 0x8E, 
	0xD6, 0x1A, 0xA8, 0x8C, 0x6E, 0x37, 0xBA, 0x35, 0xEB, 0x51, 
	0xDB, 0x24, 0xAB, 0xBB, 0xDB, 0x6A, 0x75, 0xBC, 0xD8, 0x54, 
	0xE5, 0xB1, 0x35, 0x61, 0x69, 0xE8, 0x45, 0x9A, 0xCA, 0xCF, 
	0xDC, 0x3B, 0xB9, 0x44, 0xBE, 0x2E, 0xDD, 0xC7, 0x45, 0x42, 
	0xB5, 0xA5, 0x54, 0x1F, 0x93, 0x7C, 0xD2, 0xEA, 0x0B, 0x2A, 
	0xE3, 0x97, 0x31, 0xC0, 0xA5, 0x55, 0xFF, 0x5C, 0xA0, 0x0B, 
	0xBA, 0x3C, 0x99, 0x6B, 0x08, 0xE4, 0x2C, 0x8A, 0x6E, 0x42, 
	0xFF, 0x53, 0xF9, 0xD6, 0x8B, 0x7E, 0xE3, 0xC2, 0x0B, 0xB7, 
	0xCC, 0x16, 0xB1, 0x73, 0xA4, 0x62, 0xE1, 0x99, 0x66, 0x67, 
	0x53, 0x9A, 0xC6, 0x26, 0xC6, 0xC6, 0x98, 0x8D, 0x5B, 0xCF, 
	0x4C, 0xEE, 0x99, 0x8E, 0xF6, 0x4D, 0x3A, 0x09, 0x8F, 0x8D, 
	0x97, 0x66, 0x1F, 0x62, 0xBC, 0xAB, 0x16, 0xE7, 0x96, 0x5F, 
	0xBC, 0xCF, 0x92, 0x8E, 0x09, 0x0F, 0x3F, 0xE1, 0x31, 0xE0, 
	0xEF, 0xB3, 0x2F, 0x47, 0x62, 0xE8, 0x99, 0xFD, 0xCA, 0x00, 
	0x9A, 0x99, 0x31, 0x32, 0xB5, 0x06, 0x9C, 0x49, 0xAA, 0xB4, 
	0x32, 0xFC, 0xEA, 0x0C, 0x3F, 0xC6, 0xF9, 0x49, 0xD4, 0x74, 
	0x3A, 0xD1, 0xE1, 0x19, 0x36, 0xCB, 0x18, 0xF4, 0xB7, 0x5D, 
	0xC4, 0x0D, 0x93, 0x85, 0x10, 0x42, 0xCD, 0x25, 0x7C, 0x09, 
	0x31, 0x8B, 0xF9, 0x58, 0xD7, 0x0B, 0x82, 0x96, 0xCC, 0x3F, 
	0x9C, 0x5F, 0xAA, 0xF4, 0xDE, 0xCA, 0x1B, 0x4F, 0x41, 0x40, 
	0x90, 0xBE, 0x80, 0x23, 0x64, 0xB5, 0x40, 0x97, 0x81, 0x53, 
	0x54, 0xB3, 0x0C, 0xF1, 0xFF, 0x1E, 0xA6, 0xD9, 0x4C, 0xCE, 
	0x34, 0xB8, 0xE7, 0x89, 0x09, 0x08, 0xAD, 0xA8, 0x2F, 0x4C, 
	0x8C, 0x18, 0x3E, 0x7D, 0xFB, 0x66, 0x90, 0x23, 0x56, 0xA6, 
	0xB9, 0xB5, 0x06, 0xE3, 0xEF, 0x0A, 0xAF, 0xFA, 0xC6, 0x8A, 
	0xA4, 0xA7, 0x95, 0x7E, 0x9D, 0x11, 0xA5, 0xEA, 0xBC, 0x39, 
	0x13, 0xC7, 0xBF, 0x1B, 0xE0, 0x3B, 0xE6, 0xF1, 0x54, 0x5E, 
	0xAB, 0x47, 0x33, 0xD2, 0x68, 0x28, 0x6B, 0x74, 0xBD, 0x00, 
	0xAE, 0x53, 0x2A, 0x46, 0x9E, 0x2A, 0xB7, 0x10, 0x9E, 0x65, 
	0x1C, 0x3C, 0x5B, 0x02, 0xC5, 0x07, 0xA0, 0xC2, 0x20, 0xFD, 
	0x10, 0x4D, 0x3E, 0x72, 0x0F, 0xD4, 0x3D, 0x8A, 0x84, 0x58, 
	0xBE, 0xD6, 0xC3, 0xED, 0xC9, 0x03, 0x81, 0xD4, 0x5E, 0x8B, 
	0xC5, 0xF4, 0x5A, 0x4C, 0x93, 0x1D, 0x1B, 0x17, 0x35, 0x38, 
	0x76, 0xB3, 0xFA, 0x35, 0xDD, 0x1F, 0xA7, 0x5D, 0xAE, 0xF4, 
	0x6C, 0x9A, 0x76, 0xB9, 0x39, 0xB1, 0xE0, 0x22, 0x0E, 0xD8, 
	0xD7, 0x19, 0xF7, 0x98, 0xE2, 0x3E, 0xF6, 0x09, 0x48, 0x3D, 
	0xFB, 0x3A, 0xAB, 0x1C, 0x2E, 0x5E, 0x0F, 0xC9, 0xF2, 0x95, 
	0x27, 0xA1, 0xBB, 0x31, 0x8F, 0x7E, 0x0C, 0x2A, 0xF3, 0x51, 
	0xF1, 0xAD, 0x92, 0xE5, 0xA6, 0xA0, 0xA0, 0xED, 0xED, 0x3D, 
	0x3F, 0x5F, 0x75, 0x74, 0xBD, 0xAE, 0x65, 0x1F, 0x7E, 0x5C, 
	0xEE, 0x42, 0x5B, 0x62, 0x5E, 0x2B, 0x86, 0x4B, 0x03, 0xB8, 
	0xC0, 0xDE, 0xDE, 0x2F, 0xE1, 0x3A, 0xC6, 0xED, 0xED, 0x91, 
	0x01, 0xEC, 0xFE, 0xCE, 0x92, 0xD0, 0x7C, 0xEF, 0xBD, 0xA5, 
	0xBE, 0x7E, 0x5B, 0xA9, 0x57, 0x8C, 0x02, 0x25, 0xA1, 0x23, 
	0xAF, 0x75, 0xED, 0xF2, 0x05, 0x10, 0xB7, 0xC0, 0x69, 0x1F, 
	0xE5, 0xD7, 0xAC, 0x1B, 0xAF, 0x7A, 0xD3, 0x6A, 0xE2, 0x20, 
	0x65, 0x27, 0xDB, 0x9C, 0x16, 0x1C, 0xD2, 0xAF, 0x7A, 0x09, 
	0x7F, 0x87, 0x1A, 0x8F, 0x2D, 0x37, 0x96, 0x9C, 0x18, 0x2E, 
	0xBA, 0x05, 0x58, 0xBC, 0xE1, 0xC7, 0x21, 0x4A, 0x9A, 0xB3, 
	0x16, 0x35, 0x47, 0x29, 0xE0, 0xB4, 0xA6, 0xB5, 0xB4, 0x1E, 
	0xAB, 0xB6, 0x2F, 0x79, 0xFE, 0x4C, 0x48, 0xD7, 0xD1, 0x7F, 
	0xBC, 0x8E, 0xFA, 0x6E, 0xD3, 0x77, 0x02, 0xC5, 0x2D, 0x2B, 
	0xE2, 0xE9, 0x47, 0x30, 0x3E, 0x49, 0x53, 0xEF, 0xA1, 0x1B, 
	0x66, 0xD4, 0x6E, 0xEE, 0x08, 0xAE, 0x1D, 0xC1, 0xCB, 0xFA, 
	0x28, 0x88, 0x68, 0x54, 0x1F, 0xD3, 0xEF, 0xC6, 0x9D, 0xA4, 
	0x63, 0xE2, 0xC1, 0x89, 0xF7, 0x66, 0xFC, 0x1C, 0x79, 0x3C, 
	0x46, 0x13, 0x48, 0xE6, 0x4A, 0x52, 0x06, 0xC6, 0x73, 0xD0, 
	0xC1, 0xF9, 0x51, 0x1D, 0xB6, 0x10, 0xEB, 0x39, 0xCF, 0x2B, 
	0xA2, 0x5A, 0xC0, 0xA9, 0xD2, 0x3E, 0x9F, 0xE9, 0xE7, 0xDF, 
	0x3B, 0x49, 0xD2, 0x5A, 0x0F, 0x9D, 0x6F, 0x7C, 0x2E, 0xEE, 
	0x39, 0x98, 0x37, 0x90, 0xA2, 0x3E, 0x8E, 0x21, 0xEA, 0x6D, 
	0x30, 0xBB, 0x41, 0x70, 0x0B, 0xB7, 0x1D, 0x93, 0xA7, 0x5A, 
	0xBB, 0x2E, 0xDE, 0x94, 0xE2, 0xF6, 0xB5, 0x14, 0x59, 0x21, 
	0xC7, 0xD1, 0x97, 0x58, 0x0B, 0x9A, 0xB7, 0x8C, 0xE3, 0x64, 
	0x6F, 0x4F, 0x7C, 0xC0, 0x3A, 0xBD, 0x9B, 0xD5, 0xC4, 0xB9, 
	0x9E, 0x78, 0x4E, 0x90, 0x1F, 0xDB, 0xEB, 0x75, 0xFF, 0x58, 
	0x88, 0xC0, 0xD8, 0x79, 0x9B, 0x94, 0x9D, 0x1C, 0x1B, 0xDF, 
	0xBE, 0x05, 0x0D, 0x92, 0x80, 0xB4, 0x7E, 0x63, 0xCC, 0x94, 
	0x59, 0x6F, 0xB6, 0x2B, 0xDC, 0xD0, 0xB8, 0xD5, 0x30, 0x67, 
	0xCE, 0x46, 0x89, 0xB6, 0x65, 0x67, 0xE7, 0xFF, 0xAE, 0xDD, 
	0x04, 0x12, 0x7F, 0xC9, 0xF1, 0xD8, 0x78, 0x69, 0x8D, 0xCC, 
	0xED, 0x06, 0x0B, 0xE6, 0xBE, 0xAB, 0xC9, 0x2E, 0x7F, 0x8A, 
	0xBF, 0x65, 0xC1, 0x5F, 0xBB, 0xFD, 0xF4, 0x44, 0xC5, 0xC9, 
	0x27, 0xF9, 0x03, 0xAB, 0xE2, 0x73, 0x83, 0xC7, 0xA2, 0xA6, 
	0x40, 0x5F, 0x41, 0xC9, 0xD1, 0xEF, 0x3A, 0x09, 0x1E, 0x1E, 
	0xA9, 0x74, 0x34, 0xF7, 0x6E, 0xC3, 0xE8, 0x61, 0x74, 0x82, 
	0xE9, 0xB1, 0x7E, 0x0E, 0xB1, 0x86, 0x61, 0xED, 0x48, 0xCF, 
	0xBC, 0x38, 0xEB, 0x64, 0x90, 0x34, 0xCF, 0xDD, 0xCE, 0x3D, 
	0xBB, 0xFE, 0x12, 0xE6, 0x9D, 0x65, 0x8A, 0x35, 0x30, 0x1F, 
	0x3F, 0x63, 0xEE, 0x78, 0xC1, 0xE7, 0x55, 0x96, 0x8F, 0xD8, 
	0x57, 0xCF, 0xCF, 0xDD, 0x27, 0x2C, 0xA3, 0x55, 0xF2, 0xDF, 
	0x45, 0x4F, 0x79, 0x54, 0xAE, 0xA9, 0x5C, 0x36, 0x52, 0x5E, 
	0xF4, 0xE8, 0x8F, 0x92, 0x25, 0x51, 0x18, 0x28, 0x26, 0x64, 
	0xF5, 0xCA, 0x12, 0xF2, 0x29, 0x70, 0xAE, 0x91, 0x83, 0x9D, 
	0x5B, 0x2F, 0xBD, 0x09, 0xE3, 0x91, 0x62, 0x39, 0x8A, 0xA1, 
	0xC0, 0x3F, 0x57, 0xC1, 0x2F, 0xD3, 0x6F, 0xD2, 0x64, 0x15, 
	0x07, 0x9C, 0xDC, 0xE8, 0xC5, 0xF5, 0x21, 0xFE, 0x75, 0x05, 
	0xCE, 0x4E, 0xEA, 0x05, 0xE1, 0x2A, 0xE3, 0xE0, 0x9B, 0xD4, 
	0xBB, 0xD1, 0xB5, 0xF2, 0x58, 0x50, 0x07, 0x7A, 0x82, 0x32, 
	0x7E, 0x61, 0x08, 0x7F, 0xEA, 0x48, 0x7A, 0x88, 0x64, 0x83, 
	0xA2, 0xF2, 0x82, 0xD1, 0x9F, 0x35, 0xAF, 0xC0, 0x1A, 0xFD, 
	0x5D, 0x33, 0x5C, 0x0C, 0x6C, 0xB9, 0x88, 0xF1, 0xCA, 0x2A, 
	0x95, 0xE0, 0x7C, 0x86, 0xDF, 0x5C, 0x02, 0x64, 0x18, 0xF3, 
	0xC2, 0x22, 0x00, 0xE3, 0xF5, 0xA6, 0x81, 0x77, 0xBC, 0x5E, 
	0xA3, 0xF0, 0x36, 0x44, 0xE0, 0x05, 0xFE, 0x3C, 0x18, 0x36, 
	0xEE, 0x77, 0x7E, 0x06, 0x10, 0xBC, 0x66, 0x16, 0xB1, 0x79, 
	0xEE, 0xAE, 0x45, 0x7F, 0x48, 0x7F, 0x9A, 0x44, 0x6F, 0x35, 
	0x6E, 0xBB, 0xDC, 0x75, 0x83, 0x8C, 0x9A, 0x98, 0x8D, 0x52, 
	0xA0, 0xEC, 0x47, 0xCC, 0x4B, 0x05, 0xE5, 0x27, 0xA5, 0x91, 
	0xBD, 0x85, 0x0D, 0xEB, 0x4A, 0x45, 0x13, 0xB6, 0xCD, 0x85, 
	0x2F, 0xD0, 0x84, 0xCB, 0x75, 0x9D, 0x3C, 0x59, 0x82, 0xFA, 
	0xE8, 0x13, 0xC5, 0x86, 0xC5, 0x0B, 0x0B, 0xF7, 0x5C, 0xD6, 
	0x42, 0x15, 0x1B, 0xD7, 0xC9, 0x32, 0x57, 0x4A, 0xA1, 0x17, 
	0x64, 0x0D, 0xB0, 0x2F, 0xC0, 0x87, 0x16, 0x56, 0x48, 0xC1, 
	0x74, 0x9A, 0xC5, 0x60, 0x30, 0x3B, 0xB8, 0xB6, 0x5D, 0x85, 
	0x77, 0xEF, 0xF1, 0x3F, 0x85, 0xED, 0x6A, 0x7C, 0xD9, 0xE9, 
	0x2A, 0x57, 0x1E, 0x97, 0xE2, 0x7F, 0xE1, 0x8C, 0x94, 0x79, 
	0xF8, 0x95, 0x05, 0x08, 0x8C, 0x9F, 0x46, 0x8F, 0x14, 0x62, 
	0x93, 0x2A, 0x9B, 0xE2, 0xB9, 0xC1, 0xF4, 0xEC, 0xB3, 0x93, 
	0x37, 0x8E, 0x51, 0x50, 0x57, 0x04, 0xF9, 0xD2, 0x10, 0x4D, 
	0x80, 0x53, 0x38, 0xE7, 0x4D, 0xFB, 0xA5, 0xB1, 0x00, 0xFF, 
	0xF3, 0xA7, 0xC7, 0x39, 0x88, 0x93, 0x18, 0xC0, 0xB7, 0x58, 
	0x69, 0x21, 0x1D, 0x1B, 0x70, 0x92, 0x62, 0xC4, 0x87, 0xC2, 
	0x8A, 0xF8, 0x50, 0xB8, 0xBE, 0x6D, 0x5C, 0xD8, 0x64, 0xB7, 
	0xF8, 0x39, 0xDF, 0xA3, 0x54, 0x7B, 0xE0, 0x75, 0x05, 0xD0, 
	0x5C, 0x97, 0x05, 0xF9, 0xA3, 0x54, 0xD0, 0x75, 0xD7, 0x1B, 
	0x86, 0xAD, 0xCE, 0xE7, 0x73, 0xB7, 0xD8, 0x98, 0xA1, 0x58, 
	0xA0, 0x21, 0xCB, 0x15, 0x2C, 0x15, 0xDD, 0x26, 0x77, 0xE5, 
	0xF6, 0x2D, 0xF9, 0x36, 0x37, 0xF4, 0x26, 0x55, 0x0A, 0xBF, 
	0x69, 0x72, 0x9B, 0xA5, 0xF2, 0x58, 0x88, 0xBC, 0x80, 0x97, 
	0x2C, 0xCA, 0x6C, 0xF6, 0xD0, 0xFF, 0xBC, 0x65, 0x41, 0xE8, 
	0x29, 0x14, 0x0D, 0xC1, 0x04, 0x85, 0xBE, 0x4B, 0xE9, 0xA2, 
	0xB0, 0x95, 0x5F, 0xC2, 0xDB, 0x65, 0x92, 0xE6, 0x5E, 0x0C, 
	0xC1, 0xF1, 0x49, 0xE5, 0x77, 0x54, 0xFC, 0x2E, 0xAE, 0x63, 
	0xF2, 0xEF, 0xE3, 0x30, 0x1F, 0xA2, 0x6F, 0xC3, 0xDC, 0xFF, 
	0x03, 0xAA, 0x39, 0x3D, 0x48, 0xD0, 0x3F, 0x00, 0x00, 
};

	// Default Controller Configuration (len=55)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x25, 0x05, 0x04, 0x41, 0x2D, 0x01, 0x00, 0x05, 0x04, 
	0x41, 0x2D, 0x01, 0x01, 0x05, 0x04, 0x41, 0x2D, 0x02, 0x00, 
	0x05, 0x04, 0x41, 0x2D, 0x02, 0x01, 0x05, 0x04, 0x41, 0x2D, 
	0x03, 0x00, 0x05, 0x04, 0x41, 0x2D, 0x03, 0x01, 0xFF, 0xC0, 
	0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 0xC0, 
	0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


SkaarhojGPIO2x8 GPIOboard;