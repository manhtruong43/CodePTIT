#include <stdio.h>
#include <math.h>
int main(){
    int number_test, n, snt;
    scanf ("%d", &number_test);
    for (int i = 0; i < number_test; i++){
        scanf("%d", &n);
        snt = 2;
        for ( int j = 2; j <= sqrt(n); j++){
            if ( n % j == 0){
                snt = 0;
                break;         
            }           
        }
        if (snt){
            printf ("YES\n");
        }
        else {
            printf ("NO\n");
        }
    }
    return 0;
}