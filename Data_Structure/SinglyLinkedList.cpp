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
void insertAfter();
void insertBefore();
void dlt();
void rev();
int main()
{
	int m,ch,ch1;
	start=getNode();
	l=start;
	while(1)
	{
		printf("\nENter Choice:- \n(1) to input data\n(2) to print the data\n(3) to insert an element in the list INSERT_AFTER \n(4)  to insert an element in the list INSERT_BEFORE \n(5) to Delete an element from the list\n(6) to reverse the list\n(7) to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				input();
				break;
				case 2:
					print();
					break;
					case 3:
						insertAfter();
						break;
						case 4:
							insertBefore();
							break;
						    case 5:
							    dlt();
							    break;
							    case 6:
							    	rev();
							    	break;
							    	case 7:
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
	printf("\nEnter a Number\n");
	f=getNode();
	scanf("%d",&f->data);
	l->next=f;
	l=f;
	if(start->data==NULL)
	{
		start=start->next;
	}
}
void print()
{
	struct node *p;
	p=start;
	printf("Data in the List are :- \n");
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
}
void insertAfter()
{
	int val,ival;
	printf("Enter a number to enter in the list \n");
	scanf("%d",&val);
	printf("Enter a number after which an element is entered in the list \n");
	scanf("%d",&ival);
	struct node *r;
	r=start;
	while(r->data!=ival && r!=NULL)
	{
		r=r->next;
	}
	if(r!=NULL)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->data=val;
			temp->next=r->next;
			r->next=temp;
		}
		else
		{
			printf("Node not found!");
		}
		printf("New list is :- \n");
		print();
	}
void insertBefore()
{
		int val,ival;
	printf("Enter a number to enter in the list \n");
	scanf("%d",&val);
	printf("Enter a number after which an element is entered in the list \n");
	scanf("%d",&ival);
	struct node *q,*s;
	s=start;
	q=NULL;
	while(s->data!=ival && s!=NULL)
	{
		q=s;
		s=s->next;
	} 
	if(s!=NULL)
	{
		struct node *temp=getNode();
		temp->data=val;
		if(s==start)
		{
			temp->next=start;
			start=temp;
		}
		else
		{
			temp->next=s;
			q->next=temp;
		}
	}
	 else
	 {
	 	printf("Node not Found!");
	} 
	 print();
	}
void dlt()
{
	int d;
	printf("Enter a number from the list you want to delete it !\n");
	scanf("%d",&d);
	struct node *t,*w;
	t=start;
	w=NULL;
	while(t->data!=d && t!=NULL)
	{
		w=t;
		t=t->next;
	}
	if(t!=NULL)
	{
		if(t==start)
		{
			start=t->next;
		}
		else
		{
			w->next=t->next;
		}free(t);
	}
	else
	{
		printf("Node Not Found!");
	}
	print();
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
	printf("Reverse of the list is :- \n");
	struct node *s;
	s=start;
	while(s!=NULL)
	{
		printf(" %d",s->data);
		s=s->next;
	}
	p=NULL;
	q=NULL;
	r=NULL;
	
}	
