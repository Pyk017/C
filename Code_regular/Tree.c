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
int main(){
    int ch, ele;
    while(1){
           printf("\nEnter choice :- \n Press 1 to insert the elements in the Tree:- \n Press 2 to display the elements in the Tree:- \n Press 0 to exit!\n");
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