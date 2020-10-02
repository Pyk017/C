#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int v1, int v2){
    adj[v1].push_back(v2);
    adj[v2].push_back(v1);
}


void print_graph(vector<int> adj[], int n){
    for(int i=0; i<n; i++){
        cout << "Adjacency list of vertex " << i << "\n head ";
        for(auto j: adj[i]){
            cout << "-> " << j;
        }
        printf("\n");
    }
}

int main(){
    int n, m;
    cout << "Enter the number of vertices and Edges in the Graph :- " << endl;
    cin >> n >> m;
    vector<int> adj[n];
    for(int i=0; i<m; i++){
        int v1, v2;
        cin >> v1 >> v2;
        add_edge(adj, v1, v2);
    }
    print_graph(adj, n);
    return 0;
}