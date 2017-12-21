#include <stdio.h>

int main() {
  char s[100] = "12345";
  int m;
  m = 0;
  int i, n = strlen(s);
  for (i = 0; i < n; i++) {
    m *= 10;
    m += s[i] - '0';
  }
  printf("%d\n", m);
  return 0;
}
