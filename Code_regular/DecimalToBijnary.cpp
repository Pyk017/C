#include<stdio.h>
int main()
{
	int bn[50],a,i=0;
	printf("Enter number a Decimal Number to change it into Binary Number.\n");
	scanf("%d",&a);
	int k=a;
	while(k!=0)
	{
		bn[i++]=k%2;
		k/=2;
	}
	printf("Your Binary equivalent is :- \n");
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",bn[j]);
	}
	return 0;
}
