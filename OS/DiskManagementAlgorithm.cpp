#include<stdio.h>
#include<stdlib.h>
void fcfs(int[],int,int,int);
void sstf(int[],int,int,int);
void scan(int[],int,int,int);
void c_scan(int[],int,int,int);
void look(int[],int,int,int);
void c_look(int[],int,int,int);
int* sorted(int b[],int a[],int n)
{
	int min,temp;
	for(int i=0;i<(n-1);i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if(b[j]<b[min])
			{
				min = j;
			}
		}
		temp = b[min];
		b[min] = b[i];
		b[i] = temp;
			
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
	return a;
}
void sort_asc(int a[],int n)
{
	int min,temp;
	for(int i=0;i<(n-1);i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{		
			if(a[j]<a[min])
				min = j;
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}
int main()
{
	int c,str[20],n,ch,head;
	printf("Enter Number of Cylinders :- \n");
	scanf("%d",&c);
	printf("Enter Length of String :- \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&str[i]);
	}
	printf("Enter Initial Head Pointer :- \n");
	scanf("%d",&head);
	while(1)
	{
		printf("Enter Choice for technique.\nEnter 1 for FCFS.\n 2 for SSTF.\n 3 for SCAN.\n 4 for C_SCAN.\n 5 for LOOK.\n 6 for C_LOOK.\n 0 for exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fcfs(str,n,head,c);
				break;
			case 2:
				sstf(str,n,head,c);
				break;
			case 3:
				scan(str,n,head,c);
				break;
			case 4:
				c_scan(str,n,head,c);
				break;
			case 5:
				look(str,n,head,c);
				break;
			case 6:
				c_look(str,n,head,c);
				break;
			case 0:
				exit(0);
				break;
			default:
				printf("Invalid Inputs!!\n");
				break;
		}
	}
	return 0;
}
void fcfs(int a[],int n,int head,int c)
{
	int total = 0;
	if (head > a[0])
		total = head - a[0];
	else
		total = a[0] - head;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
			total += (a[i] - a[i-1]);	
		}
		else{
			total += (a[i-1] - a[i]);
		}
	}
	printf("\nTotal Seek Time is :- %d\n",total);
}
void sstf(int a[],int n,int head,int c){
	int *b;
	b = (int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		if(head > a[i])
			b[i] = head - a[i];
		else
			b[i] = a[i] - head;
	}
	a = sorted(b,a,n);
	int total = 0;
	if (head > a[0])
		total = head - a[0];
	else
		total = a[0] - head;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
			total += (a[i] - a[i-1]);	
		}
		else{
			total += (a[i-1] - a[i]);
		}
	}
	printf("\nTotal Seek Time is :- %d\n",total);
}  
void scan(int a[],int n,int head,int c){
		int k=0,l=0,m=0;
		sort_asc(a,n);
		for(int i=0;i<(n-1);i++)
		{
			if(head>a[i] && head<a[i+1])
				k = l = m = i;
		}
		int b[n+1] = {0};
		l += 1;
		for(int i=0;i<n;i++)
		{
			if (i>m){
				b[i] = a[k];
				k--;
			}	
			else{
				b[i] = a[l];
				l++;
			}
		}
		for(int i=n;i>m;i--)
		{
			b[i+1] = b[i];
		}
		b[m+1] = c-1;
		fcfs(b,n+1,head,c);
}
void c_scan(int a[],int n,int head,int c){
			int k=0,l=0,m=0;
		sort_asc(a,n);
		for(int i=0;i<(n-1);i++)
		{
			if(head>a[i] && head<a[i+1])
				k = l = m = i;
		}
		int b[n+2] = {0};
		l += 1;
		for(int i=0;i<n;i++)
		{
			if (i>m){
				b[i] = a[k];
				k--;
			}	
			else{
				b[i] = a[l];
				l++;
			}
		}
		for(int i=n;i>m;i--)
		{
			b[i+1] = b[i];
			b[i+2] = b[i+1];
		}
		b[m+1] = c-1;
		b[m+2] = 0;
		fcfs(b,n+2,head,c);
		
}
void look(int a[],int n,int h,int c){
	printf("Will be Updated Soon!");	
}
void c_look(int a[],int n,int h,int c){
	printf("Will be Updated Soon!");	
}

