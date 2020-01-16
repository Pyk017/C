#include<stdio.h>
int main()
{
	int n,b[20],i=0;
	printf("Enter a Number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		b[i]=n%2;
	    n/=2;
	    i++;
	}
	i--;
	while(i>=0)
	{
		printf("%d",b[i]);
		i--;
	}
	return 0;
}
