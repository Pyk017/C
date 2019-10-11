#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main()
{
	int n;
	printf("Enter Number :- \n");
	scanf("%d",&n);
	printf("Factorial of the Number :- %d",fact(n));
	return 0;
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
