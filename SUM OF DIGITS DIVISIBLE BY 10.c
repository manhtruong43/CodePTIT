#include <stdio.h>

int tong(int n){
    int sum = 0;
        while (n > 0){
            sum += n % 10;
            n /= 10; 
       }
       if ( sum % 10 == 0){
       return 1;
    }
     else{
       return 0;
    }
}

int main(){
    int number_test, n, sum;
    scanf("%d", &number_test);
    for (int i = 0; i < number_test; i++){
        scanf("%d", &n);
        tong(n);
        if (tong(n) == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}