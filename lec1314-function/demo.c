int ok(int n) {
  if (n % 2 == 0)
    return 1;
  else
    return 0;
}

int main() {
  int n;
  for (n = 1; n <= 100; n++)
    if (ok(n)) printf("%d\n", n);
}
