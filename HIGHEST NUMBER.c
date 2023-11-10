#include <stdio.h>

int main(){
    int number_test;
    int n;
    scanf("%d", &number_test);
    int a[100];
    for (int i = 0;i < number_test; i++){
        scanf("%d", &n);
        for (int j = 0; j < n;j++){
            scanf("%d", &a[j]);
        }
        int max = a[0];
        for (int j = 0; j < n;j++){
            if(a[j]>=max){
                max=a[j];
            }
        }
        printf("%d\n", max);
        for (int j = 0; j < n; j++){
            if (a[j]==max){
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}