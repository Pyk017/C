#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int b[],int n)
{
	int min = 0,temp = 0;
	for (int i=0;i<n;i++)
	{
		min = i;
		for (int j=i+1;j<n;j++)
		{
			if (a[j]<a[min])
			{
				min = j;
			}
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
			
			temp = b[i];
			b[i] = b[min];
			b[min] = temp;
		}
	}
}
int main()
{
	int n,p[20],bt[20],wt[20]={0},total=0,tat[20]={0};
	float avg_wt=0,avg_tat=0;
	printf ("Enter numbers of Processess :- n");
	scanf ("%d",&n);
	printf("Enter Burst Time :- \n");
	for (int i=0;i<n;i++)
	{
		printf ("P%d : ",i+1);
		scanf ("%d",&bt[i]);
		p[i]=i+1;
	}
	sort(bt,p,n);
	printf ("Processess after sorting is :- \n");
	for (int i=0;i<n;i++)
	{
		printf ("P%d : %d\n",p[i],bt[i]);
	}
	wt[0] = 0;
	for (int i=0;i<n;i++)
	{
		wt[i] = 0;
		for (int j=0;j<i;j++)
		{
			wt[i]+=bt[j];
		}
		total+=wt[i];
	}
	avg_wt=(float)total/n;
	total=0;
	printf("\nProcess\t  Burst Time  \tWaiting Time\tTurn Around Time\n");
	for (int i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
		total+=tat[i];
		printf("\n\tp%d\t\t %d\t\t  %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
	}
	avg_tat=(float)total/n;
	printf("\n\nAverage Waiting Time = %f",avg_wt);
	printf("\n\nAverage Turn Around Time = %f",avg_tat);
	return 0;
}
