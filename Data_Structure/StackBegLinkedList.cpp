#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=NULL;
	temp->next=NULL;
	return temp;
}
void push();
void pop();
void print();
void peep();
int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter choice \nEnter (1) to enter number in the Stack.\nEnter (2) to print the Stack.\nEnter (3) to Delete an element from the Stack.\nEnter (4) to Peep-out the top element.\nEnter (5) to exit.\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter element in the Stack :- \n");
				push();
				break;
			case 2:
				print();
				break;
			case 3:
				pop();
				break;
			case 4:
				peep();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Invalid INput!");
				break;
		}
	}
	return 0;
}
void push()
{ 
	struct node *f=getNode();
	scanf("%d",&f->data);
	f->next=top;
	top=f;
}
void print()
{
	struct node *p;
	p=top;
	while(p!=NULL)
	{
		printf(" %d",p->data);
		p=p->next;
	}
}
void pop()
{
	if(top!=NULL)
	{
		struct node *p=top;
		top=top->next;
		free(p);
	printf("\nPopping Done!\n");
	}
	else
	{
		printf("Stack UnderFlow!");
	}
}
void peep()
{
	if(top!=NULL)
	{
	printf("Peep-out element is :-  %d  ",top->data);
    }
    else
    {
    	printf("No element present in the Stack!");
	}
}
