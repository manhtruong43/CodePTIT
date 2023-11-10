#include<stdio.h>

void xuat(int a[], int n ) {
	int i;
 	for(i = 0; i < n; i++) {
 		printf("%d ", a[i]);
	 }
}
 
void swap(int *x, int *y ) {
	int tg = *x;
	*x = *y;
	*y = tg;
}

void selectionSort(int a[], int n) {
	int i;
	int j;
	for(i = 0; i < n - 1; i++) {
		int min = i;
		for(j = i + 1; j < n; j++) {
			if(a[j] < a[min]) {
				min = j;
			}
		}	
		swap(&a[min], &a[i]);
        printf("Step %d: ",i+1);
        xuat(a, n);
        printf("\n");
	}
}
 
 
int main() {
	int n;
    int a[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    selectionSort(a, n);
    return 0;
}