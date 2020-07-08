#include<bits/stdc++.h>
using namespace std;

// int longest_subarray(int ar[], int n, int k){        // Brute Force Technique
//     int result = 0;
//     for(int i=0; i<n-1; i++){
//         int sum = ar[i];
//         for(int j=i+1; j<n; j++){
//             sum += ar[j];
//             int count = j - i + 1;
//             if(sum % k == 0){
//                 if(result < count)
//                     result = count;
//             }
//         }
//     }
//     return result;
// }


int longest_subarray(int ar[], int n, int k){
    int mod_ar[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += ar[i];
        mod_ar[i] = ((sum % k) + k) % k;
    }
    int max = 0;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        if(mod_ar[i] == 0)
            max = i + 1;
        else if(m.find(mod_ar[i]) == m.end())
            m[mod_ar[i]] = i;
        else
            if(max < i - m[mod_ar[i]])
                max = i - m[mod_ar[i]];
    }
    return max;
}



int main(){
    int n, k;
    cin >> n >> k;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int res = longest_subarray(ar, n, k);
    cout << res << endl;
    return 0;
}