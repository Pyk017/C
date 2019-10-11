#include<stdio.h>
int main()
{
	int m,n,a[20][20],b[20][20]={0},k=1;
	printf("Enter Row \n");
	scanf("%d",&m);
	printf("Enter Column \n");
	scanf("%d",&n);
	printf("Enter numbers :- \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	printf("Your Original Matrix is :- \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		printf(" %d",a[i][j]);
	    }
	    printf("\n");
    }
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(a[i][j]!=0)
    		{
    			b[k][0]=i;
    			b[k][1]=j;
    			b[k][2]=a[i][j];
    			k=k+1;
			}
		}
	}
	 b[0][0]=m;
	 b[0][1]=n;
	 b[0][2]=k-1;
	 printf("Sparx Matrix is :- \n");
	 for(int i=0;i<k;i++)
	 {
	 	for(int j=0;j<3;j++)
	 	{
	 		printf(" %d",b[i][j]);
		}
		 printf("\n");
	 }
	return 0;
}
