#include <stdio.h>

int checkFibo(long long n){
    if (n == 0 || n == 1) return 1;
    long long fn1 = 1, fn2 = 0;
    for (int i = 2; i <= 92; i++){
        long long fn = fn1 + fn2;
        if ( fn == n){
            return 1;
        }
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

int main(){
    int number_test;
    scanf("%d", &number_test);
    for (int i = 0; i < number_test; i++){
        long long n;
        scanf("%lld", &n);
        if (checkFibo(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}