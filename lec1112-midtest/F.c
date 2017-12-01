#include <stdio.h>
int main() {
  int N;
  scanf("%d", &N);
  while (N--) {
    long long m;
    scanf("%lld", &m);
    while (m >= 10) m /= 10;
    printf("%lld\n", m);
  }
  return 0;
}