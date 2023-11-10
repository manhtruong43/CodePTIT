#include <stdio.h>

// Function to check if the given array is palindromic
int Palindromic(int a[], int n) {
    int i, j;

    // Traverse the array from both ends and compare the elements
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (a[i] != a[j]) {
            return 0; // Not a palindrome
        }
    }
    
    return 1; // Palindrome
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int n; // Number of elements in the array
        scanf("%d", &n);

        int a[n]; // Array to store the elements

        // Input array elements
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        // Check if the array is palindromic and print the result
        if (Palindromic(a, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
