#include <stdio.h>
#include <math.h>

int main() {
    long long m, n;
    int count = 0;

    scanf("%lld %lld", &m, &n);

    long long start = (long long) sqrt(m);
    long long end = (long long) sqrt(n);

    for (long long i = start; i * i <= n; i++) {
        if (i >= start) {
            count++;
        }
    }
    printf("%d\n", count);

    for (long long i = start; i * i <= n; i++) {
        if (i >= start) {
            printf("%lld\n", i * i);
        }
    }
    return 0;
}
