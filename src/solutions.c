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
  int gameIdSum = 0;
    
  for(int i = 0; input[i][0] != '\0'; i++) {
    int pos = getCharPos(input[i], ' ');
    int endPos = getCharPos(input[i], '\n');
    getSubStr(pos+1, endPos-pos-1, input[i], input[i]);

    int gameId = atoi(input[i]);
    pos = getCharPos(input[i], ' ');
    endPos = getCharPos(input[i], '\n');
    getSubStr(pos+1, endPos-pos-1, input[i], input[i]);

    // Strip non-numerical or alphabetical characters
    while((pos = getCharPos(input[i], ';')) != endPos || (pos = getCharPos(input[i], ',')) != endPos) {
      input[i][pos] = ' ';
    }

    while((pos = getCharPos(input[i], ' ' != endPos))) {
      // Consume number
      int num;
      while(input[i][0] >= '0' && input[i][0] <= '9') {
	
	num = atoi(input[i]);

	pos = getCharPos(input[i], ' ');
	endPos = getCharPos(input[i], '\n');
	getSubStr(pos, endPos-pos, input[i], input[i]);
      }

      // Consume color
      char colorStr[LINESIZE];
      pos = getCharPos(input[i], ' ');
      getSubStr(0, pos, input[i], colorStr);

      // Check color + num
      int color = colorFromString(colorStr);
      if(num > (color + 12) && color >= 0) {
	  gameId = 0;
      }

      pos = getCharPos(input[i], ' ');
      endPos = getCharPos(input[i], '\n');
      getSubStr(pos+1, endPos-pos-1, input[i], input[i]);
    }

    gameIdSum += gameId;
  }
  printf("Answer to Part one: %i\n", gameIdSum);  
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
