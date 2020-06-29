#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

int get_max(vector<int>& ar){
    int max = ar[0];
    for(int i=1; i<ar.size(); i++){
        if(max < ar[i])
            max = ar[i];
    }
    return max;
}

void count_sort(vector<int>& v, int exp){
    int output[v.size()];
    int i, count[10] = {0};
    for(int i=0; i<v.size(); i++)
        count[(v[i] / exp) % 10] += 1;
    for(int i=1; i<10; i++)
        count[i] += count[i - 1];
    for(int i = v.size() - 1; i>=0; i--){
        output[count[(v[i] / exp) % 10] - 1] = v[i];
        count[(v[i] / exp) % 10] -= 1;
    }
    for(int i=0; i<v.size(); i++){
        v[i] = output[i];
    }
}

vector<int> radix_sort(vector<int>& v){
    int m = get_max(v);
    for(int exp=1; m / exp > 0; exp *= 10){
        count_sort(v, exp);
    }
    return v;
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

    v = radix_sort(v);
    print(v);
    return 0;
}
