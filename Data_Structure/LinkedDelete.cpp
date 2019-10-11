#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
	struct node *next; 	
};
void dlt();
//void getNode();
struct node *start;
int main()
{
	struct node *last,*temp;
	start=(struct node *)malloc(sizeof(struct node));
	int n,m;
	printf("ENter Range of the List :- \n");
	scanf("%d",&n);
	printf("ENter contents in the list :- \n");
	scanf("%d",&m);
	start->data=m;
	start->next=NULL;
	last=start;
	for(int i=2;i<=n;i++)
	{
	    scanf("%d",&m);
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=m;
		temp->next=NULL;
		last->next=temp;
		last=temp; 	
	}
	printf("Your List is :- \n");
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
	dlt();
	return 0;
}
void dlt()
{
	printf("\nEnter a element to be deleted in the List :- \n");
	int d;
	scanf("%d",&d);
	struct node *p,*q;
	p=start;
	q=NULL;
	while(p->data!=d  && p!=NULL)
	{
		q=p;
		p=p->next;
	}
	if(p!=NULL)
	{
		if(p==start)
		{
			start=p->next;
		}
		else
		{
			q->next=p->next;
		}
	}
	else
	{
		printf("Node not Found!");
	}
	free(p);
	printf("New list is :- \n");
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
		
}

