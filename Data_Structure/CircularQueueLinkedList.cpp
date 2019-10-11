#include<stdio.h>
#include<stdlib.h>
struct node{
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
		printf("\nEnter choice:- \n(1) to insert element in the list :- \n(2) to display the list :- \n(3) to delete an element from the list :-\n(4)to exit!\n");
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
				printf("\nInvalid Inputs!!\n");
				break;
		}
	}
	return 0;
}
void insert()
{
	l=getNode();
	if(l==NULL)
	{
		printf("\nOverFlow!!\n");
	}
	else
	{
		printf("\nEnter Number :- \n");
		scanf("%d",&l->data);
		if(front==NULL)
		{
			front=rear=l;
			l->next=l;
		}
		else
		{
			rear->next=l;
			rear=l;
			l->next=front;
		}
	}
}
void dlt()
{
	if(front==NULL)
	{
		printf("\nQueue is Empty!!\n");
	}
	else
	{
		struct node *p=front;
		if(front==rear)
		{
			rear=front=NULL;
		}
		else
		{
			front=front->next;
			rear->next=front;
			printf("\nDeletion Successfull!!\n");
		}free(p);
	}
}
void display()
{
	if(front!=NULL)
	{
	    struct node *p=front;
	    printf("\nYour list is :- \n");
	    do{
		    printf(" %d",p->data);
		    p=p->next;
	    }while(p!=front);
    }
    else
    {
	    printf("\nNo element present in the Queue !\n");
    }
}
