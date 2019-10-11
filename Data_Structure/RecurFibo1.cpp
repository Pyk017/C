#include<stdio.h>
#include<stdlib.h>
int fibo(int);
int main()
{
	int n;
	printf("Enter a number to find the fibonacci series :- \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    printf(" %d",fibo(i));
    }
	return 0;
}
int fibo(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}
