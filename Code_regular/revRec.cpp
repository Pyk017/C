#include<stdio.h>
int rev(int);
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Reverse of a Number is :- %d",rev(n));
	return 0;
}
int rev(int n)
{
	static int r,re=0;
	if(n==0)
	{
		return re;
	}
	else
	{
		r=n%10;
		re=re*10+r;
		return rev(n/10);
	}
}
