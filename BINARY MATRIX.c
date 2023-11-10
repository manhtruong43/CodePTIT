#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n][3];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < 3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++){
        int c0 = 0;
        int c1 = 0;
        for (int j = 0; j < 3; j++){
            if (a[i][j] == 1)
                c1++;
            else if (a[i][j] == 0)
                c0++;
        }
        if (c1 > c0){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}