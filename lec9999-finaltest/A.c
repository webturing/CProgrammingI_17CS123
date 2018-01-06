#include <stdio.h>
// 16进制A+B
// hexadecimal 16进制
// decimal 10进制
int main() {
  int a, b;
  while (~scanf("%x%x", &a, &b)) printf("%d\n", a + b);
  return 0;
}