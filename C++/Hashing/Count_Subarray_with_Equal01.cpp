#include<bits/stdc++.h>
using namespace std;

int printing(int ar[], int n){
    unordered_map<int, int> m;
    int curr_sum = 0;
    for(int i=0; i<n; i++){
        curr_sum += (ar[i] == 0) ? -1 : ar[i];
        m[curr_sum] += 1;
    }
    int count = 0;
    unordered_map<int, int>::iterator it = m.begin();
    while(it!=m.end()){
        cout << it->first << " " << it->second << endl;
        if(it->second > 1)
            count += ((it->second * (it->second - 1)) / 2);
    }
    if(m.find(0) != m.end()){
        count += m[0];
    }
    return count;
}


int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int result = printing(ar, n);
    cout << result << endl;
    return 0;
}