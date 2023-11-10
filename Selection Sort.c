#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
void selectionSort(int a[], int n){
    for (int i = 0; i < n; i++){
        int min_index = i;
        int swapped = 0;
        for (int j = i+1; j < n; j++){
            if (a[j] < a[min_index])
            min_index = j; 
        }
            if ( min_index != i){
                int temp = a[i];
                a[i] = a[min_index];
                a[min_index] = temp;
                swapped = 1;
            }
            if (!swapped){
                break;
            }
            printf("Step %d: ", i+1);
            printArray(a, n);
            printf("\n");
    }
}

int main(){
    int n;
    int a[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    selectionSort(a, n);
    return 0;
}