#include<stdio.h>
#include<stdlib.h>
struct node{
	int data,prio;
	struct node *next;
};
struct node *start=NULL,*l=NULL;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=temp->prio=0;
	temp->next=NULL;
	return temp;
}
void create();
void dlt();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter Choice :- \n(1) to enter element in the list with priority :- \n(2) to display the data present in the list :- \n(3) to delete the elements of the list :- \n(4) to exit!!\n");
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
				dlt();
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
void create()
{
	l=getNode();
	printf("\nEnter data :- \n");
	scanf("%d",&l->data);
	printf("\nEnter priority :- \n");
	scanf("%d",&l->prio);
	if(start==NULL)
	{
		start=l;
	}
	else if(start->prio > l->prio)
	{
		l->next=start;
		start=l;
	}
	else
	{
		struct node *p=start;
		while(p->next!=NULL && p->next->prio <= l->prio)
		{
			p=p->next;
		}
		l->next=p->next;
		p->next=l;
	}
}
void dlt()
{
	struct node *p=start;
	if(start!=NULL)
	{
		start=start->next;
		printf("\nDeletion Successfull!!\n");
	}
	else
	{
		printf("\nYour List is Empty!\n");
	}free(p);
}
void display()
{
	if(start!=NULL)
	{
	    printf("\nYour List is :- \n ");
	    struct node *p=start;
	    while(p!=NULL)
	    {
		    printf(" %d(%d)-> ",p->data,p->prio);
		    p=p->next;
	    }
    }
    else
    {
    	printf("\nNo element present in the list to display!\n");
	}
}
