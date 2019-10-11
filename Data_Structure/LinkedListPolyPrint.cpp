#include<stdio.h>
#include<stdlib.h>
struct node{
	int coef;
	int pow;
	struct node *next;
};
struct node *start=NULL,*l=NULL;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->coef=NULL;
	temp->pow=NULL;
	temp->next=NULL;
	return temp;
}
void append();
void print();
int main()
{
	start=getNode();
	l=start;
	int ch;
	while(1)
	{
		printf("\nEnter Choice :- \n(1) to enter contents :- \n(2) to print polynomial :-\n(3) to exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
				case 2:
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
void append()
{
	struct node *f;
	f=getNode();
	printf("Enter Coefficient of the Variable :- \n");
	scanf("%d",&f->coef);
	printf("Enter power of variable :- \n");
	scanf("%d",&f->pow);
	l->next=f;
	l=f;
	if(start->coef==NULL)
	{
		start=start->next;
	}
}
void print()
{
	printf("\nYour Polynomial is :- \n");
	struct node *p=start;
	while(p!=NULL)
	{
		printf(" %dx^%d +",p->coef,p->pow);
		p=p->next;
	}
	printf("\b = 0");
}
