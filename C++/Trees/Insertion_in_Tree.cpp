#include<bits/stdc++.h>
using namespace std;

class BST{
    int data;
    BST *left, *right;

    public:
        BST();
        BST(int);
        BST* insert(BST*, int);
        void inorder(BST*);
};

BST :: BST(){
    data = 0;
    left = NULL;
    right = NULL;
}

BST :: BST(int value){
    data = value;
    left = right = NULL;
}

BST* BST:: insert(BST* root, int value){
    if(!root){
        return new BST(value);
    }
    if(value > root->data){
        root->right = insert(root->right, value);
    }
    else{
        root->left = insert(root->left, value);
    }
    return root;
}

void BST:: inorder(BST* root){
    if(root != NULL){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main(){
    BST tree, *root=NULL;
    int n;
    cin >> n;
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        root = tree.insert(root, temp);
    }
    cout << "Binary Tree Created!" << endl;
    tree.inorder(root);
    return 0;
}