#include <stdio.h>


int main(){
    int n;
    int number_test;
    scanf("%d",&number_test);
    int count[100] = {0};
    int a[100];
    for (int j = 0; j < number_test; j++){
        scanf("%d", &n);
        for ( int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++){
            int element = a[i];
            count[element]++;
        }
        printf("Test %d:\n",j+1);
       for (int i = 0; i < n; i++){
        int element = a[i];
        if (count[element] != 0){
            printf("%d appears ", element);
            if (count[element]>1){
                printf("%d times\n", count[element]);
            }
            else{
                printf("%d time\n", count[element]);
            }
            count[element] = 0; 
        }
       }
    }
    return 0;
}