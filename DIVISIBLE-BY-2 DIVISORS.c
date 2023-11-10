#include <stdio.h>

int main() {
    int number_test;
    scanf("%d", &number_test);
    for (int i = 0; i < number_test; i++) {
        unsigned int n;
        scanf("%d", &n);
        int c = 0;
        for (int j = 1; j * j <= n; j++) {
            if (n % j == 0) {
                if (j % 2 == 0) {
                    c++;
                }
                if (j != n / j && (n / j) % 2 == 0) {
                    c++;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
