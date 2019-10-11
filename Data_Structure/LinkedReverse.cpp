#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void rev();
struct node *start=(struct node *)malloc(sizeof(struct node));
int main()
{
	int m,n;
	struct node *last,*temp,*p,*q;
	//start=(struct node *)malloc(sizeof(struct node));
	printf("Enter range\n");
	scanf("%d",&n);
	printf("ENter contents in the list :-\n");
	scanf("%d",&m);
	start->data=m;
	start->next=NULL;
	last=start;
	for(int i=2;i<=n;i++)
	{
		scanf("%d",&m);
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=m;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
	printf("Your List is :- \n");
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
	printf("\nList in Reverse order is :- \n");
	rev();
	return 0;
}
void rev()
{
	struct node *p,*q,*r;
	r=start;
	q=NULL;
	p=NULL;
	while(r!=NULL)
	{
		q=r->next;
		r->next=p;
		p=r;
		r=q;
	}
	start=p;
	struct node *s;
	s=start;
	while(s!=NULL)
	{
		printf(" %d",s->data);
		s=s->next;
	}
}
