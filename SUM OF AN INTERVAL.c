#include <stdio.h>

int main(){
    unsigned int a, b, s;
    s = 0;
    scanf ("%d %d", &a, &b);
    if ( a > b){
        for ( int i = b; i <= a; i++){
            s += i;
        }
    }
    else if ( a < b) {
        for (int i = a; i <= b; i++){
            s += i;
        }
    }
    printf("%d\n", s);
    return 0;
}