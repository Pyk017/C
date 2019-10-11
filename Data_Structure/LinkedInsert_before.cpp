#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

int main()
{
	int n,m;
	struct node *start,*temp,*last,*p,*q=NULL;
	start=(struct node*)malloc(sizeof(struct node));
	printf("Enter range\n");
	scanf("%d",&n);
	printf("Enter contents in the list:- \n");
	scanf("%d",&m);
	start->data=m;
	start->next=NULL;
	last=start;
	for(int i=1;i<n;i++)
	{
		scanf("%d",&m);
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=m;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
	p=start;
	printf("Contents in the list are :- \n");
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
    }int val,pos;
    printf("Enter element to insert :-\n");
    scanf("%d",&val);
    printf("Enter position where to insert that element :-\n");
    scanf("%d",&pos);
    p=start;
    for(int i=1;i<pos;i++)
    {
    	q=p;
    	p=p->next;
	}
	if(p!=NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=val;
		if(p==start)
		{
			temp->next=p;
			start=temp;
		}
		else
		{
			temp->next=p;
			q->next=temp;
		}
	}
	else
	{
		printf("Node not found!");
	}
	p=start;
	printf("Modified content in the list are:- \n");
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
	return 0;
}
