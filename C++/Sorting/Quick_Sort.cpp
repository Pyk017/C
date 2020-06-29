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

int partition(int ar[], int low, int high){
    int pivot = ar[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(ar[j] < pivot){
            i += 1;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i+1], &ar[high]);
    return i + 1;
}


int* quick_sort(int ar[], int low, int high){
    if(low < high){
        int pi = partition(ar, low, high);
        quick_sort(ar, low, pi - 1);
        quick_sort(ar, pi + 1, high);
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
    p = quick_sort(arr, 0, n - 1);
    print(p, n);
    return 0;
}