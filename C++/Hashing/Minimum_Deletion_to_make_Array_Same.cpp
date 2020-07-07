#include<bits/stdc++.h>
using namespace std;

int min_delete(int ar[], int n){
    unordered_map<int, int> m;
    for(int i=0; i<n; i++)
        m[ar[i]]++;
    unordered_map<int, int>::iterator it = m.begin();
    int max = 0;
    while(it != m.end()){
        if(max < it->second){
            max = it->second;
        }
        it++;
    }    
    return n - max;
}

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    cout << min_delete(ar, n) << endl;
    return 0;
}