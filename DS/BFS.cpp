#include<bits/stdc++.h>

using namespace std;

vector<bool> visited;

void add_edge(vector<int> g[], int v1, int v2){
    g[v1].push_back(v2);
    g[v2].push_back(v1);
}

void bfs(vector<int> g[], int n){
    queue<int> q;
    q.push(n);
    visited[n] = true;

    while(!q.empty()){
        int f = q.front();
        q.pop();

        cout << f << " ";
        
        for(auto i = g[f].begin(); i != g[f].end(); i++){
            if(!visited[*i]){
                q.push(*i);
                visited[*i] = true;
            }
                
        }
    }

}


int main(){
    int n, m;
    cout << "Enter the number of vertices and Edges :- " << " ";
    cin >> n >> m;
    cout << "\n";
    vector<int> g[n];
    cout << "Enter the pair of vertices :- " << endl;
    int a, b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        add_edge(g, a, b);
    }

    visited.assign(n, false);

    for (int i=0; i<n; i++){
        if(!visited[i])
            bfs(g, i);
    }
    return 0;
}
