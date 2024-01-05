#include "../include/solutions.h"

void solveDay1(char input[BUFSIZE][LINESIZE]) {
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
}
void solveDay2(char input[BUFSIZE][LINESIZE]) {
  
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
