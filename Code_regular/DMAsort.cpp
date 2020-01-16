#include<s tdio.h>
#include<stdlib.h>
int main()
{
	int *P,loc=0,n;
	printf("Enter Range :- ");
	scanf("%d",&n);
	P=(int *)calloc(n,sizeof(int));
	printf("Enter numbers :- \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(P+i));
	}
	printf("Your inputted numbers are :- \n");	
	for(int i=0;i<n;i++)
	{
		printf(" %d",*(P+i));
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
		     if(*(P+j) > *(P+j+1))
			    {
			 	  loc = *(P+j);
			 	  *(P+j) = *(P+j+1);
			 	  *(P+j+1) = loc;
			    }	
		}
	}
	printf("\nSorted Array is :- \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(P+i));
	}
	return 0;
}

