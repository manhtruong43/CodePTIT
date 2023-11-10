#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if (n <= 1){
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int checkDigits(int n){
    int value = 1;
    while (n > 0){
        int k = n % 10;
        if (isPrime(k) == 0){
            value = 0;
            break;;
        }
        n /= 10;
    }
    return value;
}

int main(){
    int number_test;
    scanf("%d", &number_test);
    for (int i = 0; i < number_test; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        int count = 0;
        for (int j = a; j < b; j++){
            if (isPrime(j) && checkDigits(j)){
                count++;
            }
        }
        printf("%d", count);
        printf("\n");
    }
    return 0;
}