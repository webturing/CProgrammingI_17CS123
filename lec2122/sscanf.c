#include <stdio.h>

int main() {
  char s[100] = "12345";
  int m;
  // s[0]='0';
  sscanf(s, "%d", &m);
  printf("%d\n", m);
  return 0;
}
