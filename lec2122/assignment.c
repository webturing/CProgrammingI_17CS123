#include <stdio.h>
///左值表达式lvalue :可以放在赋值语句左端 x,arr[0]
///右值表达式rvalue :可以放在赋值语句右端
///一切左值表达式都是右值表达式
int main() {
  int x = 3, y = 4;

  x + y = 5;
  y = y + 3;  //
  x = x + y;
  y = x;
  y += 5;
  z *= 7;
  n /= 10;
  int c[100];
  c[x + y] = 7;
}
