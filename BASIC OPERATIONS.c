#include <stdio.h>

int main(){
    unsigned int a, b;
    scanf ("%d %d", &a, &b);
    if ( b == 0 ){
        printf ("0");
    }
    else {
    printf ("%d %d %d %.2f %d", a+b, a-b, a*b, 1.0 *a/b, a%b);
    }
    return 0;
}