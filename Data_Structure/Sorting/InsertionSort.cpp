#include<stdio.h>
#include<stdlib.h>
void insertionsort(int[],int);
int main()
{
	int n,a[30];
	printf("Enter range of Array :- \n");
	scanf("%d",&n);
	printf("Enter Elements in the Array to Sort :- \n");
	for (int i=0;i<n;i++)
	{
		printf ("Element %d :- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Your Sorted Arrays is :- \n");
	insertionsort(a,n);
	for (int i=0;i<n;i++)
	{
		printf ("%d	",a[i]);
	}
	return 0;
}
void insertionsort (int a[],int n)
{
	int j=0,key=0;
	for (int i=1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while ((j>=0) && (key<a[j]))
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}
