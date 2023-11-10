#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];

    // Input the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the transpose
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            printf("%d ", matrix[i][j]);
            //if (i < N - 1) {
            //    printf(" ");
            //}
        }
        printf("\n");
    }

    return 0;
}
