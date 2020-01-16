#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Entere a Number\n");
	scanf("%d",&n);
	printf("Sum of the Natural Numbers are :- %d",sum(n));
	return 0;
}
int sum(int m)
{
	if(m==0)
	{
		return m;
	}
	else
	{
		return m+sum(m-1);
	}
}
