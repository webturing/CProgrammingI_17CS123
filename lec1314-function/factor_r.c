#include <stdio.h>
/*计算n的阶乘的递归算法*/
long long factorial(int n) { return n <= 1 ? 1LL : factorial(n - 1) * n; }
int main() {
  long long sum = 0;
  int n;
  for (n = 1; n <= 20; n++) sum += factorial(n);
  printf("%lld\n", sum);
  return 0;
}