#include <stdio.h>

int checkDigits(long long n){
    int k = 1;
    while (n > 0){
        int digit = n % 10;
        if (digit % 2 != 0){
            k = 0;
            break;
        }
        else{
            n /= 10;
        }
    }
    return k;
}

int main(){
    int number_test;
    scanf("%d", &number_test);
    for (int i = 0; i< number_test;i ++){
        long long n;
        scanf("%lld", &n);
        if (n % 2==0 && checkDigits(n)==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}