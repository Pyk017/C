#include<stdio.h>
#include<stdlib.h>
void sort (int b[],int n)
{
	int min,temp =0;
	for (int i=0;i<(n-1); i++)
	{
		min = i;
		for (int j=i+1; j<n; j++)
		{
			if (b[j] < b[min])
			{
				min = j;
			}
		}
		temp = b[i];
		b[i] = b[min];
		b[min] = temp;
	}
}
int main()
{
	int n,p[20][3],j=0;
	printf("Enter number of processess:- ");
	scanf("%d",&n);
	printf("Enter Arrival Time and Burst Time :- \n");
	for (int i=0; i<n; i++)
	{
		scanf("%d %d",&p[i][0],&p[i][1]);
	}
	printf ("Your data is as follows :- \n");
	for (int i=0; i<n; i++)
	{
		printf(" %d %d \n",p[i][0],p[i][1]);
	}
	int b[n] = {0};
	for (int i=0; i<n; i++)
	{
		b[i] = p[i][0];
	}
	printf ("All Arrival Times are :- \n");
	for (int i =0; i<n; i++)
	{
		printf ("%d ",b[i]);
	}
	sort(b,n); int a[n][3] = {0};
	printf ("\nArrival Time in increasing is :- \n");
	for (int i =0; i<n; i++)
	{
		printf ("%d ",b[i]);
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (b[i] == p[j][0])
			{
				a[i][0] = j;
				a[i][1] = p[j][0];
				a[i][2] = p[j][1];
				break;
			}
		}
	}
	printf ("\nArrival Arrays is :- \n");
	for (int i =0; i<n; i++)
	{
		printf ("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
	} int time = 0;
	for (int i=0; i<n; i++)
	{
		time += a[i][2];
		a[i][2] = time;
	}
	for (int i =0; i<n; i++)
	{
		printf ("%d %d %d	",a[i][0],a[i][1],a[i][2]);
	}printf("\n");
	/* Calculation of Waiting Time and Arrival Time starts here........*/
	int wt_tat[n][3] = {0};
	for (int i=0; i<n; i++)
	{
		wt_tat[i][0] = a[i][0];
		if (i == 0)
		{ 
			wt_tat[i][1] = 	0;
			wt_tat[i][2] = 	a[i][2] - a[i][1];
			printf("Waiting Time of P%d is :- %d\n",a[i][0],0);
		}
		else{
			wt_tat[i][1] = a[i-1][2]-a[i][1];
			wt_tat[i][2] = 	a[i][2] - a[i][1];
			printf ("Waiting Time of P%d is :- %d\n",a[i][0],a[i-1][2]-a[i][1]);	
		}
	}
	printf("Waiting Time and Turn Around Time of Processess are :- \n");
	printf("Process_ID	Waiting_Time	Turn_Around_Time	\n");
	float avg_wt = 0,avg_tat = 0;
	for (int i=0; i<n; i++)
	{
		printf(" %d			%d		%d \n",wt_tat[i][0],wt_tat[i][1],wt_tat[i][2]);
		avg_wt += wt_tat[i][1];
		avg_tat +=wt_tat[i][2];
	}
	avg_wt /= n;
	avg_tat /= n;
	printf("Average Waiting time of Processess are :- %.2f\nAverage Turn Around Time time of Processess are :- %.2f",avg_wt,avg_tat);
	return 0; 
}
