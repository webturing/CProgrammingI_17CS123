#include <stdio.h>
void f(int x) {
  printf("In func f: &x=%p\n", &x);
  x++;
}

int main() {
  int x = 3;
  printf("In main :&x=%p\n", &x);
  f(x);  // pass by value
  printf("%d\n", x);

  return 0;
}
