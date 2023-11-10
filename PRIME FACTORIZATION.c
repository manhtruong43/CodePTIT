#include <stdio.h>

void prime(int n){
  for (int i = 2; i <= n; i++){
    while ( n % i == 0){
      printf("%d ", i);
      n /= i;
    }
  }
  printf("\n");
}

int main(){
  int n;
    scanf ("%d", &n);
      prime(n);
  return 0;
} 