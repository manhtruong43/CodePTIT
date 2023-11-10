#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void bubbleSort(int a[], int n) {
    for (int r = 0; r < n - 1; r++) {
        int swapped = 0; // Variable to track if any swaps were made in this pass
        for (int i = 0; i < n - r - 1; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = 1; // Set swapped to 1 to indicate a swap was made
            }
        }
        if (!swapped) {
            // If no swaps were made in this pass, the array is already sorted
            break;
        }
        printf("Step %d: ", r + 1);
        printArray(a, n);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);
    return 0;
}
