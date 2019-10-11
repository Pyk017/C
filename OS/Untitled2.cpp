#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,a[20],min=0,temp=0;
	printf("Enter number of processess:- \n");
	scanf("%d",&n);
	printf("Enter data :- \n");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		min = i;
		for (int j=(i+1);j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	printf("After Sorting Processess are:- \n");
	for (int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
