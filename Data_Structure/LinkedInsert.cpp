#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *start,*last,*temp,*p; int n,m;
	start=(struct node*)malloc(sizeof(struct node));
	printf("Enter Range of the list :-\n");
	scanf("%d",&n);
	printf("ENter contents in the list :-\n");
	scanf("%d",&m);
	start->data=m;
	start->next=NULL;
	last=start;
	for(int i=1;i<n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&m);
		temp->data=m;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
	printf("Contents in the list are :- \n");
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}int val,pos;
	printf("\nEnter the entry you want to enter in the linked list :-\n");
	scanf("%d",&val);
	printf("Enter the position to enter data :-\n");
	scanf("%d",&pos);
	struct node *po;
	po=start;
	for(int i=1;i<pos;i++)
	{
	    po=po->next;
	}
	if(po!=NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=val;
		temp->next=po->next;
		po->next=temp;
	}
	else
	{
		printf("Node not found!");
	}
	printf("Your new list is :- \n");
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
	return 0;
}
