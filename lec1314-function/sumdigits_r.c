#include <stdio.h>
/*计算整数个位数之和的递归算法*/
int sumdigits(int n) { return n < 10 ? n : sumdigits(n / 10) + (n % 10); }
int main() {
  printf("%d\n", 10 == sumdigits(1234));
  printf("%d\n", 21 == sumdigits(123456));
  printf("%d\n", 1 == sumdigits(1));
  printf("%d\n", 0 == sumdigits(0));
  printf("%d\n", 45 == sumdigits(123456789));
  return 0;
}