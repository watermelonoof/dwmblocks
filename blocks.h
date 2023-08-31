//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 	"sb-nettraf",	1,	0},
	/* {"", 	"sb-cpu",	1,	1}, */
	{"", 	"sb-volume",	60,	10},
	/* {"", 	"sb-disk",	60,	3}, */
	{"", 	"sb-battery",	5,	4},
	{"",	"sb-internet",	30,	7},
	{"",	"sb-clock",		1,	6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 2;
