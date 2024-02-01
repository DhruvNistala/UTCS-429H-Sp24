#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sample.txt:
 *
 * hello world
 * 9876
 * abcd:1234=17.485
 *
 */

int part1(FILE* f);
int part2(FILE* f);
int part3(FILE* f);
int part4(FILE* f);

int main(int argc, char const* argv[]) {
  // open the file in read mode
  FILE* f = fopen(
      "/u/ojasp/work/ta-cs429h-s24/UTCS-429H-Sp24/c-snippets/sample.txt", "r");

  // we need to check if the file opened
  // otherwise we will get seg faults
  if (f == NULL) {
    perror("Could not open file \"sample.txt\"");
    return -1;
  }

  fseek(f, 0, SEEK_SET);  // goes to beginning of file
  part1(f);

  fseek(f, 0, SEEK_SET);  // goes to beginning of file
  part2(f);

  fseek(f, 0, SEEK_SET);  // goes to beginning of file
  part3(f);

  fseek(f, 0, SEEK_SET);  // goes to beginning of file
  part4(f);

  fclose(f);

  return 0;
}

int part1(FILE* f) {
  // Create a temporary stack buffer of size 128 to read in data
  char buf[128];

  // read up to 127 characters (as a string) of the file f into the buf
  // putting the number is good to prevent buffer overflows
  // where you may crash the program
  fscanf(f, "%127s", buf);

  // prints "hello"
  printf("%s\n", buf);

  // use fseek to move in the file
  // here we are moving backward the same number of bytes we moved forward
  int len = strlen(buf);
  fseek(f, -len, SEEK_CUR);

  // lets clear the buffer.
  // at pointer buf, we set the next 128 bytes to 0
  memset(buf, 0, 128);

  // we can now read the same thing again
  fscanf(f, "%127s", buf);

  // we can print it again
  printf("%s\n", buf);
}

int part2(FILE* f) {
  // Create a temporary stack buffer of size 128 to read in data
  char buf1[128];
  char buf2[128];

  // read 2 tokens
  fscanf(f, "%127s %127s", buf1, buf2);

  // prints "hello world"
  printf("%s %s\n", buf1, buf2);

  // read 2
  fscanf(f, "%127s %127s", buf1, buf2);
}

int part3(FILE* f) {
  // skip first 2 tokens
  for (int i = 0; i < 2; i++) {
    fscanf(f, "%*s");
  }

  // we can read numbers too!
  int num;
  fscanf(f, "%127d", &num);

  // prints "9876"
  printf("%d\n", num);
}

int part4(FILE* f) {
  // skip first 3 tokens
  for (int i = 0; i < 3; i++) {
    fscanf(f, "%*s");
  }

  char file_string[128];

  // read in the string
  fgets(file_string, 128, f);
  fgets(file_string, 128, f);
  
  // parse in the string
  char name[16];
  char inumstr[16];
  char fnumstr[16];

  sscanf(file_string, "%15[^:]:%15[^=]=%15s", name, inumstr, fnumstr);

  int inum = atoi(inumstr);
  float fnum = atof(fnumstr);

  // prints
  printf("%s %d %f\n", name, inum, fnum);
}