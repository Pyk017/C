/*Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
You may assume that the array is non-empty and the majority element always exist in the array.*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int calculate(int[],int[],int);
int main()
{
	int n,a[20],flag=0,b[20]={0};
	printf("Enter range of Array :- \n");
	scanf("%d",&n);
	printf("Enter elements in the Array :- \n");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Your inputted Array is :- \n");
	for (int i=0;i<n;i++)
	{
		printf("%d	",a[i]);
	}
	int limit = floor(n/2);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (a[i] == a[j])
			{
				flag++;
			}
		}
		b[i] = flag;
		flag = 0;
	}
	int result = calculate(a,b,n);
	printf("\nMajority Element is :- %d",result);
	return 0;
}
int calculate (int a[],int b[],int n)
{
	int min,temp;
	for (int i=0;i<n;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if (b[j] > b[min])
			{
				min = j;
			}
		}
		temp = b[i];
		b[i] = b[min];
		b[min] = temp;
		
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}

	return a[0];
}
