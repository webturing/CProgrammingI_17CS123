#include <stdio.h>
void f(int x) {  // pass by value

  x++;
}
void g(int a[]) {  // pass by address/pointer
  a[0] = 3;
}

int main() {
  int x = 3;
  f(x);
  printf("%d\n", x);
  int a[10] = {1};
  g(a);
  printf("%d\n", a[0]);
  return 0;
}
