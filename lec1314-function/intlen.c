#include <stdio.h>
int len(int n) {
  if (n == 0) return 1;  // BUG fixed
  int ret = 0;
  while (n > 0) {
    n = n / 10;
    ret++;
  }
  return ret;
}
int main() {
  printf("%d\n", 4 == len(-1234));
  printf("%d\n", 4 == len(1234));
  printf("%d\n", 6 == len(123456));
  printf("%d\n", 1 == len(1));
  printf("%d\n", 1 == len(0));
  printf("%d\n", 9 == len(123456789));
  return 0;
}