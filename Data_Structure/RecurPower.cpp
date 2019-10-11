#include<stdio.h>
#include<stdlib.h>
int pow(int,int);
int b,p;
int main()
{
	printf("Enter Base Number :- \n");
	scanf("%d",&b);
	printf("Enter Power Number :- \n");
	scanf("%d",&p);
	printf("The Resultant is  :- %d",pow(b,p));
	return 0;
}
int pow(int n,int a)
{
	static int k=n ;
	if(a==1)
	{
		return n;
	}
	else
	{
		return pow(k*n,a-1);
	}
}
