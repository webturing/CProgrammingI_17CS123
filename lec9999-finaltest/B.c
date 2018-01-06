#include <stdio.h>
// 最大公约数
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int main() {
  freopen("test.in", "r", stdin);
  int T, a, b, c, d, e, f, g;
  scanf("%d", &T);
  while (T--) {
    scanf("%d%d%d%d", &a, &b, &c, &d);
    e = a * d + b * c;
    f = b * d;
    g = gcd(e, f);
    e /= g;
    f /= g;
    printf("%d %d\n", e, f);
  }
  return 0;
}