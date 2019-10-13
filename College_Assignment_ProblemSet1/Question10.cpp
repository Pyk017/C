#include<stdlib.h>
#include<stdio.h>
float inverse_divisor(int n){
	float sum = 0;
	for (int i=1; i<=n; i++){
		if (n % i == 0){
			sum += (1 / (float)i);
		}
	}
	return sum;
}
int main(){
	int n;
	printf("Enter Number :- ");
	scanf("%d",&n);
	printf("Sum of inverse of divisor is equals to :- %.2f",inverse_divisor(n));
	return 0;
}
