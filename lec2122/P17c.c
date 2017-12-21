#include <stdio.h>
#include <string.h>
int main() {
  char s[100] = "00";
  char m[100];
  int a, b, c;
  scanf("%s", m);
  strcat(s, m);
  int n = strlen(s), w = n / 3;
  sscanf(s + (n - w), "%d", &c);
  s[n - w] = 0;
  sscanf(s + (n - 2 * w), "%d", &b);
  s[n - 2 * w] = 0;
  sscanf(s, "%d", &a);
  printf("%d+%d-%d=%d\n", a, c, b, a + c - b);
  return 0;
}
