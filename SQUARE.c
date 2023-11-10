#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    long long N;
    scanf("%lld", &N);

    
    long long square = N * N;

    printf("%lld\n", square);
  }

  return 0;
}
