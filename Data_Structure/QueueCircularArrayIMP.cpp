#include<stdio.h>
#include<stdlib.h>
int front=0,rear=0;
void dlt(int [],int);
void insert(int [],int);
void display(int [],int);
int main()
{
	int n,ch,a[10];
	printf("Enter range :- \n");
	scanf("%d",&n);
	n+=1;
	while(1)
	{
		printf("\nEnter choice:- \n(1) to insert element in the list :- \n(2) to display the list :- \n(3) to delete an element from the list :-\n(4)to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert(a,n);
				break;
			case 2:
				display(a,n);
				break;
			case 3:
				dlt(a,n);
			    break;
			case 4:
				exit(0);
				break;
		}
	}
	return 0;
}
void insert(int a[],int n)
{
	if((rear+1)%n == front)
	{
		printf("\nQueue if full!\n");
	}
	else
	{
		printf("\nEnter element :- \n");
		rear=(rear+1)%n;
		scanf("%d",&a[rear]);
	}	
}
void dlt(int a[],int n)
{
	if(front==rear)
	{
		printf("\nQueue is Empty.\n");
	}
	else
	{
		front=(front+1)%n;
		printf("\nDeletion Successful!!\n");
	}
}
void display(int a[],int n)
{
	printf("...Your list is :- \n");
	int i=(front+1)%n;
	while(i!=(rear+1)%n)
	{
		printf(" %d",a[i]);
		i=(i+1)%n;
	}
}
