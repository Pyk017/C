#include<bits/stdc++.h>

using namespace std;

bool dublicate(int ar[], int n, int k){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        if(s.find(ar[i]) != s.end())
            return true;
        s.insert(ar[i]);
        if(i >= k)
            s.erase(ar[i - k]);
    }
    return false;
}


// bool dublicate(int ar[], int n, int k){     // Own Solution
//     set<int> s;
//     for(int i=0; i<=k; i++){
//         s.insert(ar[i]);
//     }
//     int j=0;
//     for(int i=k+1; i<n; i++){
//         if(s.size() != k + 1)
//             return true;
//         int x = ar[j];
//         s.erase(x);
//         s.insert(ar[i]);
//         j += 1;
//     }
//     if(s.size() != k + 1)
//             return true;
//     return false;
// }

int main(){
    int n, k;
    cin >> n >> k;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];
    string res = (dublicate(ar, n, k) == true) ? "true" : "false";
    cout << res << endl;
    return 0;
}