#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}Node;

Node *start=NULL, *l=NULL;
Node* getNode(int value)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = value;
	temp->next = NULL;
	return temp;
}

void insert()
{
	int value;
	printf("\nEnter data :- \n");
	scanf("%d",&value);
	Node *p=getNode(value);
	if (start == NULL)
	{
		start = l = p ;
	}
	else{
		l->next = p;
		l = p;
	}
}
void print()
{
	Node* p = start;
	while(p!=NULL)
	{
		printf ("%d	",p->data);
		p = p->next;
	}
}
int main()
{
	int ch;char cho;
	while(1)
	{
		printf("ENter choice :- \n(1) for entering contents in the list.\n(2) for printing it!.\n(3) To exit immediately!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				do{
					insert();
					printf("\nDo You want to continue [Y / N] ?\n");
					scanf("%c",&cho);		
				}while(cho != 'N');
				break;
			case 2:
				printf("\nYour Linked List is :- \n");
				print();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("\nWrong Input !\n");
				break;
		}
	}
	return 0;
}
