#ifndef READFILEH
#define READFILEH

#include "stdio.h"
#include "string.h"

#define BUFSIZE 2000
#define LINESIZE 200

void read_file(char *filepath, char str[BUFSIZE][LINESIZE]);
int strToDigit(char *str, int *len);
int getSubStr(int pos, int len, char *str, char *substr);
int getCharPos(char *str, char ch);

#endif
