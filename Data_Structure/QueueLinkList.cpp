#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL,*l=NULL;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=0;
	temp->next=NULL;
	return temp;
}
void insert();
void dlt();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter Choice :- \n(1) to Insert element in the Queue:- \n(2) to Display the Queue :-\n(3) to Delete an element from the Queue:- \n(4) to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				dlt();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid INput!");
				break;
		}
	}
	return 0;
}
void insert()
{
	rear=getNode();
	printf("\nEnter data :- \n");
	scanf("%d",&rear->data);
	if(front==NULL)
	{
		front=l=rear;
	}
	else
	{
		l->next=rear;
		l=rear;
	}
}
void dlt()
{
	struct node *p;
	if(front==NULL)
	{
		printf("Your Queue is Empty!");
	}
	else
	{
		p=front;
		front=front->next;
		if(front==NULL)
		{
			rear=NULL;
		}
		printf("\nDeletion Successful!!\n");
	}
}
void display()
{
	if(front!=NULL)
	{
	    printf("Your list is :- \n");
	    struct node *p=front;
	    while(p!=NULL)
	    {
		    printf(" %d",p->data);
		    p=p->next;
	    }
    }
    else
    {
    	printf("\nNo element found in the list!\n");
	}
}
