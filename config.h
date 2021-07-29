/* modify this file to change what commands output to your statusbar, and recompile using the make command. */

static const Block blocks[] = {
    /* Icon         Command                 Interval    Signal */
    { "",           "sb-ram",               60,         0       },
    { "",           "sb-datetime",          10,         0       },
    { "",           "sb-volume",            0,          10      },
    { "",           "sb-battery",           60,         0       },
    { "",           "sb-internet",          60,         0       },
};

/* sets delimeter between status commands. NULL character ('\0') means no delimeter. */
static char delim[] = " | ";
static unsigned int delimLen = 5;
