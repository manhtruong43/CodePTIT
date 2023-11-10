#include <stdio.h>

void printUnion(int a[], int b[], int m, int n) {
    int i = 0, j = 0;
    int unionArray[2001]; // Since elements are up to 1000, we need an array of size 2001 to accommodate all possible values from 1 to 1000.
    int unionSize = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            if (unionSize == 0 || a[i] != unionArray[unionSize - 1]) {
                unionArray[unionSize++] = a[i];
            }
            i++;
        } else if (a[i] > b[j]) {
            if (unionSize == 0 || b[j] != unionArray[unionSize - 1]) {
                unionArray[unionSize++] = b[j];
            }
            j++;
        } else {
            if (unionSize == 0 || a[i] != unionArray[unionSize - 1]) {
                unionArray[unionSize++] = a[i];
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from both arrays
    while (i < m) {
        if (unionSize == 0 || a[i] != unionArray[unionSize - 1]) {
            unionArray[unionSize++] = a[i];
        }
        i++;
    }
    while (j < n) {
        if (unionSize == 0 || b[j] != unionArray[unionSize - 1]) {
            unionArray[unionSize++] = b[j];
        }
        j++;
    }

    // Sort the union array in ascending order
    for (i = 0; i < unionSize; i++) {
        for (j = i + 1; j < unionSize; j++) {
            if (unionArray[i] > unionArray[j]) {
                int temp = unionArray[i];
                unionArray[i] = unionArray[j];
                unionArray[j] = temp;
            }
        }
    }

    // Print the union in ascending order
    for (i = 0; i < unionSize; i++) {
        printf("%d ", unionArray[i]);
    }
}

int main() {
    int n, m;
    int a[100], b[100];

    // Input the sizes and elements of arrays a and b
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < m; j++) {
        scanf("%d", &b[j]);
    }

    // Call the printUnion function to find and print the union of the arrays
    printUnion(a, b, n, m);

    return 0;
}
