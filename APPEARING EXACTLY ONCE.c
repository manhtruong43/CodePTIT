#include <stdio.h>

int main(void) {
  int n;
  int a[100];
  int non_repeating_elements[100];
  int count = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++) {
    int is_unique = 1;
    for (int j = 0; j < n; j++) {
      if (a[i] == a[j] && i != j) {
        is_unique = 0;
        break;
      }
    }

    if (is_unique) {
      non_repeating_elements[count++] = a[i];
    }
  }
  
  printf("%d\n", count);
  for (int i = 0; i < count; i++) {
    printf("%d ", non_repeating_elements[i]);
  }
  printf("\n");

  return 0;
}
