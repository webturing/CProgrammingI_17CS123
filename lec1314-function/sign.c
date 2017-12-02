#include <stdio.h>
int sign(int n) {
  int ret;
  if (n > 0)
    ret = 1;
  else if (n < 0)
    ret = -1;
  else
    ret = 0;
  return ret;
}

int main() {
  printf("%d\n", 1 == sign(123));
  printf("%d\n", 0 == sign(0));
  printf("%d\n", -1 == sign(-123));
  return 0;
}