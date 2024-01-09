#ifndef READFILEH
#define READFILEH

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

#define BUFSIZE 2000
#define LINESIZE 200

enum Colors {
  RED,
  GREEN,
  BLUE
}; 

void read_file(char *filepath, char str[BUFSIZE][LINESIZE]);
int strToDigit(char *str, int *len);
int getSubStr(int pos, int len, char *str, char *substr);
int getCharPos(char *str, char ch);
int colorFromString(char *str);
  
#endif
