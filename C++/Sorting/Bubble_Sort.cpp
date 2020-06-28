#include<iostream>
#include<algorithm>
#include<sstream>

using namespace std;

void print(int *ar, int size){
    for(int i=0; i<size; i++){
        cout << *(ar + i) << " ";
    }
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int* bubble_sort(int ar[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size - i - 1; j++){
            if(ar[j] > ar[j+1]){
                swap(&ar[j], &ar[j+1]);
            }
        }
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
    p = bubble_sort(arr, n);
    print(p, n);
    return 0;
}