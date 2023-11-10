#include <stdio.h>

void splitting(int a[],int n ){
    for (int i = 0; i<n; i++){
        if (a[i] % 2==0){
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    for ( int j = 0; j < n; j++){
        if (a[j] % 2 != 0){
            printf("%d ", a[j]);
        }
    }
}

int main(){
    int n;
    int a[100];
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    splitting(a, n);
    return 0;
}