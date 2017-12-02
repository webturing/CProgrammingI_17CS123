#include <stdio.h>
int prime(int n) {
  if (n == 2) return 1;
  if (n % 2 == 0 || n <= 1) return 0;
  int c;
  for (c = 3; c * c <= n; c += 2) {
    if (n % c == 0) return 0;
  }
  return 1;
}
int main() {
  printf("%d\n", 1 == prime(2));  // expectedValue==actualValue
  printf("%d\n", 0 == prime(9));
  printf("%d\n", 0 == prime(1));
  printf("%d\n", 1 == prime(17));
  printf("%d\n", 1 == prime(1000000007));
  return 0;
}