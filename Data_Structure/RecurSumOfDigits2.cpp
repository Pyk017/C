#include<stdio.h>
#include<stdlib.h>
int sod(int);
int aux(int,int);
int main()
{
	int n;
	printf("Enter Number :- \n");
	scanf("%d",&n);
	printf("Sum of Digits of Your Number is :- %d",sod(n));
	return 0;
}
int sod(int n)
{
	return aux(n,1);
}
int aux(int n,int a)
{
	static int r,s=0;
	if(n==0)
	{
		return a;
	}
	else
	{
		r=n%10;
		s+=r;
		return aux(n/10,s);
	}
}
