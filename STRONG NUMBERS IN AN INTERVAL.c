#include <stdio.h>

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int isStrong(int num){
    int original = num;
    int sum = 0;
    while (num > 0){
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return (sum == original);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b){
        for (int i = a; i <= b; i++){
            if (isStrong(i)){
                printf("%d ", i);
            }
        }
    }
    else{
        for (int i = b; i <= a; i++){
            if (isStrong(i)){
                printf("%d ", i);
            }
        }
    }
    return 0;
}