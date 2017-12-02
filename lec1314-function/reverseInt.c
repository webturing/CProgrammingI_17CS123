#include <stdio.h>
int reverse(int n) {
  int ret = 0;
  while (n > 0) {
    ret = ret * 10 + (n % 10);
    n /= 10;
  }
  return ret;
}
int main() {
  printf("%d\n", 4321 == reverse(1234));
  printf("%d\n", 21 == reverse(120));
  printf("%d\n", 1 == reverse(1));
  printf("%d\n", 0 == reverse(0));
  printf("%d\n", 987654321 == reverse(123456789));
  return 0;
}