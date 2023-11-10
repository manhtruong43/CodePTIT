#include <stdio.h>
#include <math.h>

int prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
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
         scanf("%d", &n);
         int a[100];
         for (int j = 0; j < n; j++){
             scanf("%d", &a[j]);
         }
         for (int j = 0; j < n; j++){
           if (prime(a[j]) == 1)
                printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}