#include <stdio.h>

// Function to calculate the binomial coefficient (n choose k)
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n, i, j;
    
    // Input the number of rows
    scanf("%d", &n);
    
    // Generate and print Pascal's Triangle
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
    
    return 0;
}
