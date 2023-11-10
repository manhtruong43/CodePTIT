#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    scanf ("%f %f %f", &a, &b, &c);
    float delta = b*b - 4*a*c;
    if ( delta < 0){
        printf ("NO");
    }
    else if ( delta > 0){
        printf ("%.2f %.2f", (-b+ sqrt(delta))/(2*a), (-b- sqrt(delta))/(2*a));
       
    }
    else {
         printf ("%.2f", 1.0 * (-b/2*a));
    }
    return 0;
}