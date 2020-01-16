#include<stdio.h>
int main()
{
	int v,m=0,n=0;int sp[20][20],o[20][20]={0},k=0;
	printf("Enter number of values :-\n");
	scanf("%d",&v);
	printf("Enter contents :- \n");
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<3;j++)
		{ 
		    scanf("%d",&sp[i][j]);	
		}
	}
	printf("Your Matrix is :- \n");
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<3;j++)
		{ 
		    printf(" %d",sp[i][j]);	
		}
		printf("\n");
    }
	   m=sp[0][0];
	   n=sp[0][1];
	  for(int i=0;i<m;i++)
	  {
	  	for(int j=0;j<n;j++)
	  	{
		  sp[i][j]=0;
 	}
 }
	  for(int i=0;i<m;i++)
	  {
	  	for(int j=0;j<n;j++)
	  	{
			    o[sp[k][0]][sp[k][1]] = sp[k][2];
			    k=k+1;  
		  }
	  }
    printf("Your original matrix is :- \n");
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		printf(" %d",o[i][j]);
		}
		printf("\n");
	}
    
	return 0;
}
