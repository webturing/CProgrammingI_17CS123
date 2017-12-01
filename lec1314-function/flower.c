#include <stdio.h>
int ok(int n) {  // implemented
  int a = n / 100, b = n / 10 % 10, c = n % 10;
  return a * a * a + b * b * b + c * c * c == n;
}

int main() {
  int n;
  for (n = 100; n <= 999; n++)
    if (ok(n)) printf("%d\n", n);
  return 0;
}
