#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int key;
        Node* left, *right;
        Node(int x){
            key = x;
            left = right = NULL;
        }
};

void insert(Node* temp, int data){
    if(temp == NULL){
        cout << temp->key << endl;
        temp = new Node(data);
        return;
    }
        
    queue<Node*> q;
    q.push(temp);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(!temp->left){
            temp->left = new Node(data);
            break;
        }
        else{
            q.push(temp->left);
        }

        if(!temp->right){
            temp->right = new Node(data);
            break;
        }
        else{
            q.push(temp->right);
        }
    }
}


void display(Node* root){
    if(!root)
        return
    display(root->left);
    cout << root->key << " ";
    display(root->right);
}

int main(){
    int n;
    cin >> n;
    Node* root = NULL;
    int data;
    for(int i=0; i<n; i++){
        cin >> data;
        insert(root, data);
        cout << root->key << endl;
    }
    display(root);
    return 0;
}

