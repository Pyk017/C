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
    temp->data=0;
	temp->next=NULL;
    return temp;
}
int main()
{
	int m;char ch;struct node *f,*l;
	start=getNode();
	l=start;
	while(1)
	{
		printf("Enter Y to proceed or N to exit!\n");
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
		{
			printf("Enter Number:- \n");
			scanf("%d",&m);
			l->data=m;
			f=getNode();
		    l->next=f;
		    l=f;
		}
	     if(ch=='N' || ch=='n')
		{
            break;
		}
	}
	printf("Inputed list is :- \n");
	struct node *p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
	return 0;
}
