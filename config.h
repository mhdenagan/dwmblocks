//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",    "cat /tmp/recordingicon 2>/dev/null",   0,  9},
    {"",	"sb-music",     0,	11},
    {"",    "sb-pacpackages",   0,  8},
	{"",	"sb-news",      0,	6},
    {"",    "mailbox.sh",   3600,  12},
    {"",    "sb-torrent",   15, 7},
    {"",    "vreme",        3600,   5},
    {"",    "sb-doppler",   0,  13},
	{"",	"sb-volume",	0,	10},
    {"🌍 ", "xkb.sh",       0,  22},
    /*{"",    "sb-internet",  15,  4},*/
	{"",	"sb-battery",	5,	3},
	{"",	"sb-clock", 	60,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

