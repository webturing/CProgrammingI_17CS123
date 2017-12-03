#include <stdio.h>
/*操作递归，反序打印一个整数*/
void rprint(int n) {
  if (n < 10)
    printf("%d", n);
  else {
    printf("%d", n % 10);
    rprint(n / 10);
  }
}
int main() {
  rprint(123456789);
  return 0;
}