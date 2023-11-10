#include <stdio.h>

int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int is_strong_number(int n) {
  int sum = 0;
  while (n > 0) {
    int digit = n % 10;
    sum += factorial(digit);
    n /= 10;
  }
  return sum == n;
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (is_strong_number(n)) {
    printf("1\n");
  } else {
    printf("0\n");
  }

  return 0;
}
