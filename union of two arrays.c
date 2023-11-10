#include <stdio.h>

void printUnion(int a[], int b[], int m, int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            printf("%d ", a[i]);
            i++;
        } else if (a[i] > b[j]) {
            printf("%d ", b[j]);
            j++;
        } else {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
    while (i < m) {
        printf("%d ", a[i]);
        i++;
    }
    while (j < n) {
        printf("%d ", b[j]);
        j++;
    }
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    unsigned int a[100];
    unsigned int b[100];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }
    printUnion(a, b, m, n);
    return 0;
}
