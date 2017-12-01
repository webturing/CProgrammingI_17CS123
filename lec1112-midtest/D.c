#include <stdio.h>
int main() {
  int n, m, chair = 30, cur;
  scanf("%d%d", &n, &m);
  int tot = 0;
  while (n--) {
    scanf("%d", &cur);
    if (cur <= m + chair) ++tot;
  }
  printf("%d\n", tot);

  return 0;
}