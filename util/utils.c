#include "utils.h"

void read_file(char *filepath, char str[BUFSIZE][LINESIZE]) {
  FILE *fptr;
  fptr = fopen(filepath, "r");
  if(fptr == NULL) {
    printf("Error reading file %s\n", filepath);
    return;
  }
  int i = 0;
  while(fgets(str[i], LINESIZE, fptr)) {
    i++;
  }
  str[i][0] = '\0';
}

int strToDigit(char *str, int *len) {
  char substr[10];
  for(int i = 0; i <= 9; i++) {
    switch(i) {
    case 0:
      *len = 4;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "zero") == 0)
	return 0;
      break;
    case 1:
      *len = 3;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "one") == 0)
	return 1;
      break;
    case 2:
      *len = 3;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "two") == 0)
	return 2;
      break;      
    case 3:
      *len = 5;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "three") == 0)
	return 3;
      break;      
    case 4:
      *len = 4;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "four") == 0)
	return 4;
      break;      
    case 5:
      *len = 4;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "five") == 0)
	return 5;
      break;      
    case 6:
      *len = 3;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "six") == 0)
	return 6;
      break;      
    case 7:
      *len = 5;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "seven") == 0)
	return 7;
      break;      
    case 8:
      *len = 5;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "eight") == 0)
	return 8;
      break;
    case 9:
      *len = 4;
      getSubStr(0, *len, str, substr);
      if(strcmp(substr, "nine") == 0)
	return 9;
      break;      
    }
  }
  *len = -1;
  return *len;
}

int getSubStr(int pos, int len, char *str, char *substr) {
  int i = 0;
  while(i < len) {
    if(str[pos + i] == '\0' || str[pos + i] == '\n') {
      substr[0] = '\0';
      return -1;
    }
    substr[i] = str[pos + i];
    i++;
  }

  substr[i] = '\0';
  return len;
}
