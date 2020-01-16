#include<stdio.h>
int main()
{
	int n,loc,ele;
	printf("Enter Range :- \n");
	scanf("%d",&n);
	int a[20];
	printf("Enter contents :- \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	printf("Enter location to be inserted :- \n");
	scanf("%d",&loc);
	printf("Enter elements to be inserted :- \n");
	scanf("%d",&ele);
	int i;
	for(i=(n-1);i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[i+1]=a[i];
	 a[i]=ele;
	 n+=1;
	 for(int i=0;i<n;i++)
	 {
	 	printf(" %d",a[i]);
	 }
	return 0;
}
