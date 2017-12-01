#include <stdio.h>
int main() {
  int N;
  scanf("%d", &N);
  if (N == 1)
    puts("1 ");
  else if (N == 2)
    puts("1 1 ");
  else {
    printf("1 1 ");
    int a = 1, b = 1;
    while (N-- > 2) {
      int c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
    }
    printf("\n");
  }
  return 0;
}