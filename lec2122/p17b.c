#include <stdio.h>
int main() {
  int a = 123, b = 4567;
  // int c=123*10000+b;
  char s[1000];
  sprintf(s, "%d%d", a, b);
  int c;
  sscanf(s, "%d", &c);
  printf("%d\n", c);
  return 0;
}
