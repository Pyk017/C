#include<stdio.h>
#include<stdlib.h>
void QuickSort(int [],int,int);
int Partition(int[],int,int);
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n;
	printf("Enter Range :- \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in the Array :- \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	QuickSort(a,0,n-1);
	printf("Sorted elements in the Array are :- \n");
	for(int i=0;i<n;i++)
	{
		printf("%d	",a[i]);
	}
	return 0;
}
int Partition(int a[],int p,int r)
{
	int i=(p-1);
	int x = a[r];
	for(int j=p;j<=(r-1);j++)
	{
		if(a[j] <= x)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
//	printf("%d	%d	%d",i+1,a[i],a[r]);
	printf("\n");
	return i+1;
}
void QuickSort(int a[],int p,int r)
{
	if(p < r)
	{
		int q = Partition(a,p,r);
		QuickSort(a,p,q-1);
		QuickSort(a,q+1,r);
	}
}

