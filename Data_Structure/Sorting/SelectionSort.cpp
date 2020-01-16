#include<stdio.h>
#include<stdlib.h>
 void selectionsort(int[],int);
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
	selectionsort(a,n);
	for (int i=0;i<n;i++)
	{
		printf ("%d	",a[i]);
	}
	return 0;
}
void selectionsort (int *a,int n)
{
	int min = 0,temp = 0;
	for (int i=0;i<(n-1);i++)
	{
		min = i;
		for (int j=i;j<n;j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		temp = a[min];
		a[min]= a[i];
		a[i] = temp;
	}
}
