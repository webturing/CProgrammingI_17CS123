#include <stdio.h>
/*计算n的阶乘(n<=20)*/
long long factorial(int n) {
  long long prd = 1;
  int i;
  for (i = 2; i <= n; i++) prd *= i;
  return prd;
}
int main() {
  long long sum = 0;
  int n;
  for (n = 1; n <= 20; n++) sum += factorial(n);
  printf("%lld\n", sum);
  return 0;
}