#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    int a[m]; // Define the array 'a' after reading 'm'
    int b[n]; // Define the array 'b' after reading 'n'

    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]); // Remove the newline character from this line
    }

    for (int j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}
-------------------------------------------------------
#include <stdio.h>

// Function to check if an element is in the intersection
int isInIntersection(int x, int intersection[], int intersectionSize) {
    for (int i = 0; i < intersectionSize; i++) {
        if (intersection[i] == x) {
            return 1; // Element is in the intersection
        }
    }
    return 0; // Element is not in the intersection
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    int b[m];

    // Read the elements of array a
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Read the elements of array b
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Initialize an array to store the intersection
    int intersection[n < m ? n : m]; // The intersection size can't be larger than the smaller array

    int intersectionSize = 0; // Size of the intersection

    // Find the intersection of A and B
    for (int i = 0; i < n; i++) {
        if (isInIntersection(a[i], intersection, intersectionSize)) {
            continue; // Skip duplicate elements
        }
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                intersection[intersectionSize] = a[i];
                intersectionSize++;
                break; // Move to the next element in A
            }
        }
    }

    // Sort the intersection in ascending order
    for (int i = 0; i < intersectionSize - 1; i++) {
        for (int j = i + 1; j < intersectionSize; j++) {
            if (intersection[i] > intersection[j]) {
                int temp = intersection[i];
                intersection[i] = intersection[j];
                intersection[j] = temp;
            }
        }
    }

    // Print the intersection elements in ascending order
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersection[i]);
    }

    return 0;
}

