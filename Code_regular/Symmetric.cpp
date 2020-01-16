#include<stdio.h>
int main()
{
	int r,c;int a[20][20],b[20][20]={0};
	printf("Enter Row number :- \n");
	scanf("%d",&r);
	printf("Enter Column number :- \n");
	scanf("%d",&c);
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
			b[i][j]=a[j][i];
		}
	}
	printf("Transpose of a Matrix is :- \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==0 && j==0)
			{
		    	continue;
		    }
			else if(a[i][j]==b[i][j])
			{
				printf("Your matrix is a Symmetrical Matrix\n");				
			}
			else
			{
				printf("Your matix is not a Symmetrical matrix\n");
			}	
		}
	  break;
	}	
	return 0;
}
