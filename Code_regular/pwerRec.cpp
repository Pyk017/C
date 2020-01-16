#include<stdio.h>
int power (int,int);
int main()
{
	int n,p;
	printf("Enter a Number \n");
	scanf("%d",&n);
	printf("Power is :- \n");
	scanf("%d",&p);
	printf(" %d",power(n,p));
	return 0;
}
int power(int n,int p)
{ static int z=n;
	if(p==1)
	{
		return n; 
	}
	else
	{
		return power(n*z,p-1);
	}
}
