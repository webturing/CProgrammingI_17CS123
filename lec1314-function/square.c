#include <stdio.h>
/*判断一个数是否是平方数*/
int square(int n) {
  int sq = sqrt(n) + 0.5;
  if (sq * sq == n)
    return 1;
  else
    return 0;
}

int main() {
  int n;
  for (n = 100; n <= 999; n++)
    if (square(n)) printf("%d\n", n);
  return 0;
}
