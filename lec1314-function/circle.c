#include <stdio.h>
#include <math.h>
const double pi = atan(1.0) * 4;
double area(double r) { return pi * r * r; }
double perimeter(double r) { return pi * r * 2; }  // implemented
int main() {
  double r;
  while (1 == scanf("%lf", &r)) printf("%.3f %.3f\n", area(r), perimeter(r));
  return 0;
}
