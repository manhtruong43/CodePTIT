#include <stdio.h>

int main(){
    int number_test, x, n, odd, even;
    scanf ("%d", &number_test);
    for (int i = 0; i < number_test; i++){
        scanf ("%d", &n);
        odd = 0;
        even = 0;
        while ( n > 0){
            x =n % 10;
            n /= 10;
            if ( x % 2 == 0){
                even = even + 1;
            }
            else {
                odd = odd + 1;
            }
            
        }
            printf ("%d %d\n", odd, even);
    } 
    return 0;
}