#include <stdio.h>

void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

void interchangeSort(int a[], int n){
    for (int  i = 0; i < n-1; i++){
        int swapped = 0;
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j]= temp;
                swapped = 1;
            }
            if (!swapped){
                break;
            }
        printf("Step %d: ",i+1);
        printArray(a, n);
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    interchangeSort(a, n);
    return 0;
}