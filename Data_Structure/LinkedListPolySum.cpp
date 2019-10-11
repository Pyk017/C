 #include<stdio.h>
#include<stdlib.h>
struct node1{
	int coef;
	int exp;
	struct node1 *next;
};
struct node1 *start1=NULL,*l1=NULL;
struct node2{
	int coef;
	int exp;
	struct node2 *next;
};
struct node2 *start2=NULL,*l2=NULL;
struct node3{
	int coef;
	int exp;
	struct node3 *next;
};
struct node3 *start3=NULL,*l3=NULL;
struct node1* getNode1()
{
	struct node1 *temp=(struct node1*)malloc(sizeof(struct node1));
	temp->coef=NULL;
	temp->exp=NULL;
	temp->next=NULL;
	return temp;
}
struct node2* getNode2()
{
	struct node2 *tmp=(struct node2*)malloc(sizeof(struct node2));
	tmp->coef=NULL;
	tmp->exp=NULL;
	tmp->next=NULL;
	return tmp;
}
struct node3* getNode3()
{
	struct node3 *tp=(struct node3*)malloc(sizeof(struct node3));
	tp->coef=NULL;
	tp->exp=NULL;
	tp->next=NULL;
	return tp;
}
void append1();
void print1();
void append2();
void print2();
void sum();
void print3();
int main()
{
	start1=getNode1();
	l1=start1;
	start2=getNode2();
	l2=start2;
	start3=getNode3();
	l3=start3;
	int ch;
	while(1)
	{
		printf("\nEnter Choice :- \n(1) to enter contents in polynomial 1 :- \n(2) to enter contents in the polynomial 2 :- \n(3) to print polynomial 1 :-\n(4) to print polynomial 2:- \n(5) to Sum-up the two polynomials :- \n(6) to print the resultant polynomial :- \n(7) to exit.\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append1();
				break;
			case 2:
				append2();
				break;
			case 3:
				print1();
				break;
			case 4:
				print2();
				break;
			case 5:
				sum();
				break;
			case 6:
				print3();
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
void append1()
{
	struct node1 *f;
	f=getNode1();
	printf("Enter Coefficient of the Variable :- \n");
	scanf("%d",&f->coef);
	printf("Enter power of variable :- \n");
	scanf("%d",&f->exp);
	l1->next=f;
	l1=f;
	if(start1->coef==NULL)
	{
		start1=start1->next;
	}
}
void append2()
{
	struct node2 *g;
	g=getNode2();
	printf("Enter Coefficient of the Variable :- \n");
	scanf("%d",&g->coef);
	printf("Enter power of variable :- \n");
	scanf("%d",&g->exp);
	l2->next=g;
	l2=g;
	if(start2->coef==NULL)
	{
		start2=start2->next;
	}
}
void print1()
{
	printf("\nYour First Polynomial is :- \n");
	struct node1 *p=start1;
	while(p!=NULL)
	{
		printf(" %dx^%d +",p->coef,p->exp);
		p=p->next;
	}
	printf("\b = 0");
}
void print2()
{
	printf("\nYour Second Polynomial is :- \n");
	struct node2 *p=start2;
	while(p!=NULL)
	{
		printf(" %dx^%d +",p->coef,p->exp);
		p=p->next;
	}
	printf("\b = 0");
}
void sum()
{
	struct node1 *p=start1;
	struct node2 *q=start2;
	struct node3 *r=start3;
	while(p!=NULL && q!=NULL)
	{
		struct node3 *temp=getNode3();
		if(p->exp == q->exp)
		{
			temp->coef=p->coef + q->coef;
			temp->exp=p->exp;
			r->next=temp;
			r=temp;
			p=p->next;
			q=q->next;
		}
		else if(q->exp > p->exp)
		{
			struct node3 *temp=getNode3();
			temp->coef=q->coef;
			temp->exp=q->exp;
			r->next=temp;
			r=temp;
			q=q->next;
		}
		else
		{
			struct node3 *temp=getNode3();
			temp->coef=p->coef;
			temp->exp=p->exp;
			r->next=temp;
			r=temp;
			p=p->next;
		}
	}
	while(p!=NULL)
	{
		struct node3 *temp=getNode3();
			temp->coef=p->coef;
			temp->exp=p->exp;
			r->next=temp;
			r=temp;
			p=p->next;
	}
	while(q!=NULL)
	{
		struct node3 *temp=getNode3();
			temp->coef=q->coef;
			temp->exp=q->exp;
			r->next=temp;
			r=temp;
			q=q->next;
	}
	start3=start3->next;
	printf("\nSummation is Successful!\n");
}
void print3()
{
	printf("\nYour Resultant Polynomial is :- \n");
	struct node3 *p=start3;
	while(p!=NULL)
	{
		printf(" %dx^%d +",p->coef,p->exp);
		p=p->next;
	}
	printf("\b = 0");
}
