#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,n;
	printf("Enter range :- \n");
	scanf("%d",&n);
	printf("Enter Elements in the Array :- \n");
	for(int i=0;i<n;i++)
	{
		p = (int*)malloc(1*sizeof(int));
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("\nYour inputted Array is :- \n");
	for(int i=0;i<n;i++)
	{
		printf("%d	",p[i]);
	}
	return 0;
}
