#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
};
struct node *front=NULL,*rear=NULL,*l=NULL;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}
void insert_At_Front();
void insert_At_Rear();
void delete_At_Front();
void delete_At_Rear();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter CHoice :- \n(1) to Insert at Front:- \n(2) to Insert at Rear :- \n(3) to Delete at Front:- \n(4) to Delete at Rear:- \n(5) to display the list :- \n(6) to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_At_Front();
				break;
			case 2:
				insert_At_Rear();
				break;
			case 3:
				delete_At_Front();
				break;
			case 4:
				delete_At_Rear();
				break;
			case 5:
				display();
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
void insert_At_Front()
{
	l=getNode();
	if(l==NULL)
	{
		printf("\nOverflow!\n");
	}
	else
	{
		printf("Enter Number :- \n");
		scanf("%d",&l->data);
		if(front==NULL)
		{
			rear=front=l;
		}
		else
		{
			front->prev=l;
			l->next=front;
			front=l;
		}
	}
}
void insert_At_Rear()
{
	l=getNode();
	if(l==NULL)
	{
		printf("\nOverflow!\n");
	}
	else
	{
		printf("Enter Number :- \n");
		scanf("%d",&l->data);
		if(front==NULL)
		{
			rear=front=l;
		}
		else
		{
			rear->next=l;
			l->prev=rear;
			rear=l;
		}
	}
}
void delete_At_Front()
{
	if(front==NULL)
	{
		printf("\nList is Empty!\n");
	}
	else
	{
		struct node *p=front;
		front=front->next;
		if(front!=NULL)
		{
		    front->prev=NULL;
		}
		else
		{
			rear=NULL;
		}free(p);
		printf("\nDeletion Successful!!\n");
	}
}
void delete_At_Rear()
{
	if(front==NULL)
	{
		printf("\nList is Empty!\n");
	}
	else
	{
		struct node *p=rear;
		rear=rear->prev;
		if(rear!=NULL)
		{
		    rear->next=NULL;
		}
		else
		{
			front=NULL;
		}free(p);
		printf("\nDeletion Successful!!\n");
	}
}
void display()
{
	if(front!=NULL)
	{
	    struct node *p=front;
	    while(p!=NULL)
	    {
	    	printf(" %d",p->data);
	    	p=p->next;
		}
    }
    else
    {
    	printf("Cannt display, your list is Empty!\n");
	}
}
