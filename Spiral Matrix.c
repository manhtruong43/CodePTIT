#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n-1;
    int dem = 1;
    while (dem <= n*n){
        // xay dung canh tren cung : co hang la h1, cot tu c1 toi c2
        for (int i = c1; i <= c2; i++){
            a[h1][i]= dem++;
        }
        ++h1;
        // xay dung canh ben phai : co cot la c2, hang chay tu h1 den h2
        for (int i = h1; i <= h2;i++ ){
            a[i][c2]= dem++;
        }
        --c2;
        // xay dung canh duoi : co hang la h2: cot tu c2 den c1
        for (int i = c2; i >= c1; i--){
            a[h2][i]= dem++;
        } 
        --h2;
        // xay dung canh ben trai : co cot la c1 : hang tu h2 den h1
        for (int i = h2; i >= h1; i--){
            a[i][c1]= dem++;
        }
        ++c1; 
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}