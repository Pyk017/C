#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
void insert_At_Front(int [],int);
void insert_At_Rear(int[],int);
void delete_At_Front(int[],int);
void delete_At_Rear(int[],int);
void display(int[],int);
int main()
{
	int n,ch,a[20];
	printf("\nEnter range :- \n");
	scanf("%d",&n);
	/*printf("\nEnter elements in the Array :- \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}*/
	while(1)
	{
		printf("\nEnter CHoice :- \n(1) to Insert at Front:- \n(2) to Insert at Rear :- \n(3) to Delete at Front:- \n(4) to Delete at Rear:- \n(5) to display the list :- \n(6) to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_At_Front(a,n);
				break;
			case 2:
				insert_At_Rear(a,n);
				break;
			case 3:
				delete_At_Front(a,n);
				break;
			case 4:
				delete_At_Rear(a,n);
				break;
			case 5:
				display(a,n);
				break;
			case 6:
			    exit(0);
				break;
			default:
				printf("\nInvalid Input!!\n");
				break;
		}
	}
	return 0;
}
void insert_At_Front(int a[],int n)
{
	printf("\nEnter number :- \n");
	static int front=n-1,rear=n-1;
	if(front==-1)
	{
		printf("\nQueue is Full!\n");
	}
	else
	{
		scanf("%d",&a[front]);
		front-=1;
		printf("\nInsertion Successful!!\n");
	}
}
void insert_At_Rear(int a[],int n)
{
	printf("\nEnter number :- \n");
	if(rear==n)
	{
		printf("\nQueue is Full!\n");
	}
	else
	{
		rear+=1;
		scanf("%d",&a[rear]);
		printf("\nInsertion Successful!!\n");
	}
}
void delete_At_Front(int a[],int n)
{
	if(front==rear)
	{
		printf("\nQueue Empty!\n");
	}
	else
	{
		front=+1;
		printf("\nDeletion Successful!!\n");
	}
}
void delete_At_Rear(int a[],int n)
{
	static int front=n-1,rear=n-1;
	if(front==rear)
	{
		printf("\nQueue Empty!\n");
	}
	else
	{
		a[rear]=-1;
		rear=-1;
		printf("\nDeletion Successful!!\n");
	}
}
void display(int a[],int n)
{
	printf("\nYour list is :- \n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}
