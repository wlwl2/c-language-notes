#include <stdio.h>

int main(void) {
  char testString[] = "test";
  testString[0] = 'r';
  printf("%s\n", testString);
  return 0;
}
