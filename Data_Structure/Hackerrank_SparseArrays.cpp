#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;int m;
	printf("Enter range of String :- \n");
	scanf("%d",&n);
	char string[n][20];
	for(int i=0;i<n;i++)
	{
		scanf("%s",string[i]);
	}
	printf("Enter number of Queries :- \n");
	scanf("%d",&m);
	char query[m][30];
	int result[m] = {0};
	for(int i=0;i<m;i++)
	{
		scanf("%s",query[i]);
	}
	int i=0,j=0;
	while(query[i][30] != NULL)
	{
		while(string[j][30]  != NULL)
		{
			if(strcmp(query[i],string[j]) == 0)
			{
				result[i]++;
			}
			j++;
		}
		i++;
	}
	for(int k=0;k<m;k++)
	{
		printf("%d ",result[k]);
	}
return 0;}
