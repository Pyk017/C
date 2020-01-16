#include<stdio.h>
#include<stdlib.h>
void mergesort(int[],int,int); int q =0;
void merge(int[],int,int,int);
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
	mergesort(a,0,n-1);
	for (int i=0;i<n;i++)
	{
		printf ("%d	",a[i]);
	}
	return 0;
}
void mergesort(int *a,int p,int r)
{
	if (p<r)
	{
		q = (p + (r-1)) / 2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
}
void merge(int *a,int l,int m,int r)
{
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[m + 1+ j]; 
  
    /* Merge the temp aays back into a[l..r]*/
    i = 0; // Initial index of first subaay 
    j = 0; // Initial index of second subaay 
    k = l; // Initial index of merged subaay 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            a[k] = L[i]; 
            i++; 
        } 
        else
        { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    }
}
