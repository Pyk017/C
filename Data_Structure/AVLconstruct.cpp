#include<stdlib.h>
#include<stdio.h>
typedef struct node{
	int data,height,bf;
	struct node *left,*right,*parent;
}node;
node *root=NULL;int hl=-1,hr=-1;
node* getNode()
{
	struct node *temp=(node*)malloc(sizeof(node));
	temp->data=temp->bf=temp->height=0;
	temp->left=NULL;
	temp->right=NULL;
	temp->parent=NULL;
	return temp;
}
node* LeftRotate(node *p)
{
    node *q=p->right;
	p->right=q->left;
	q->left=p;
	q->parent=p->parent;
	if(p==root)
	{
		q=root;
	}
	else
	{
		if(p==p->parent->left)
		{
			p->parent->left=q;
		}
		else
		{
			p->parent->right=q;
		}
	}
	p->parent=q;
	return q;
}
node* RightRotate(node *p)
{
    node *q=p->left;
	p->left=q->right;
	q->right=p;
	q->parent=p->parent;
	if(p==root)
	{
		q=root;
	}
	else
	{
		if(p==p->parent->left)
		{
			p->parent->left=q;
		}
		else
		{
			p->parent->right=q;
		}
	}
	p->parent=q;
	return q;
}
int height(node *h)
{
	if(h==NULL)
	{
		return -1;
	}
	else
	{
		hl=height(h->left);
		hr=height(h->right);
		if(hl>hr)
		    return (hl+1);
		else
		   return (hr+1);
	}
}
int bf(node *p)
{
	p->bf=height(p->left)-height(p->right);
	return p->bf;
}
node* insert(node *m,node *l)
{
	if(m==NULL)
	{
		return l;
	}
	else
	{
        if (l->data < m->data)
	    {
            l->parent=m;
            m->left=insert(m->left,l);
	    }
	    else if(l->data > m->data)
	    {
		    l->parent=m;
		    m->right=insert(m->right,l);
	    }
        else
	    {
		    return m;
	    }
    }
}
void create()
{
	node *l=getNode();
	printf("Enter Number :- \n");
	scanf("%d",&l->data);
	if(root==NULL)
	{
		root=l;
	}
	else
	{
	    insert(root,l);	
	    node *p=l->parent;
	    while(p!=NULL && (p->bf==1 || p->bf==0 || p->bf==-1))
	    {
	    	p=p->parent;
		}
		if(p!=NULL)
		{
			if(p->bf>1 && p->right==NULL)
			{
				RightRotate(p);
			}
			if(p->bf<-1 && p->left==NULL)
			{
				LeftRotate(p);
			}
			if(p->bf>1 && p->left->bf==-1)
			{
				LeftRotate(p->left);
				RightRotate(p);
			}
			if(p->bf>1 && p->right->bf==1)
			{
				RightRotate(p->right);
				LeftRotate(p);
			}
		}
	}
}
node* printIn(node *p)
{
	if(p==NULL)
	    return p;
	else
        printIn(p->left);
        p->height=height(p);
	    p->bf=bf(p);
        printf(" %d(h->%d)(bf->%d)--->",p->data,p->height,p->bf);
        printIn(p->right);
}
node* printPre(node *p)
{
	
	if(p==NULL)
	    return p;
	else
	    p->height=height(p);
	    p->bf=bf(p);
	    printf(" %d(h->%d)(bf->%d)--->",p->data,p->height,p->bf);
	    printPre(p->left);
	    printPre(p->right);
}
node* printPost(node *p)
{
	
	if(p==NULL)
	    return p;
	else
	    printPost(p->left);
	    printPost(p->right);
	    p->height=height(p);
	    p->bf=bf(p);
	    printf(" %d(h->%d)(bf->%d)--->",p->data,p->height,p->bf);
}
node* search(node *p,int key)
{
	if(p->data==key || p==NULL)
	{
		return p;
	}
	else if(p->data > key)
	{
		return search(p->left,key);
	}
	else
	{
		return search(p->right,key);
	}
}
void searchi()
{
	int val;
	printf("Enter value to be Searched in the Tree :- \n");
	scanf("%d",&val);
	node *l=search(root,val);
	if(l->data==val)
	{
		printf("Element Found!!\n");
	}
	else
	{
		printf("Element not Found!\n");
	}
}
void display()
{
	printf("\nEnter the form of you want to see your Tree to be :- \n");
	int ch;
	while(1)
	{
		printf("\nPress (1) to view your Tree as Pre-Order form.\nPress (2) to view your Tree as In-Order form.\nPress (3) to view your Tree as Post-Order form.\nPress (4) to return to the main Menu.\nPress (5) to exit instantly!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printPre(root);
				break;
			case 2:
				printIn(root);
				break;
			case 3:
				printPost(root);
				break;
			case 4:
				return;
			case 5:
				exit(0);
				break;
			default:
				printf("Error!! Please enter in valid range.\n");
				break;
		}
	}
}
node* minValue(node* s)
{
	while(s->left!=NULL)
	{
		s=s->left;
	}
	return s;
}
node* successor(node *s)
{
	if(s->right!=NULL)
	{
		return minValue(s->right);
	}
	else
	{
		node *p=s->parent;
		while(p!=NULL && p->right==s)
		{
			s=p;
			p=p->parent;
		}
		return p;
	}
}
void bst_dlt(node* s,int val)
{
	node *x=search(root,val);
	if(x!=NULL)
	{
		if(x->left==NULL && x->right==NULL)
		{
			if(x==x->parent->left)
			{
				x->parent->left=NULL;
			}
			else
			{
				x->parent->right=NULL;
			}
		}
		else if(x->right!=NULL && x->left==NULL)
		{
			if(x==x->parent->left)
			{
				x->parent->left=x->right;
			}
			else
			{
				x->parent->right=x->right;
			}
			x->right->parent=x->parent;
		}
		else if(x->right==NULL && x->left!=NULL)
		{
			if(x==x->parent->left)
			{
				x->parent->left=x->left;
			}
			else
			{
				x->parent->right=x->left;
			}
			x->left->parent=x->parent;
		}
		else
		{
			node *y=successor(x);
			x->data=y->data;
			bst_dlt(root,y->data);
		}
	}
	else
	{
		printf("Element is not found!\n");
	}
}
void dlt()
{
	int n;
	printf("Enter element to be deleted from the Tree :- \n");
	scanf("%d",&n);
	bst_dlt(root,n);
	printf("\nDeletion Successful!!\n");
}
int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter Choice :- \nPress (1) to insert data in the Tree.\nPress (2) to display the Tree.\nPress (3) to Search an element in the Tree.\nPress (4) to delete an element from the Tree.\nPress (5) to exit!\n");
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
				searchi();
				break;
			case 4:
				dlt();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Inavalid Input!!");
				break;
		}
	}
	return 0;
}
