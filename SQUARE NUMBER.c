#include <stdio.h>
#include <math.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int i;
    scanf("%d", &i);

    int square_root = (int)sqrt(i);
    if (square_root * square_root == i) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
