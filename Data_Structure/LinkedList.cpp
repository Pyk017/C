#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *start;
	int m,n;
	start=(struct node*)malloc(sizeof(struct node));
	printf("ENter a data element :- \n");
	scanf("%d",&m);
	start->data=m;
	start->next=NULL;
	printf("ENter a data element :- \n");
	scanf("%d",&n);
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=NULL;
	start->next=temp;
	printf("%d",start->data);
}
