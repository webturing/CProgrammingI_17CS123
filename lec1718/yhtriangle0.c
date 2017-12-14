
#include <stdio.h>

int fact(int n) {
  int ans = 1;
  int i;
  for (i = 2; i <= n; i++) ans *= i;
  return ans;
}

int cnr(int n, int r) { return fact(n) / fact(n - r) / fact(r); }

int main() {
  int n = 20, i, j;
  for (i = 0; i <= n; i++) {
    for (j = 0; j <= i; j++) printf("%5d ", cnr(i, j));
    printf("\n");
  }
  return 0;
}
