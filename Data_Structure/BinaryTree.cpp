#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *leftChild,*rightChild,*parent;
}Node;
Node *root=NULL,*c=NULL,*p=NULL;
Node* getNode()
{
	Node* temp=(Node*)malloc(sizeof(Node));
	temp->data=0;
	temp->leftChild=NULL;
	temp->rightChild=NULL;
	temp->parent=NULL;
	return temp;
}
void create();
void display();
void printPreOrder(Node*);
void printInOrder(Node*);
void printPostOrder(Node*);
void search();
void searchIter();
void searchRecur();
Node* searchR(Node*,int);
Node* successor(Node*);
Node* minValue(Node*);
void succ();
void bst_dlt();
void dlt(struct node*);
int main()
{
	int ch;
	while(1)
	{
		printf("Enter choice :- \nPress (1) to enter data in the Tree.\nPress (2) to display the element of the Tree.\nPress (3) to search an element in the list.\nPress (4) to find the Successor of the Number.\nPress (5) to delete an element from the Tree.\nPress (6) to exit!\n");
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
				search();
				break;
			case 4:
				succ();
				break;
			case 5:
				bst_dlt();
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Invalid Input!!");
				break;
		}
	}
	return 0;
}
void create()
{
	Node* l=getNode();
	printf("Enter Number :- \n");
	scanf("%d",&l->data);
	if(root==NULL)
	{
		root=l;
	}
	else
	{
		c=root;
		while(1)
		{
			p=c;
			if(l->data < p->data)
			{
				c=c->leftChild;
				if(c==NULL)
				{
					p->leftChild=l;
					l->parent=p;
					return;
				}
			}
			else
			{
				c=c->rightChild;
				if(c==NULL)
				{
					p->rightChild=l;
					l->parent=p;
					return;
				}
			}
		}
	}
}
void display()
{
	int ch;
	printf("Enter the form of data you want to see :- \n");
	while(1)
	{
	    printf("\nPress (1) to view data in Pre-Order form.\nPress (2) to view data in In-Order form.\nPress (3) to view data in Post-Order form.\nPress (4) to return to the Main_Menu.\nPress (5) to exit instantly!\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:
	    		printf("Your Tree in Pre-Order form is :- \n");
	    		printPreOrder(root);
	    		break;
	    	case 2:
	    		printf("Your Tree in In-Order form is :- \n");
				printInOrder(root);
	    		break;
	    	case 3:
	    		printf("Your Tree in Post-Order form is :- \n");
				printPostOrder(root);
	    		break;
	    	case 4:
	    		return;
	    	default:
	    		printf("Enter valid range Option. Your option of display is Invalid.\n");
	    		break;
		}
	}
}
void printPreOrder(Node* node)
{
	if(node==NULL)
	    return;
	else
	   printf(" %d",node->data);
	   printPreOrder(node->leftChild);
	   printPostOrder(node->rightChild);
}
void printInOrder(Node* node)
{
	if(node==NULL)
	    return;
	else
	   printInOrder(node->leftChild);
	   printf(" %d",node->data);
	   printInOrder(node->rightChild);
}
void printPostOrder(Node* node)
{
	if(node==NULL)
	    return;
	else
	   printPostOrder(node->leftChild);
	   printPostOrder(node->rightChild);
	   printf(" %d",node->data);
}
void searchIter()
{
	int val;
	printf("Enter an element to be Searched in the list :- \n");
	scanf("%d",&val);
	Node* p=root;
	if(p->data==val)
	{
		printf("\nNode Found at root node !\n");
	}
	else
	{
	    while(p->data!=val && p!=NULL)
	    {
		    if(p->data>val)
		    {
		    	p=p->leftChild;
			}
			else
			{
				p=p->rightChild;
			}
	    }
	    if(p->data==val)
	    {
	    	printf("\nNode Found!!\n");
		}
		else
		{
			printf("\nNode not Found!!\n");
		}
    }
}
void search()
{
	printf("Enter the technique to search :- \n");
	int ch;
	while(1)
	{
		printf("Press (1) to search using Iterative_Method.\nPress (2) to search using Recursive_Method.\nPress (3) top return to the Main_Menu.\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				searchIter();
				break;
			case 2:
				searchRecur();
				break;
			case 3:
				return;
			default:
				printf("Invalid option. Make sure your option is scheduled according to be option mentuioned above.\n");
				break;
		}
	}
}
void searchRecur()
{
	int val;
	printf("Enter an element to be Seached in the Tree :- \n");
	scanf("%d",&val);
	Node *p=searchR(root,val);
	if(p==NULL)
	{
		printf("Node not Found!\n");
	}
	if(p->data==val)
	{
		printf("Node Found!\n");
	}
}
Node* searchR(Node* node,int val)
{
	if(node==NULL)
	{
		return NULL;
	}
	else if(node->data > val)
	{
		searchR(node->leftChild,val);
	}
	else if(node->data < val)
	{
		searchR(node->rightChild,val);
	}
	else
	{
		return node;
	}
}
void succ()
{
	int n;
	printf("\nEnter number to find the Successor :- \n");
	scanf("%d",&n);
	struct node* s=searchR(root,n);
	struct node* m=successor(s);
	printf(" Successor of your number is :- %d\n",m->data);
}
struct node* successor(struct node* s)
{
	if(s->rightChild!=NULL)
	{
		return minValue(s->rightChild);
	}
	else
	{
		struct node *p=s->parent;
		while(p!=NULL && p->rightChild==s)
		{
			s=p;
			p=p->parent;
		}
		return p;
	}	
}
struct node* minValue(struct node* n)
{
	while(n->leftChild!=NULL)
	{
		n=n->leftChild;
	}
	return n;
}
void bst_dlt()
{
	int d;
	printf("Enter element to be deleted :- \n");
	scanf("%d",&d);
	struct node* x=searchR(root,d);
	dlt(x);
	printf("Deletion successful!!\n");
}
void dlt(struct node *x)
{
	if(x!=NULL)
	{
		if(x->leftChild==NULL && x->rightChild==NULL)
		{
			if(x==x->parent->leftChild)
			{
				x->parent->leftChild=NULL;
			}
			else
			{
				x->parent->rightChild=NULL;
			}
		}
		else if(x->rightChild!=NULL && x->leftChild==NULL)
		{
			if(x==x->parent->leftChild)
			{
				x->parent->leftChild=x->rightChild;
			}
			else
			{
				x->parent->rightChild=x->rightChild;
			}
			x->rightChild->parent=x->parent;
		}
		else if(x->rightChild==NULL && x->rightChild!=NULL)
		{
			if(x==x->parent->leftChild)
			{
				x->parent->leftChild=x->rightChild;
			}
			else
			{
				x->parent->leftChild=x->rightChild;
			}
			x->leftChild->parent=x->parent;
		}
		else
		{
			struct node *y=successor(x);
			x->data=y->data;
			dlt(y);
		}
	}
}
