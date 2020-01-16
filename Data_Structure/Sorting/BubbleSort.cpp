#include<stdio.h>
#include<stdlib.h>
 void bubblesort(int[],int);
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
	bubblesort(a,n);
	for (int i=0;i<n;i++)
	{
		printf ("%d	",a[i]);
	}
	return 0;
}
void bubblesort(int *a,int n)
{
	int temp = 0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<(n-i-1);j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
