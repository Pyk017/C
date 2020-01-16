#include<stdio.h>
int main()
{
	int r,c,t=0,ut=0,lt=0;
	printf("Enter row :- \n");
	scanf("%d",&r);
	printf("Enter column :- \n");
	scanf("%d",&c);
	int a[20][20];
	printf("Enter contents in the Matrix :- \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Your Matrix is :- \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==j)
			{
				t+=a[i][j];
			}
		}
	}
		printf("Sum of elements of Principal Diagonal is :- %d\n",t);
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i>=j)
			{
				lt+=a[i][j];
			}
			if(i<=j)
			{
				ut+=a[i][j];
			}
		}
	}
		printf("Sum of elements ofUpper triangle of your matrix is :- %d\n Sum of elements ofUpper triangle of your matrix is :- %d",ut,lt);
	return 0;
}
