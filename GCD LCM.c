#include <stdio.h>

long long int gcd(long long int a, long long int b){
	if(b == 0){
		return a;
	}else{
		return gcd(b, a % b);
	}
}

long long int lcm(long long int a, long long int b){
    return ((a*b)/ gcd(a, b));
}
int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	
	long long int gcd_r= gcd(a, b);
	
	long long int lcm_r = (a*b) / gcd_r;

    printf("%lld\n%lld\n", gcd_r, lcm_r);
    return 0;
}