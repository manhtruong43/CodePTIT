#include <stdio.h>

int main() {
  int rows, cols;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &rows, &cols);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d", (j + 1 + i) % cols + 1);
    }
    printf("\n");
  }

  return 0;
}
