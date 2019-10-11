#include<stdio.h>
#include<stdlib.h>
int sod(int);
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
	static int r,s=0;
	if(n==0)
	{
		return s;
	}
	else
	{
		r=n%10;
		s+=r;
		return sod(n/10);
	}
}
