#include<stdio.h>
int main()
{
	int s[20][20],o[20][20]={0};
	int m,c,v,n;
	printf("Enter range :- \n");
	scanf("%d",&n);
	printf("Enter contents in the Array :-\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
		    scanf("%d",&s[i][j]);
	    }
	}
	printf("Orignal Matrix is :- \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
		    printf(" %d",s[i][j]);
	    }
	    printf("\n");
	}
	
	//m=s[0][0];
	//no=s[0][1];
	//v=s[0][2];
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			o[k][0]=s[k][1];
			o[k][1]=s[k][0];
			o[k][2]=s[k][2];
			k++;
		}
	}
	printf("New Matrix is :- \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf(" %d",o[i][j]);
		}
		    printf("\n");
	}
	return 0;
}
