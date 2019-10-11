#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *start,*last,*temp;
	start=(struct node*)malloc(sizeof(struct node));
	int n,m;
	printf("Enter Range:- \n");
	scanf("%d",&n);
	printf("Enter elements in the list:- \n");
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
	printf("Your List elements are :- \n");
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
	return 0;
}
