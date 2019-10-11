#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *next;
};
struct node *top=NULL,*l=NULL;
struct node* getNode()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=NULL;
	temp->next=NULL;
	return temp;
}
void create();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter choice :- \n(1) to enter data in the stack :- \n(2) to display the sequence :- \n(3) to exit!!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("\nInvalid Input!!\n");
				break;
		}
	}
	return 0;
}
void create()
{
	printf("Enter Bracket :- \n");
	l=getNode();
	scanf("%c",&l->data);
	l->next=top;
	top=l;
}
