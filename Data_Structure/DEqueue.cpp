#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
void insert_Front(int[],int);
void insert_Rear(int[],int);
void dlt_Front(int[],int);
void dlt_Rear(int[],int);
void display(int[],int);
int main()
{
	int ch,n,a[20];
	printf("Enter Range :- \n");
	scanf("%d",&n);
	while(1)
	{
		printf("\nEnter Choice :- \n(1) to Enter element as Insert_At_Front.\n(2) to Enter element as Insert_At_Rear.\n(3) to delete element as Delete_At_Front.\n(4) to delete element as Delete_At_Rear.\n(5) to display the list.\n(6) to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_Front(a,n);
				break;
			case 2:
				insert_Rear(a,n);
				break;
			case 3:
				dlt_Front(a,n);
				break;
			case 4:
				dlt_Rear(a,n);
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
void insert_Front(int a[],int n)
{
	if(front==0)
	{
		printf("\nList is Full!\n");
	}
	else
	{
		printf("Enter Number :- \n");
		scanf("%d",&a[front-1]);
	}
}
void insert_Rear(int a[],int n)
{
	if(rear==n)
	{
		printf("\nList is Full!\n");
	}
	else
	{
		printf("\nEnter Number :- \n");
		scanf("%d",&a[rear+1]);
	}
}
void dlt_Front(int a[],int n)
{
	if(front==rear)
	{
		printf("\nQueue is Empty!\n");
	}
	else
	{
		front+=1;
		printf("\nDeletion Successful!!\n");
	}
}
void dlt_Rear(int a[],int n)
{
	if(front==rear)
	{
		printf("\nQueue is Empty!\n");
	}
	else
	{
		rear-=1;
		printf("\nDeletion Successful!!\n");
    }
}
void display(int a[],int n)
{
	printf("\nYour List is :- \n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}
