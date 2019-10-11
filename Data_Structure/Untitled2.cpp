#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
struct prio{
	char p[30];
	int id;
};
void create(struct prio,int);
void display(struct prio,int);
void dlt(struct prio,int);
int main
{
	struct prio pro[20];
	int ch,n;
	printf("Enter Range :- \n");
	scanf("%d",&n);
	while(1)
	{
		printf("\nEnter choice:- \n(1) to insert data : -\n(2) to display the data :- \n(3) to delete an element from the list.\n(4) to exit!!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create(pro,n);
				break;
			case 2:
				display(pro,n);
				break;
			case 3:
				dlt(pro,n);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Input!!\n");
				break;
		}
	}
	return 0;
}
void create(struct prio pro[],int)
{
	struct prio proN;
	int i=0;
	if(rear==(n-1))
	{
		printf("\nYour List is Full!\n");
	}
	else
	{
		rear+=1;
		i=rear-1;
		printf("\nEnter element :- \n");
		scanf("%s",&proN.p);
		printf("\nEnter Priority:- \n");
		scanf("%d",&proN.id);
		while(pro[i].id > proN.id && i>front)
		{
			pro[i+1].p=pro[i].p;
			pro[i+1].id=pro[i].id;
			i-=1;
		}
		    pro[i+1].p=proN.p;
		    pro[i+1].id=proN.id;
	    
	}
}
void display(struct prio pro[],int n)
{
	printf("\nYour List is :- \n");
	for(int i=(front+1);i<=rear;i++)
	{
		printf(" %c :- %d.\t",pro[i].p,pro[i],id);
	}
}
void dlt(struct prio pro[],int n)
{
	if(front==rear)
	{
		printf("\nList is Empty!\n");
	}
	else
	{
		front+=1;
		printf("\nDeletion Successful!!\n");
	}
}
