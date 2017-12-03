#include <stdio.h>
/*计算整数长度的递归算法*/
int len(int n) { return n < 10 ? 1 : len(n / 10) + 1; }
int main() {
  printf("%d\n", 4 == len(-1234));
  printf("%d\n", 4 == len(1234));
  printf("%d\n", 6 == len(123456));
  printf("%d\n", 1 == len(1));
  printf("%d\n", 1 == len(0));
  printf("%d\n", 9 == len(123456789));
  return 0;
}