#include <stdio.h>

// Function to calculate the nth Fibonacci number using dynamic programming
unsigned long long fibonacci(int n) {
    unsigned long long fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int n; // Value of n for the current test case
        scanf("%d", &n);

        unsigned long long result = fibonacci(n);
        printf("%llu\n", result);
    }

    return 0;
}
