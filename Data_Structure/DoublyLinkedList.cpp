#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
};
struct node *start=NULL,*l=NULL;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=NULL;
	temp->prev=NULL;
	temp->next=NULL;
	return temp;
}
void create();
void display();
void insert_AFTER();
void insert_BEFORE();
void dlt();
void reverse();
int main()
{
	start=getNode();
	l=start;
	int ch;
	while(1)
	{
		printf("\nEnter choice :- \n(1) to enter element in the list :- \n(2) to display the list :- \n(3) to insert an element after a given element in the list :- \n(4) to insert an element before a given element in the list :- \n(5) to delete an element from the list :- \n(6) to Reverse the list :- \n(7) to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				insert_AFTER();
				break;
			case 4:
				insert_BEFORE();
				break;
			case 5:
			    dlt();
			    break;
			case 6:
				reverse();
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}
	return 0;
}
void create()
{
	printf("Enter element :- \n");
	struct node *f=getNode();
	scanf("%d",&f->data);
	f->prev=l;
	l->next=f;
	l=f;
	if(start->data==NULL)
	{
		start=start->next;
		start->prev=NULL;
	}
}
void display()
{
	struct node *p=start;
	printf("Your list is :- \n");
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
}
void insert_AFTER()
{
	struct node *p=start;
	int val,pval;
	printf("Enter an element to be inserted :- \n");
	scanf("%d",&val);
	printf("Enter an element of the list after which an element to be inserted :- \n");
	scanf("%d",&pval);
	while(p!=NULL && p->data!=pval)
	{
		p=p->next;
	}
	if(p!=NULL)
	{
		struct node *temp=getNode();
		temp->data=val;
		temp->prev=p;
		temp->next=p->next;
		p->next=temp;
		p->next->prev=temp;
	}
	else
	{
		printf("Node not Found!\n");
	}
	printf("\nInsertion Successful\nPress (2) to display the new list!\n");
}
void insert_BEFORE()
{
	struct node *p=start;
	int val,pval;
	printf("Enter an element to be inserted :- \n");
	scanf("%d",&val);
	printf("Enter an element of the list after which an element to be inserted :- \n");
	scanf("%d",&pval);
	while(p!=NULL && p->data!=pval)
	{
		p=p->next;
	}
	if(p!=NULL)
	{
		struct node *temp=getNode();
		temp->data=val;
		if(p==start)
		{
			temp->next=p;
			p->prev=temp;
			temp->prev=NULL;
			start=temp;
		}
		else
		{
			temp->next=p;
			temp->prev=p->prev;
			p->prev->next=temp;
			p->prev=temp;
		}
	}
	else
	{
		printf("Node not Found!\n");
	}
	printf("\nInsertion Successful\nPress (2) to display the new list!\n");
}
void dlt()
{
	int d;
	printf("Enter an element to be delted from the list :- \n");
	scanf("%d",&d);
	struct node *p=start;
	while(p!=NULL && p->data!=d)
	{
		p=p->next;
	}
	if(p!=NULL)
	{
	if(p->prev!=NULL && p->next!=NULL)
	{
		p->next->prev=p->prev;
		p->prev->next=p->next;
	}
	else if(p->prev==NULL)
	{
		p->next->prev=NULL;
		start=start->next;
	}
	else
	{
		p->prev->next=NULL;
	}
	free(p);
    }
    else
    {
    	printf("Node Not Found!\n");
	}
	printf("Deletion Successful!\nPress (2) to display the new list!\n");
}
void reverse()
{
	struct node *p=start,*q=NULL,*r=NULL;
    while(p!=NULL)
    {
    	q=p->next;
    	p->next=p->prev;
    	p->prev=q;
    	r=p;
    	p=q; 
	}
	start=r;
	printf("\nYour List is being Reversed !\nPress (2) to display the new list!\n");
}

