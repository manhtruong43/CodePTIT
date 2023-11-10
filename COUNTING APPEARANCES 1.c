#include <stdio.h>


int main(){
    int n;
    int count[100] = {0};
    int a[100];
    scanf("%d", &n);
    for ( int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        int element = a[i];
        count[element]++;
    }
   for (int i = 0; i < n; i++){
    int element = a[i];
    if (count[element] != 0){
        printf("%d %d\n", element, count[element]);
        count[element] = 0; 
    }
   }
    return 0;
}