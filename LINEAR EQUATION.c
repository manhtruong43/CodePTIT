#include <stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    if ( a == 0){
        if ( b == 0 ){
            printf("Infinite solutions");
        }
        else{
            printf("No solution");
        }
    }    
    else {
        float x = 1.0 * (-b / a);
        printf("%.2f", x);
    }
    return 0;
}