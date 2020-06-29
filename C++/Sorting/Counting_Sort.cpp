#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void counting_sort(vector<int>& ar){
    int max = *max_element(ar.begin(), ar.end());
    int min = *min_element(ar.begin(), ar.end());
    int range = max - min + 1;
    vector<int>count(range), output(ar.size());
    for(int i=0; i<ar.size(); i++){
        count[ar[i] - min] += 1;
    }
    for(int i=1; i<count.size(); i++){
        count[i] += count[i - 1];
    }
    for(int i=ar.size() - 1; i>=0; i--){
        output[count[ar[i] - min] - 1] = ar[i];
        count[ar[i] - min] -= 1;
    }
    for(int i=0; i<ar.size(); i++){
        ar[i] = output[i];
    }
}

void print(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    counting_sort(arr);
    print(arr);
    return 0;
}