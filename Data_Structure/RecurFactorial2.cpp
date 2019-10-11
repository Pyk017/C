#include<stdio.h>
#include<stdlib.h>
int fact(int);
int aux(int,int);
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
	return aux(n,1);
}
int aux(int n,int a)
{
	if(n==0)
	{
		return a;
	}
	else
	{
		return aux(n-1,a*n);
	}
}
