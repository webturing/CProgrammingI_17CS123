
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  char line[10000];

  int upper, lower, digit, space, other;
  upper = lower = digit = space = other = 0;
  gets(line);
  int len = strlen(line);
  int i;
  for (i = 0; i < len; i++) {
    if (islower(line[i]))
      ++lower;
    else if (isupper(line[i]))
      ++upper;
    else if (isspace(line[i]))
      ++space;
    else if (isdigit(line[i]))
      ++digit;
    else
      ++other;
  }
  printf("%d %d %d %d %d\n", upper, lower, digit, space, other);
  return 0;
}
