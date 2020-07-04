#include<bits/stdc++.h>

using namespace std;

void triplets(int arr[], int n){
    bool  flag = false;
    for(int i=0; i<n-1; i++){
        unordered_set<int> s;
        for(int j=i+1; j<n; j++){
            int x = -(arr[i] + arr[j]);
            if(s.find(x) != s.end()){
                cout << x << " " << arr[i] << " " << arr[j] << endl;
                flag = true;
            }
            else{
                s.insert(arr[j]);
            }
        }
    }
    if(flag == false)
        cout << "NO triplets Found!" << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    triplets(arr, n);
    return 0;
}