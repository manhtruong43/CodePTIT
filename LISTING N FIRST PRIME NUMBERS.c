#include <stdio.h>
#include <stdbool.h>

bool okprime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (okprime(i) && sum(i) % 5 == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n%d\n", count);

    return 0;
}
