#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct majors {
  char name[40];
  int count;
};

struct majors randomMajor() {
  char all[15][40] = {"Computer Science","Computer Enginnering","Electrical Engineering","Mathematics","Physics",
                      "Biology","Chemistry","History", "Paleontology", "Astronomy",
                      "Philosophy", "Oceanology", "Mechanical Engineering", "English Literature", "Acting"};

  int nums[] = {839, 1023, 439, 504, 209,
                1123, 647, 154, 80, 50,
                82, 25, 889, 432, 242};

  srand(time(NULL));
  int r = rand() % 15;

  struct majors m;
  strcpy(m.name, all[r]);
  m.count = nums[r];
  return m;
}

void printStruct(struct majors m) {
  printf("Structure: Majors\nName: %s\nCount: %d\n----------\n", m.name, m.count);
}

void modifyCount(struct majors *m, int a) {
  m -> count += a;
}

void appendStr(struct majors *m, char *s) {
  strcat(m -> name, s);
}

int main() {
  struct majors temp = randomMajor();
  printf("\n\nOur struct looks like this in the beginning:\n");
  printStruct(temp);
  printf("\nAdding 1234 to the count:\n");
  modifyCount(&temp, 1234);
  printStruct(temp);
  printf("\nAppending ' & More' to the name:\n");
  appendStr(&temp," & More");
  printStruct(temp);
  return 0;
}
