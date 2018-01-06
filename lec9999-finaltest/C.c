#include <stdio.h>

int main() {
  freopen("test.in", "r", stdin);
  int T, N;
  char type[100];
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &N);
    double max = 0;
    double area = 0;
    while (N--) {
      scanf("%s", type);
      if (type[0] == 'T') {  // Triangle
        double base, height;
        scanf("%lf%lf", &base, &height);
        area = base * height / 2;
      } else if (type[0] == 'R') {  // Rectangle
        double len, wid;
        scanf("%lf%lf", &len, &wid);
        area = len * wid;
      } else {  // Circle
        double radius;
        scanf("%lf", &radius);
        area = 3.14159 * radius * radius;
      }
      if (area > max) max = area;
    }
    printf("%.2f\n", area);
  }
  return 0;
}