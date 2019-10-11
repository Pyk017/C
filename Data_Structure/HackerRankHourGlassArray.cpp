#include <stdlib.h>
#include<stdio.h>
int main()
{
	int a[50][50],b[50][50]={0},n;
	printf("Enter Order of Matrix :- \n");
	scanf("%d",&n);
	printf("Enter contents in Matrix :- \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<(n-2);i++)
	{
		for(int j=0;j<(n-2);j++)
		{
			b[i][j]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
		}
	}
	printf(" Your New Matrix is :- \n");
	for(int i=0;i<(n-2);i++)
	{
		for(int j=0;j<(n-2);j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	int max=b[0][0],k=1;
	for(int i=0;i<(n-2);i++)
	{
		for(int j=0;j<(n-2);j++)
		{
			if(k<4)
			{
				if(b[i][k]>max)
				{
					max=b[i][k];
				}
			}
			k++;
		}
		k=0;
	}
	printf(" Maximum number is :- %d\n",max);
	return 0;
}
