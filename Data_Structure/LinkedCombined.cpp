#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void print();
void insertA();
void insertB();
void dlt();
//struct node *start;
struct node *start=(struct node*)malloc(sizeof(struct node));
int main()
{
	int n,m,ch,ch1;
	struct node *last,*temp;
	//start=(struct node*)malloc(sizeof(struct node));
	printf("ENter range of the list :- \n");
	scanf("%d",&n);
	printf("Enter contents in the list :- \n");
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
	printf("Enter your choice whether you want to print the list(1),\n Insert an element in the list(2) \nor Delete a particular element from the list(3)\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			print();
			break;
			case 2:
				printf("You want to enter After(1) or Before(2) a particular node\n");
				scanf("%d",&ch1);
				if(ch1==1)
				{
				    insertA();	
				}
				else if(ch1==2)
				{
					insertB();
				}
				else
				{
					printf("Invalid Input!");
				}
				break;
				case 3:
					dlt();
					break;
					default:
						printf("Your Choice is Invalid!");
						break;
	}
	return 0;
}
 void print()
 {
 	printf("Your List is :- \n");
 	struct node *p;
 	p=start;
 	while(p!=NULL)
 	{
 		printf(" %d",p->data);
 		p=p->next;
	 }
 }
 void insertA()
 {
 	int val,pos;
 	struct node *po,*temp;
 	printf("Enter the element you want to insert in the list:- \n");
 	scanf("%d",&val);
 	printf("Enter the position where you want to insert the data\n");
 	scanf("%d",&pos);
 	po=start;
 	for(int i=1;i<pos;i++)
 	{
 		po=po->next;
	}
	if(po!=NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node*));
		temp->data=val;
		temp->next=po->next;
		po->next=temp;
	}
	else
	{
		printf("\nNode not found!");
	}
	printf("\nYour new List is :- \n");
	po=start;
	while(po!=NULL)
	{
		printf(" %d",po->data);
		po=po->next;
	}
 }
 void insertB()
 {
 	struct node *q=NULL,*p,*temp;
 	int val,pos;
 	printf("Enter the element you want to insert in the list:- \n");
 	scanf("%d",&val);
 	printf("Enter the position where you want to insert the data\n");
 	scanf("%d",&pos);
 	p=start;
 	for(int i=1;i<pos;i++)
 	{
 	    q=p;
 	    p=p->next;
	}
	if(p!=NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=val;
		if(p==start)
		{
			temp->next=p;
			start=temp;
		}
		else
		{
			temp->next=p;
			q->next=temp;
		}
	}
	p=start;
	printf("Modified Content of the list is :- \n");
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
 }
 void dlt()
{
	printf("\nEnter a element to be deleted in the List :- \n");
	int d;
	scanf("%d",&d);
	struct node *p,*q;
	p=start;
	q=NULL;
	while(p->data!=d  && p!=NULL)
	{
		q=p;
		p=p->next;
	}
	if(p!=NULL)
	{
		if(p==start)
		{
			start=p->next;
		}
		else
		{
			q->next=p->next;
		}
	}
	else
	{
		printf("Node not Found!");
	}
	free(p);
	printf("Updated list is :- \n");
	p=start;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}		
}
 
