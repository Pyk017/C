#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;


void bucket_sort(float ar[], int n){
    vector<float> b[n];
    for(int i=0; i<n; i++){
        int bi = n * ar[i];
        b[bi].push_back(ar[i]);
    }
    for(int i=0; i<n; i++){
        sort(b[i].begin(), b[i].end());
    }
    int index = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<b[i].size(); j++){
            ar[index++] = b[i][j];
        }
    }
}

void print(float ar[], int n){
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
}


int main(){
    int n;
    cin >> n;
    float ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    bucket_sort(ar, n);
    print(ar, n);
    return 0;
}