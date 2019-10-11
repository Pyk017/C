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
	temp->next=start;
	return temp;
}
void input();
void print();
void insertAfter();
void insertBefore();
void dlt();
void rev();
void search();
int main()
{
	int m,ch,ch1;
	start=getNode();
	l=start;
	while(1)
	{
		printf("\nENter Choice:- \n(1) to input data\n(2) to print the data\n(3) to insert an element in the list INSERT_AFTER \n(4)  to insert an element in the list INSERT_BEFORE \n(5) to Delete an element from the list\n(6) to reverse the list\n(7) to search the position of a particular element in the list :- \n(8) to exit!\n");
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
				search();
				break;
			case 8:
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
	struct node *f=getNode();
	printf("Enter number :- \n");
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
	printf("Your list is :- \n");
	do{
		printf(" %d",p->data);
		p=p->next;
	}while(p!=start);
	
}
void insertAfter()
{int val,ival;
	printf("Value to be inserted in the list :-\n");
	scanf("%d",&val);
	printf("Value inserted after which element in the list :-\n");
	scanf("%d",&ival);
	struct node *p;
	p=start;
	do{
		p=p->next;
	}while(p->data!=ival && p!=start);
	if(p->data==ival)
	{
		struct node *f=getNode();
		f->data=val;
		f->next=p->next;
		p->next=f;
	}
	else
	{
		printf("Node NOt Found!");
	}
	print();
}
void insertBefore()
{
	int val,ival;
	printf("Value to be inserted in the list :-\n");
	scanf("%d",&val);
	printf("Value inserted after which element in the list :-\n");
	scanf("%d",&ival);
	struct node *p,*q;
	p=q=start;
	while(q->next!=p)
	{
		q=q->next;
	}
	do{
		q=p;
		p=p->next;
	}while(p->data!=ival && p!=start);
	if(p->data==ival)
	{
		struct node *f=getNode();
		f->data=ival;
		if(p==start)
		{
			f->next=p;
			q->next=f;
			start=f;
		}
		else
		{
			q->next=f;
			f->next=p;
		}
	}
	else
	{
		printf("Node Not Found!");
	}
	print();
}
void dlt()
{
	int d;
	printf("Enter element to be deleted from the list :- \n");
	scanf("%d",&d);
	struct node *p,*q;
	p=start;
	q=start;
	while(q->next!=p)
	{
		q=q->next;
	}
	do{
		q=p;
		p=p->next;
	}while(p->data!=d && p!=start);
	if(p->data==d)
	{
		if(p==start)
		{
			q->next=p->next;
			start=p->next;
		}
		else
		{
			q->next=p->next;
		}free(p);
	}
	else
	{
		printf("Node not Found!");
	}
	print();
}
void rev()
{
	struct node *p,*q,*r;
	p=q=r=start;
	while(p->next!=r)
	{
		p=p->next;
		q=q->next;
	}
	do
	{
		q=r->next;
		r->next=p;
		p=r;
		r=q;
	}while(r!=start);  
	start=p;   
	printf("Reverse of the list is :- \n");
	print();
}
void search()
{
	int search,n=0,f=0;
	printf("Enter an element to be searched in the list :- \n");
	scanf("%d",&search);
	struct node *p=start;
	do{
		n++;
		if(p->data==search)
		{
			printf("Your element present at %d position in the list !\n",n);
			f++;
			break;
		}
		p=p->next;
	}while(p!=NULL);
	if(f==0)
	{
		printf("No such element present in the list!\n");
	}
}
