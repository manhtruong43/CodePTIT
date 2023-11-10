#include <stdio.h>

int main(){
    int n;
    int a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("\n");
    int k;
    scanf("%d",&k);
    for (int j = n-k; j < n; j++){
        printf("%d ",a[j]);
    }
    for (int i = 0; i < n-k; i++){
        printf("%d ", a[i]);
    }
    return 0;
}