#include <stdio.h>
int main() {
  int n;
  while (1 == scanf("%d", &n)) {
    int fact = 1, i;
    for (i = n; i >= 2; i -= 2) fact *= i;
    printf("%d\n", fact);
  }
  return 0;
}