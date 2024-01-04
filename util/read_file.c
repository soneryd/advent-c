#include "read_file.h"

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
