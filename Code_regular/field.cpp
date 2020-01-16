#include<stdio.h>
int prime(int);
int main()
{
	int x,y;
	printf("Enter Number 1 :- \n");
	scanf("%d",&x);
	printf("Enter Number 2 :- \n");
	scanf("%d",&y);
	for(int i=0;i<=10000;i++)
	{
		if(prime(x+y+i))
		{
			printf(" %d",i);
			break;
		}
	}
	return 0;
}
int prime(int n)
{
	int i;
	for( i=2;i<n;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(n==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
