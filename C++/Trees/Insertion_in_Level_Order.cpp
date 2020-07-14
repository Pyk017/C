#include<bits/stdc++.h>
using namespace std;

class BST{
    int key;
    BST *left, *right;
    
    public:
        BST();
        BST(int);
        BST* insert(BST*, int);
        void display(BST*);
};

BST :: BST(){
    key = 0;
    left = right = NULL;
}

BST :: BST(int value){
    key = value;
    left = right = NULL;
}

BST* BST:: insert(BST* root, int value){
    if(!root){
        return new BST(value);
    }

    queue<BST*> q;
    q.push(root);

    while(!q.empty()){
        BST* temp = q.front();
        q.pop();

        if(!temp->left){
            temp->left = new BST(value);
            break;
        }
        else
            q.push(temp->left);

        if(!temp->right){
            temp->right = new BST(value);
            break;
        }
        else
            q.push(temp->right);
    }
    return root;
}

void BST:: display(BST* root){
    if(root != NULL){
        display(root->left);
        cout << root->key << " ";
        display(root->right);
    }
}

int main(){
    int n;
    cin >> n;
    BST tree, *root=NULL;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        root = tree.insert(root, temp);
    }
    cout << "Binary Tree Created!" << endl;
    tree.display(root);
    return 0;
}