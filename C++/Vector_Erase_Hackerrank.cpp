#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<sstream>
#include<algorithm>
#include<cmath>

using namespace std;

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}


int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int q1;
    cin >> q1;
    v.erase(v.begin() + (q1 - 1));
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
    cout << v.size() << endl;
    print(v);
    return 0;
}
