#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum_a = 0;
    int sum_b = 0;
    int temp_a=a;
    int temp_b=b;
    while (a > 0 && b >0){
        sum_a += a % 10;
        a /= 10;
        sum_b += b % 10;
        b /= 10;
    }
    if (sum_a > sum_b){
        printf("%d %d", temp_b, temp_a);
    }
    else if (sum_a < sum_b){
        printf("%d %d", temp_a, temp_b);
    }
    else{
        printf("%d %d", temp_a, temp_b);
    }
    return 0;
}