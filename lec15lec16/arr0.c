int main() {
  int a[10];                  //未初始化
  printf("%d\n", sizeof(a));  // 40 byte
  a[0] = 1;

  int i;
  for (i = 0; i < 10; i++) printf("%d ", a[i]);
  printf("\n");

  int b[10] = {1, 2, 3};  //
  for (i = 0; i < 10; i++) printf("%d ", b[i]);
  printf("\n");

  int c[] = {3, 4, 5};
  int d[2] = {3, 4, 5};  // illegal
  int e[];               //
}
