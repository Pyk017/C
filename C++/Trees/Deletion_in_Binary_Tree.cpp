#include<bits/stdc++.h>
using namespace std;

class Tree{
    public:
    int data;
    Tree *left, *right, *last;

        Tree();
        Tree(int);
        Tree* insert(Tree*, int);
        void display(Tree*);
        Tree* deletion(Tree*, Tree*, int);
};

Tree :: Tree(){
    data = 0;
    left = right = NULL;
}

Tree :: Tree(int value){
    data = value;
    left =  right = NULL;
}

Tree* Tree:: insert(Tree *root, int value){
    if(!root)
        return new Tree(value);
    
    queue<Tree*> q;
    q.push(root);
    Tree *temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(!temp->left){
            temp->left = new Tree(value);
            last = temp->left;
            break;
        }
        else
            q.push(temp->left);

        if(!temp->right){
            temp->right = new Tree(value);
            last = temp->right;
            break;
        }
        else
            q.push(temp->right);
    }
    
    return root;
}

void Tree:: display(Tree *root){
    if(root != NULL){
        display(root->left);
        cout << root->data << " ";
        display(root->right);
    }
}

Tree* Tree:: deletion(Tree *root, Tree *target, int key){
    if(!root)
        return NULL;
    
    if(root->left == NULL && root->right == NULL){
        if(root->data == key)
            return NULL;
        else
            return root;
    }

    queue<Tree*> q;
    q.push(root);
    Tree *temp, *key_node = NULL;

    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(temp->data == key)
            key_node = temp;
        
        if(temp->left)
            q.push(temp->left);
        
        if(temp->right)
            q.push(temp->right);

    }

    if(key_node){
        int t = key_node->data;
        key_node->data = target->data;
        target->data = t;
        delete (target);
    }
    return root;
}

int main(){
    int n;
    cin >> n;
    Tree tree, *root=NULL;
    for(int i=0; i<n; i++){
        int data;
        cin >> data;
        root = tree.insert(root, data);
    }
    
    cout << "Binary Tree Created!" << endl;
    tree.display(root);
    
    int key;
    cout << "Enter Element to delete from the Tree :- " << " ";
    cin >> key;
    
    root = tree.deletion(root, tree.last, key);
    cout << "Deletion in Binary Tree is Successful!" << " ";
    tree.display(root);

    return 0;
}