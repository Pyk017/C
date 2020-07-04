#include<bits/stdc++.h>
using namespace std;

int smallestKFreq(int ar[], int n, int k){
    unordered_map<int, int> m;
    for(int i=0; i<n; i++)
        m[ar[i]] += 1;
    int res = INT_MAX;  
    unordered_map<int, int>::iterator it = m.begin();
    while(it != m.end()){
        if(it->second == k){
            res = min(res, it->first);
        }
        it++;
    }
    return (res != INT_MAX) ? res : -1;
}


        // Using Sorting Method
// int dublicate(int ar[], int n, int k){
//     sort(ar, ar + n);
//     int i=0;
//     while(i < n){
//         int j = i + 1, count = 1;
//         while(j < n && ar[j] == ar[i]){
//             count += 1;
//             j += 1;
//         }
//         if(count == k)
//             return ar[i];
//         i += 1;
//     }
//     return -1;
// }


int main(){
    int n, k;
    cin >> n >> k;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    cout << smallestKFreq(ar, n, k) << endl;
    return 0;
}
