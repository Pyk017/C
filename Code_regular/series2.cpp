#include<stdio.h>
int main()
{
	int n; float s=0;
	printf("Enter a Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s+=1.0/i;
	}
	printf("Sum of Series is :- %f",s);
	return 0;
}
