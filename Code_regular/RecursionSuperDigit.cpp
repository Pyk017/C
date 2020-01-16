#include<stdio.h>
int sum=0,r;
int superDigit(int n){
	sum = 0;
	if (n <= 9){
		return n;
	}
	while(n!=0)
	{
		r = n%10;
		sum += r;
		n /= 10;
	}
	return superDigit(sum);
}
int main(){
	int n;
	printf("Enter String :-- \n");
	scanf("%d",&n);
	int result = superDigit(n);
	printf("Sum = %d",result);
	return 0;
}

