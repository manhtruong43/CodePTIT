#include <stdio.h>

void reverse(int a[], int n){
    for ( int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

int main(){
    int n, a[100];
    scanf("%d",&n);
    reverse(a, n);
    for (int i =n-1; i >=0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}