#include <stdio.h>
///��ֵ���ʽlvalue :���Է��ڸ�ֵ������ x,arr[0]
///��ֵ���ʽrvalue :���Է��ڸ�ֵ����Ҷ�
///һ����ֵ���ʽ������ֵ���ʽ
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
