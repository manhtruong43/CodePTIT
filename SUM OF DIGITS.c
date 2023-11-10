#include <stdio.h>

int main() {
  int num, n, sum;

  scanf("%d", &num);
  for (int i = 0; i < num; i++) {
    scanf("%d", &n);
    sum = 0;

    while (n > 0) {
      sum += n % 10;
      n /= 10;
    }
    printf("%d\n", sum);
  }

  return 0;
}
