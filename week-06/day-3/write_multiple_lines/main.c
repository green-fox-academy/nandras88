#include "write_multiple_lines.h"

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

int main()
{
  char pathOfFile[] = "test.txt";
  char inputWord[] = "Andrew";
  int lineCount = 5;

  writeMultipleLines(pathOfFile, inputWord, lineCount);

  return 0;
}