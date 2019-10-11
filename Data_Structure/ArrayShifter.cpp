#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[20],b[20]={0},d;
	printf("Enter range of Array :- \n");
	scanf("%d",&n);
	printf("ENter elements in the Array :- \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter shifter key :- \n");
	scanf("%d",&d);
	for(int i=0;i<n;i++)
	{
		b[i]=a[d];
		if(d==(n-1))
		{
			d=0;
		}
		else
		{
			d++;
		}
	}
	printf("Your shifted Array is :- \n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",b[i]);
	}
	return 0;
}
