#include<stdio.h>
#include<stdlib.h>
int nod(int,int);
int main()
{
	int  n;int a=0;
	printf("Enter a number :- \n");
	scanf("%d",&n);
	printf("Number of Digits are :- %d\n",nod(n,a));
	return 0;
}
int nod(int n,int a)
{
	if(n==0)
	{
		return a;
	}
	else
	{
		return nod(n/10,a+1);
	}
}
