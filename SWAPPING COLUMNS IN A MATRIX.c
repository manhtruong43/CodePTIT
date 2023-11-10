#include <stdio.h>

int main() {
    int m, n, a, b;
    
    // Input dimensions of the matrix and columns to be swapped
    scanf("%d %d", &m, &n);
    
    int matrix[m][n];
    
    // Input the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    scanf("%d %d", &a, &b);
    
    // Swap the columns a and b
    a--;
    b--;
    if (a >= 0 && a < n && b >= 0 && b < n) {
        for (int i = 0; i < m; i++) {
            int temp = matrix[i][a];
            matrix[i][a] = matrix[i][b];
            matrix[i][b] = temp;
        }
    } else {
        printf("Invalid column indices for swapping.\n");
        return 1;
    }
    
    // Print the result matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
