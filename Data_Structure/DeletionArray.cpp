#include<stdio.h>
int main()
{
	int a[20],k,n;
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
	printf("Enter key to be Deleted in the Array :- \n");
	scanf("%d",&k);
	int j=k;
	while(j<=(n-1))
	{
		a[j-1]=a[j];
		j++;
     }
    n = n - 1;
    printf("New Array is :- \n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	
	return 0;
}
