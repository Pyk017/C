#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter Row :- \n");
	scanf("%d",&r);
	printf("Enter Column :- \n");
	scanf("%d",&c);
	int a[r][c],b[r][c]={0};
	printf("Enter Contents in the Matrix :-\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",a[i][j]);
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
			b[i][j]=a[j][i];
		}
	}
	printf("Transpose of the Matrix :- \n");
for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
    }	
	return 0;
}
