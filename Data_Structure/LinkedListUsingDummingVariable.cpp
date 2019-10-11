#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *start;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=NULL;
	temp->next=NULL;
    return temp;
}
int main()
{
	struct node *l,*f;int n;
	start=getNode();
	l=start;
	while(1)
	{
		printf("Enter your choice \n (1) to proceed \n (2) to exit\n");
		scanf("%d",&n);
		if(n==1)
		{
		
			printf("Enter number :- \n");
			f=getNode();
			scanf("%d",&f->data);
			l->next=f;
			l=f;
		}
		if(n==2)
		{
			break;
	    }	
		}
	start=start->next;
	struct node *p;
	p=start;
	printf("Contents in the list are :-\n");
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
	return 0;
}
