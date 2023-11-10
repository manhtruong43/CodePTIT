#include <stdio.h>

int perfectNumber(int n){
    int s = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            s += i;
        }
    }
    if (s == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b){
        for (int i = a; i <= b; i++){
            if (perfectNumber(i)){
                printf("%d ", i);
            }
        }
    }
    else{
        for (int i = b; i <= a; i++){
            if (perfectNumber(i)){
                printf("%d ", i);
            }
        }
    }

    return 0;
}