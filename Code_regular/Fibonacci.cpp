#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("Enter a Number\n");
	scanf("%d",&n);
	printf("0");
	printf(" 1");
	for(int i=1;i<=n;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	return 0;
}
