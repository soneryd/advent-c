#include "../include/solutions.h"

void solveDay1(char input[BUFSIZE][LINESIZE]) {
  // Part 1
  int sum = 0;
  for(int i = 0; input[i][0] != '\0'; i++) {
    int first = -1;
    int last = -1;
    for(int j = 0; input[i][j] != '\n'; j++) {
      if(input[i][j] - '0' >= 0 && input[i][j] - '0' <= 9) {
	if(first == -1 && last == -1)
	  first = input[i][j] - '0';
	last = input[i][j] - '0';
      }
    }
    sum += (first*10) + last;
  }

  printf("Answer to Part one: %i\n", sum);

  // Part 2
  sum = 0;
  for(int i = 0; input[i][0] != '\0'; i++) {
    int first = -1;
    int last = -1;
    for(int j = 0; input[i][j] != '\n'; j++) {
      if(input[i][j] - '0' >= 0 && input[i][j] - '0' <= 9) {
	if(first == -1 && last == -1)
	  first = input[i][j] - '0';
	last = input[i][j] - '0';
      } else {
	int len = -1;
	int *lenptr;
	lenptr = &len;
	int digit = strToDigit(input[i]+j, lenptr);
	if(digit != -1) {
	  if(first == -1 && last == -1)
	    first = digit;
	  last = digit;
	}
      }
    }
    sum += (first*10) + last;
  }

  printf("Answer to Part two: %i\n", sum);
}

void solveDay2(char input[BUFSIZE][LINESIZE]) {
  // Part 1
  for(int i = 0; input[i][0] != '\0'; i++) {
    char subStr[LINESIZE];
    int endPos = getCharPos(input[i], '\n');
    int pos = getCharPos(input[i], ':');
    getSubStr(pos+2, endPos-pos-2, input[i], subStr);
    endPos = getCharPos(subStr, '\n');

    // Strip non-numerical or alphabetical characters
    while((pos = getCharPos(subStr, ';')) != endPos || (pos = getCharPos(subStr, ',')) != endPos) {
      subStr[pos] = ' ';
    }

    while((pos = getCharPos(subStr, ' ' != endPos))) {
      // Consume number
      int num;
      while(subStr[0] >= '0' && subStr[0] <= '9') {
	endPos = getCharPos(subStr, '\n');
	num = atoi(subStr);

	if(num > 9) {
	  getSubStr(3, endPos-3, subStr, subStr);
	} else {
	  getSubStr(2, endPos-2, subStr, subStr);
	}
      }

      // Consume color
      char colorStr[LINESIZE];
      pos = getCharPos(subStr, ' ');
      getSubStr(0, pos, subStr, colorStr);
      //printf("%s\n", colorStr);

      endPos = getCharPos(subStr, '\n');
      if(colorFromString(colorStr) == RED) {
	getSubStr(3, endPos-3, subStr, subStr);
      }
      else if(colorFromString(colorStr) == GREEN) {
	getSubStr(3, endPos-3, subStr, subStr);
      }
      else if(colorFromString(colorStr) == BLUE) {
	getSubStr(3, endPos-3, subStr, subStr);
      } else {
	printf("COLOR: %s :( \n", colorStr);
	getSubStr(1, endPos-1, subStr, subStr);
      }
    }
  }
    
  /*   while((pos = getCharPos(input[i], ':')) != endPos || (pos = getCharPos(input[i], ';')) != endPos) { */
  /*     input[i][pos] = ' '; */
  /*     int pos2 = getCharPos(input[i], ';'); */
  /*     getSubStr(pos+2, pos2-pos, input[i], subStr); */

  /*     int subStrEndPos = getCharPos(subStr, '\n'); */

  /*     // Get # and color */
  /*     char subStr2[LINESIZE]; */
  /*     char colorStr9[LINESIZE]; */

  /*     pos = getCharPos(subStr, ','); */
  /*     getSubStr(0, pos, subStr, subStr2); */
  /*     int num = atoi(subStr2); */

  /*     pos = getCharPos(subStr2, ' '); */
  /*     pos2 = getCharPos(subStr2, '\0'); */
  /*     getSubStr(pos, pos2-pos, subStr2, colorStr); */
  /*     printf("Color: %s, number: %i\n", colorStr, num); */

  /*     while((pos = getCharPos(subStr, ',')) != subStrEndPos) { */
  /* 	subStr[pos] = ' '; */
  /* 	printf("ENTERING SUBSTR: %s\n", subStr); */
  /* 	pos2 = getCharPos(subStr, ','); */
  /* 	getSubStr(pos+2, pos2-pos-2, subStr, subStr2); */
  /* 	int num = atoi(subStr2); */
  /* 	pos = getCharPos(subStr2, ' '); */
  /* 	pos2 = getCharPos(subStr2, ';'); */
  /* 	getSubStr(pos, pos2-pos, subStr2, colorStr); */
  /* 	printf("Color: %s, number: %i\n", colorStr, num); */
  /*     } */
  /*     //printf("%s\n", subStr); */
  /*   } */
  /*   printf("\n ---- \n"); */
  /* } */
}
void solveDay3(char input[BUFSIZE][LINESIZE]) {
  
}
void solveDay4(char input[BUFSIZE][LINESIZE]) {

}
void solveDay5(char input[BUFSIZE][LINESIZE]) {

}
void solveDay6(char input[BUFSIZE][LINESIZE]) {

}
void solveDay7(char input[BUFSIZE][LINESIZE]) {

}
void solveDay8(char input[BUFSIZE][LINESIZE]) {

}
void solveDay9(char input[BUFSIZE][LINESIZE]) {

}
void solveDay10(char input[BUFSIZE][LINESIZE]) {

}
void solveDay11(char input[BUFSIZE][LINESIZE]) {

}
void solveDay12(char input[BUFSIZE][LINESIZE]) {

}
void solveDay13(char input[BUFSIZE][LINESIZE]) {

}
void solveDay14(char input[BUFSIZE][LINESIZE]) {

}
void solveDay15(char input[BUFSIZE][LINESIZE]) {

}
void solveDay16(char input[BUFSIZE][LINESIZE]) {

}
void solveDay17(char input[BUFSIZE][LINESIZE]) {

}
void solveDay18(char input[BUFSIZE][LINESIZE]) {

}
void solveDay19(char input[BUFSIZE][LINESIZE]) {

}
void solveDay20(char input[BUFSIZE][LINESIZE]) {

}
void solveDay21(char input[BUFSIZE][LINESIZE]) {

}
void solveDay22(char input[BUFSIZE][LINESIZE]) {

}
void solveDay23(char input[BUFSIZE][LINESIZE]) {

}
void solveDay24(char input[BUFSIZE][LINESIZE]) {

}
