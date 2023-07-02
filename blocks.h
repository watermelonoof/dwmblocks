//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 	"sb-nettraf",	1,	0},
	{"", 	"sb-cpu",	1,	1},
	{"", 	"sb-memory",	1,	2},
	/* {"", 	"sb-disk",	60,	3}, */
	{"", 	"sb-battery",	30,	4},
	/* {"", 	"sb-internet",	5,	5}, */
	{"",	"sb-clock",	1,	6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
