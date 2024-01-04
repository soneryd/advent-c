#include "stdio.h"

#ifndef READFILEH
#define READFILEH

#define BUFSIZE 2000
#define LINESIZE 100

void read_file(char *filepath, char str[BUFSIZE][LINESIZE]);

#endif
