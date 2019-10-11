#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *start,*front,*rear,*l=NULL;
struct node* getNode()
{
	struct node *trmp=(struct node*)malloc(sizeof(struct node));
	trmp->data=0;
	trmp->next=NULL;
	return trmp;
}
void insert();
void dlt();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter choice :-\n(1) to insert en element in the list :- \n(2) to delete an element from the list :- \n(3) to display the list :- \n(4) to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				dlt();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Inputs!\n");
		}
	}
	return 0;
}
void insert()
{
	printf("\nEnter Number :- \n");
	l=getNode();
	scanf("%d",&l->data);
	if(front==NULL)
	{
		front=rear=l;
	}
	else
	{
		rear->next=l;
		l->next=front;
		rear=l;
	}
	printf("\nInsertion Successful!\n");
}
void dlt()
{
	struct node *p=NULL;
	if(front==rear)
	{
		front=rear=NULL;
		printf("\nNo element is present to be deleted from the Queue.\n");
	}
	else
	{
		p=front;
		front=front->next;
		rear->next=front;
	    printf("\nDeletion Successful!\n");
	}free(p);
}
void display()
{
	if(front!=NULL)
	{
	    printf("\nYour List is :- \n");
	    struct node *p=front;
	    do{
		    printf(" %d",p->data);
		    p=p->next;
	    }while(p!=front);
    }
    else
    {
    	printf("\nYour List is Empty :- \n");
	}
}
