#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *start,*l;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=NULL;
	temp->next=NULL;
    return temp;
}
void input();
void print();
int main()
{
	int n;
	start=getNode();
	l=start;
	while(1)
	{
		printf("ENter choice\n(1) for entering contents in the list\n(2) for printing it!\n(3) To exit immediately!\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				input();
				break;
			    case 2:
			    	start=start->next;
			    	print();
			    	break;
			    	case 3:
			    		exit(0);
			    		break;
			    		default :
			    			printf("Invalid Input!");
			    			break;
		}
	}
	return 0;
}
void input()
{
	struct node *f;
	printf("\nEnter Number:- \n");
	f=getNode();
	scanf("%d",&f->data);
	l->next=f;
	l=f;
}
void print()
{
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
}
