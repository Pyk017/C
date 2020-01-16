#include<stdio.h>
int gcd(int , int);
int main()
{
	int a,b;
	printf("Enter a Number\n");
	scanf("%d",&a);
	printf("Enter another Number\n");
	scanf("%d",&b);
	printf("GCD of a Number is :- %d",gcd(a,b));
	return 0;
}
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%2);
	}
}
