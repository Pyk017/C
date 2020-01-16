#include<stdio.h>
int main()
{
	int r,c,a[20][20],b[20][20]={0},k=0;
	printf("Enter row :- \n");
	scanf("%d",&r);
	printf("Enter column :- \n");
	scanf("%d",&c);
	k=c-1;
	printf("ENter contents in the Array :- \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Your Entered Matrix is :- \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			b[i][j]=a[j][k];
		}
		k--;
	}
	printf("Your Turn over Matrix is :- \n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
