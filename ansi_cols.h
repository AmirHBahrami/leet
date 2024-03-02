#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#ifndef __STDIO_H
	#include <stdio.h>
#endif

// printint characters and all
#define cprintc( ch , col  ) printf( (col) "%c" ANSI_COLOR_RESET , (ch)  )
#define cprintc_red( ch ) printf( ANSI_COLOR_RED "%c" ANSI_COLOR_RESET , (ch)  )
#define cprintc_green( ch ) printf( ANSI_COLOR_GREEN "%c" ANSI_COLOR_RESET , (ch)  )
#define cprintc_yellow( ch ) printf( ANSI_COLOR_YELLOW "%c" ANSI_COLOR_RESET , (ch)  )
#define cprintc_blue( ch ) printf( ANSI_COLOR_BLUE "%c" ANSI_COLOR_RESET , (ch)  )
#define cprintc_magenta( ch ) printf( ANSI_COLOR_MAGENTA "%c" ANSI_COLOR_RESET , (ch)  )
#define cprintc_cyan( ch ) printf( ANSI_COLOR_CYAN "%c" ANSI_COLOR_RESET , (ch)  )

// print strings functions
#define cprint( ch , col  ) printf( (col) "%s" ANSI_COLOR_RESET , (ch)  )
#define cprint_red( ch ) printf( ANSI_COLOR_RED "%s" ANSI_COLOR_RESET , (ch)  )
#define cprint_green( ch ) printf( ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET , (ch)  )
#define cprint_yellow( ch ) printf( ANSI_COLOR_YELLOW "%s" ANSI_COLOR_RESET , (ch)  )
#define cprint_blue( ch ) printf( ANSI_COLOR_BLUE "%s" ANSI_COLOR_RESET , (ch)  )
#define cprint_magenta( ch ) printf( ANSI_COLOR_MAGENTA "%s" ANSI_COLOR_RESET , (ch)  )
#define cprint_cyan( ch ) printf( ANSI_COLOR_CYAN "%s" ANSI_COLOR_RESET , (ch)  )
