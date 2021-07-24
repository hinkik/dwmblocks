static const Block blocks[] = {
	/*Icon*/    /*Command*/    /*Update Interval*/    /*Update Signal*/
	{"",         "sb-weather",  3600,                  3},
	{"",         "sb-volume",   0,                     10},
	{"",         "sb-battery",  5,                     1},
	{"",         "sb-internet", 5,                     1},
	{"",         "sb-clock",    30,                    2}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
