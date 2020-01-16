#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *P;
	int n;
	printf("Enter Range :- ");
	scanf("%d",&n);
	P=(int *)calloc(n,sizeof(int));
	printf("Enter numbers :- \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(P+i));
	}
	printf("Your inputted numbers are :- ");	
	for(int i=0;i<n;i++)
	{
		printf(" %d",*(P+i));
	}
	int k=0,loc=0;
	printf("\nENter a number to be Searched \n");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		if(k==*(P+i))
		{
			loc=i;
			break;
		}
	}
	printf("Your Number present at %d",loc+1);
	return 0;
}

