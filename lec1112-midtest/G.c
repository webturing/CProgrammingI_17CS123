#include <stdio.h>
int main() {
  int T, n, p, q;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    int find = 0;
    for (p = 2; p * p <= n; p++) {
      if (n % p == 0) {
        find = 1;
        break;
      }
    }
    if (find == 0) {
      puts("No");
      continue;
    }
    q = n / p;
    find = 0;
    for (p = 2; p * p <= q; p++) {
      if (q % p == 0) {
        find = 1;
        break;
      }
    }
    if (find == 0)
      puts("Yes");
    else
      puts("No");
  }

  return 0;
}