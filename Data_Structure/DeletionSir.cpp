#include<stdio.h>
int main()
{
int n,a[20],ele=0,loc=0;
printf("Enter range \n");
scanf("%d",&n);
printf("Enter contents in the Arrays :- \n");
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}	
	printf("Enter the element to be deleted! \n");
	scanf("%d",&ele);
	for(int i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			loc=i;
			break;
		}
	}
	for(int j=loc;j<n;j++)
	{
		a[j]=a[j+1];
	}
	n-=1;
	for(int k=0;k<n;k++)
	{
		printf(" %d",a[k]);
	}
	return 0;
}
