#include<stdio.h>
int main()
{
	int n,a[20],t=0;
	printf("Enter Range :- \n");
	scanf("%d",&n);
	printf("Enter contents in the Array :-\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Your entered Array is :- \n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
	}
	printf("\nYour Sorted Array is :- \n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
return 0;
}
