//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/   /*Command*/		                /*Update Interval*/	/*Update Signal*/
	{"",       "echo \"\"",                         0,                      0},
	{"",       "audio.sh",                          0,                      5},
	{"",       "echo \"|\"",                        0,                      0},
	{"",       "date '+%d %B %Y (%a) | %I:%M %p '", 1,                      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
