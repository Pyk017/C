#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
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
	int m,n;struct node *l,*f,*k;
	start=getNode();
	l=start;
	k=NULL;
	while(1)
	{
		printf("Enter your choice \n (1) to proceed \n (2) to exit\n");
		scanf("%d",&n);
		if(n==1)
		{
			printf("Enter Number:- \n");
			scanf("%d",&l->data);
		    f=getNode();
		    l->next=f;
		    k=l;
		    l=f;
		}
	     if(n==2)
		{
            break;
		}
	}
	k->next=NULL;
	printf("Inputed list is :- \n");
	struct node *p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
	return 0;
}
