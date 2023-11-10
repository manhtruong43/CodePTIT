#include <stdio.h>

int main(){
    int number_test, n1, n2, gcd;
    scanf ("%d", &number_test);
    for (int i = 0; i < number_test; i++){
        scanf("%d %d", &n1, &n2);
        for (int j = 1; j <= n1 && j <= n2; j++){
            if ( n1 % j == 0 && n2 % j ==0)
            gcd = j;
        }
        printf ("%d\n", gcd);
    }
    return 0;
}