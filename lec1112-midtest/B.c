#include <stdio.h>
int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  int tot = 0;
  int n;
  for (n = a; n <= b; n++) {
    int find = 0;
    int c;
    for (c = 2; c * c <= n; c++) {
      if (n % c == 0) {
        find = 1;
        break;
      }
    }
    if (n > 1 && find == 0) ++tot;
  }
  printf("%d\n", tot);

  return 0;
}