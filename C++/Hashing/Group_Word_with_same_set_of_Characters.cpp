#include<bits/stdc++.h>
using namespace std;
#define MAX_CHAR 26;

string getKey(string str){
    bool visited[26] = {false};
    for(int j=0; j<str.length(); j++){
        visited[str[j] - 'a'] = true;
    }
    string key = "";
    for(int j=0; j<26; j++){
        if(visited[j])
            key += (char)('a' + j);
    }
    return key;
}

void grouping(string ar[], int n){
    map<string, vector<int>> m;
    for(int i=0; i<n; i++){
        string temp = getKey(ar[i]);
        m[temp].push_back(i);
    }
    map<string, vector<int>>::iterator it = m.begin();
    while(it != m.end()){
        // cout << it->first << " " << it->second << endl;
        for(auto v =it->second.begin(); v != it->second.end(); v++){
            cout << ar[*v] << ", ";
        }
        cout << endl;
        it++;
    }
}


int main(){
    int n;
    cin >> n;
    string ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    grouping(ar, n);
    return 0;
}