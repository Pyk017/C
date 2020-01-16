#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("Your Number is a Perfect Number");
	}
	else
	{
		printf("Your number is not a Perfect Number");
	}
	return 0;
}
