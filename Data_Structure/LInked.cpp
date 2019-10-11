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
 void pr();
int main()
{
	struct node *l;char ch;
	start=getNode();
	l=start;
	while(1)
	{
		printf("Enter Y to proceed and N to exit!\n");
	    scanf("%c",&ch);
	    printf("Enter Contents in the list:- \n");
	    if(ch=='Y' || ch=='y')
	    {
	    	if(l==start)
	    	{
	    		scanf("%d",&l->data);
	    		l->next=NULL;
	    		f=getNode();
			}
			else
			{
				l->next=f;
				scanf("%d",&f->data);
				f->next=NULL;
				l=getNode();	
			}
		}
		if(ch=='N' || ch=='n')
	    {
	    	pr();
	    	break;
		}
	}
	return 0;
}
void pr()
{
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
}
