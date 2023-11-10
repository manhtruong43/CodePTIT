#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int N;
    scanf("%d", &N);

    double value = 1.0 / N;
    printf("%.15f\n", value);
  }

  return 0;
}
