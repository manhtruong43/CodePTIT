#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a Strong number
int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int N;
    scanf("%d", &N);

    if (isStrongNumber(N)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
