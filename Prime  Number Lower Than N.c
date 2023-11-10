#include <stdio.h>
#include <math.h>

int prime(int n){
         if (n <= 1) {
            return 0;
        }
        for ( int i = 2; i <= sqrt(n); i++){
            if ( n % i == 0){
                return 0;
            }
        }
    return 1;
}

int main(){
    int N;
    scanf("%d", &N);
    for ( int i = 2; i < N; i++){
    if (prime(i)){
        printf("%d\n", i);
        }
    }
    return 0;
}