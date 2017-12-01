int ok(int n) {
  int sq = sqrt(n) + 0.5;
  if (sq * sq == n)
    return 1;
  else
    return 0;
}

int main() {
  int n;
  for (n = 100; n <= 999; n++)
    if (ok(n)) printf("%d\n", n);
  return 0;
}
