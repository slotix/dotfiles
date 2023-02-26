//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  // {"", "/home/dm3/dwmscripts/dwmbar3",				5,		0},
  {"", "/home/dm3/dwmscripts/dwmupdates",				3600,		0},
  // {"", "/home/dm3/dwmscripts/dwmnotifypipewire",				1,		0},
  {"", "/home/dm3/dwmscripts/dwmtemp",				5,		0},
  // {"", "/home/dm3/dwmscripts/dwmup",				5,		0},
  {"", "/home/dm3/dwmscripts/dwmcpu",					5,		0},
	{"", "/home/dm3/dwmscripts/dwmmemory",				5,		0},
	{"", "/home/dm3/dwmscripts/dwmdisk",				5,		0},
	{"", "/home/dm3/dwmscripts/dwmweather",				120,		0},
	{"", "/home/dm3/dwmscripts/dwmvol",					0,		10},
	{"", "/home/dm3/dwmscripts/dwmkeyboard",				1,		0},
	{"", "/home/dm3/dwmscripts/dwmclock",				5,		0},
	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},


	// {"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
