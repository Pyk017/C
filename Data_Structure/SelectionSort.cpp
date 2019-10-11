#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[30],min=0,temp=0;
	printf("Enter range :- \n");
	scanf("%d",&n);
	printf("Enter numbers :-\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Unsorted Array is - \n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\nSorted Array is :- \n");
	for(int i=0;i<(n-1);i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(int j=0;j<n;j++)
	{
		printf(" %d",a[j]);
	}
    return 0;
}
