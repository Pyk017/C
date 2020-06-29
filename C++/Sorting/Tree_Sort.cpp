#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

struct Node{
    int key;
    struct Node *left, *right;
};

struct Node *newnode(int item){
    struct Node *temp = new Node;
    temp->key = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void store_sorted(Node *root, int arr[], int &i){
    if(root != NULL){
        store_sorted(root->left, arr, i);
        arr[i++] = root->key;
        store_sorted(root->right, arr, i);
    }
}

Node* insert(Node *node, int key){
    if(node == NULL) return newnode(key);
    if(key < node->key)
        node->left = insert(node->left, key);
    else if(key > node->key)
        node->right = insert(node->right, key);
    return node;
}

void tree_sort(int arr[], int n){
    struct Node *root = NULL;
    root = insert(root, arr[0]);
    for(int i=1; i<n; i++){
        insert(root, arr[i]);
    }
    int i=0;
    store_sorted(root, arr, i);
}

void print(int ar[], int n){
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    tree_sort(arr, n);
    print(arr, n);

    return 0;
}