#include <stdio.h>
int sumdigits(int n) {
  int ret = 0;
  while (n > 0) {
    ret += n % 10;
    n /= 10;
  }
  return ret;
}
int main() {
  printf("%d\n", 10 == sumdigits(1234));
  printf("%d\n", 21 == sumdigits(123456));
  printf("%d\n", 1 == sumdigits(1));
  printf("%d\n", 0 == sumdigits(0));
  printf("%d\n", 45 == sumdigits(123456789));
  return 0;
}