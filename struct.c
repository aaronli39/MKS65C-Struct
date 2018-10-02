#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct majors {
  char *name;
  int count;
};

struct majors randomMajor() {
  char all[15][40] = {"Computer Science","Computer Enginnering","Electrical Engineering","Mathematics","Physics","Biology","Chemistry", "History", "Paleontology", "Astronomy", "Philosophy", "Oceanology", "Mechanical Engineering", "English Literature", "Acting"};

  int nums[] = {839, 1023, 439, 504, 209, 1123, 647, 154, 80, 50, 82, 25, 889, 432, 242};

  srand(time(NULL));
  int r = rand() % 15;

  struct majors m;
  m.name = all[r];
  m.count = nums[r];
  return m;
}

char * stringify(struct majors m) {
  char *s = m.name;
  char ret[100] = "Structure: Majors\nName: " + s + "\nCount: " + m.count + "\n";
  return ret;
}

int main() {
  printf("Test case: %s", stringify(randomMajor()));
  return 0;
}
