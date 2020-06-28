#include<iostream>
#include<algorithm>
#include<sstream>

using namespace std;

void print(int *ar, int size){
    for(int i=0; i<size; i++){
        cout << *(ar + i) << " ";
    }
}

int* insertion_sort(int ar[], int size){
    int j=0, key=0;
    for(int i=1; i<size; i++){
        j = i - 1;
        key = ar[i];
        while(j >= 0 && ar[j] > key){
            ar[j + 1] = ar[j];
            j -= 1;
        }
        ar[j + 1] = key;
    }
    return ar;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Array before sorting is :- " << " ";
    print(arr, n);
    cout << "\n";
    cout << "Array After sorting is :- " << " ";
    int *p;
    p = insertion_sort(arr, n);
    print(p, n);
    return 0;
}