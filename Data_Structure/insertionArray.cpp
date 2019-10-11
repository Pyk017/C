#include<stdio.h>
int main()
{
	int a[20],k,n,item;
	printf("Enter elements in the array :- \n");
	scanf("%d",&n);
	printf("Enter contents in the Array :- \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Your Array is :- \n");
	for(int i=0;i<n;i++)
	{
	   printf(" %d",a[i]);	
	}
	printf("\nEnter Key position :- \n");
	scanf("%d",&k);
	printf("Enter item to be inserted in the Array :- \n");
	scanf("%d",&item);
	int j=n;
	while(j>=k)
	{
		a[j]=a[j-1];
		j=j-1;
     }
	a[k-1]=item;
    n = n + 1;
    printf("New Array is :- \n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	
	return 0;
}
