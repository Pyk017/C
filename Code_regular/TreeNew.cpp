#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    struct Node *left, *right, *parent;
    int data;
}node;
node* root = NULL;
node* get_Node(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    temp->parent = NULL;
    return temp;
}
node* insert(node* root, int data){
    if (root == NULL){
        root = get_Node(data);
        printf("%d", root->data);
    }
    else{
        node *temp = get_Node(data);
        node *p = root;
        node *q = NULL;
        while (p != NULL){
            q = p;
            if (data < p->data){
                p = p->left;
            }
            else{
                p = p->right;
            }
        }
        if (q->data > data){
            q->left = temp;
            temp->parent = q;
        } 
        else{
            q->right = temp;
            temp->parent = q;
        }
    }
    return root;
}
void display(node *p){
    if (p != NULL){
        display(p->left);
        printf("%d  ",p->data);
        display(p->right);
    }
}
node* search(node* p, int data){
	if (p == NULL){
		return NULL;
	}
	else if (p->data > data){
		search(p->left, data);
	}
	else if (p->data < data){
		search(p->right, data);
	}
	else{
		return p;
	}
}
node* minValue(node *n){
	while(n->left != NULL){
		n = n->left;
	}
	return n;
}
node* successor(node* root, int data){
	node *suc = search(root, data);
	if (suc->right != NULL){
		return minValue(suc->right);
	}
	else{
		node *p = suc->parent;
		while(p != NULL && suc == p->right){
			suc = p;
			p = p->parent;
		}
	return p;	
	}
}

void del(node *root, int data){
//	printf("\nIn del");
	node *x = search(root, data);
//	printf("	%d", x->data);
	if (x != NULL){
		if (x->left == NULL && x->right == NULL){
			if (x->parent->left == x){
				x->parent->left = NULL;
			}
			else{
				x->parent->right = NULL;
			}
		}
		else if (x->left !=NULL && x->right == NULL){
			if (x == x->parent->right){
				x->parent->right = x->left;
			}
			else{
				x->parent->left = x->left;
			}
		}
		else if(x->left == NULL && x->right != NULL){
			if (x == x->parent->right){
				x->parent->right = x->right;
			}
			else{
				x->parent->left = x->right;
			}
		}
		else{
			node *y = successor(root, x->data);
			x->data = y->data;
			del(root, y->data);
		}
	}
	else{
		printf("\nNo element present for Deletion.\n");
	}
}
int main(){
    int ch, ele;
    node *temp2;
    while(1){
           printf("\nEnter choice :- \n Press 1 to insert the elements in the Tree:- \n Press 2 to display the elements in the Tree:- \n Press 3 to search an elmeent from the Tree.\n Press 4 to find the Successor of any element.\n Press 5 to delete any element from the Tree.\n Press 0 to exit!\n");
           scanf("%d", &ch);
           switch(ch){
                case 1: 
                    printf("Enter element :- \n");
                    scanf("%d",&ele);
                    root = insert(root, ele);
                    break;
                case 2:
                    printf("Elements of the Tree is :- \n");
                    display(root);
                    break;
                case 3:
                	int ele;
                	printf("Enter element :- ");
                	scanf("%d", &ele);
                	temp2 = search(root, ele);
                	if (temp2 == NULL){
						printf("\nSearch Fail. Element not Found!!\n");
					}
					else if (temp2->data == ele){
                		printf("\n Search Successful. Element Found!\n");
					}
                	break;
                case 4:
                	int succ;
					printf("\nEnter element to find its Successor :- ");
                	scanf("%d", &succ);
                	temp2 = successor(root, succ);
                	printf("\nSuccessor of Your Element is :- %d\n", temp2->data);
                	break;
                case 5:
                	int data;
                	printf("\nEnter element to delete :- ");
                	scanf("%d", &data);
                	del(root, data);
                	printf("\nDeletion Successful!\n");
                	display(root);
                	break;
                case 0:
                    exit(0);
                    break;
                default:
                    printf("Invalid Inputs!!");
                    break;
                }             
        }
    return 0;
}
