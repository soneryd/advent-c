#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "../util/read_file.h"
#include "../include/solutions.h"

int main(int argc, char *argv[]) {
  char input[BUFSIZE][LINESIZE];
    if(strcmp(argv[1], "day1") == 0) {
    read_file("input/day1", input);
    solveDay1(input);
  } else if(strcmp(argv[1], "day2") == 0) {
    read_file("input/day2", input);
    solveDay2(input);
  } else if(strcmp(argv[1], "day3") == 0) {
    read_file("input/day3", input);
    solveDay3(input);
  } else if(strcmp(argv[1], "day4") == 0) {
    read_file("input/day4", input);
    solveDay4(input);
  } else if(strcmp(argv[1], "day5") == 0) {
    read_file("input/day5", input);
    solveDay5(input);    
  } else if(strcmp(argv[1], "day6") == 0) {
    read_file("input/day6", input);
    solveDay6(input);    
  } else if(strcmp(argv[1], "day7") == 0) {
    read_file("input/day7", input);
    solveDay7(input);    
  } else if(strcmp(argv[1], "day8") == 0) {
    read_file("input/day8", input);
    solveDay8(input);    
  } else if(strcmp(argv[1], "day9") == 0) {
    read_file("input/day9", input);
    solveDay9(input);    
  } else if(strcmp(argv[1], "day10") == 0) {
    read_file("input/day10", input);
    solveDay10(input);    
  } else if(strcmp(argv[1], "day11") == 0) {
    read_file("input/day11", input);
    solveDay11(input);    
  } else if(strcmp(argv[1], "day12") == 0) {
    read_file("input/day12", input);
    solveDay12(input);    
  } else if(strcmp(argv[1], "day13") == 0) {
    read_file("input/day13", input);
    solveDay13(input);    
  } else if(strcmp(argv[1], "day14") == 0) {
    read_file("input/day14", input);
    solveDay14(input);    
  } else if(strcmp(argv[1], "day15") == 0) {
    read_file("input/day15", input);
    solveDay15(input);    
  } else if(strcmp(argv[1], "day16") == 0) {
    read_file("input/day16", input);
    solveDay16(input);    
  } else if(strcmp(argv[1], "day17") == 0) {
    read_file("input/day17", input);
    solveDay17(input);    
  } else if(strcmp(argv[1], "day18") == 0) {
    read_file("input/day18", input);
    solveDay18(input);    
  } else if(strcmp(argv[1], "day19") == 0) {
    read_file("input/day19", input);
    solveDay19(input);    
  } else if(strcmp(argv[1], "day20") == 0) {
    read_file("input/day20", input);
    solveDay20(input);    
  } else if(strcmp(argv[1], "day21") == 0) {
    read_file("input/day21", input);
    solveDay21(input);    
  } else if(strcmp(argv[1], "day22") == 0) {
    read_file("input/day22", input);
    solveDay22(input);    
  } else if(strcmp(argv[1], "day23") == 0) {
    read_file("input/day23", input);
    solveDay23(input);    
  } else if(strcmp(argv[1], "day24") == 0) {
    read_file("input/day24", input);
    solveDay24(input);
  } else {
    printf("Invalid input, please try again...\n");		    
  }
  
  return 0;
}
