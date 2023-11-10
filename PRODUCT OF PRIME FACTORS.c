#include <stdio.h>
#include <math.h>

int checkPrime(int n){
    for (int i = 2; i <= sqrt(n);i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int main(){
    int number_test;
    scanf("%d", &number_test);
    for (int i = 0; i < number_test; i++){
        int n;
        int factor = 1;
        scanf("%d", &n);
        if (checkPrime(n)==0){
            int i = 2;
            while (n > 1){
                if (n % i == 0){
                    factor *= i;
                    while ( n % i == 0){
                        n /= i;
                    }
                }
                i++;
            }
        printf("%d\n", factor);

        }
        else{
            printf("%d\n", n);
        }
    }
    return 0;
}