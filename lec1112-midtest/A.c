#include <stdio.h>
int main() {
  double a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);
  printf("%.3f\n", (a + b + c) / 3.0);

  return 0;
}