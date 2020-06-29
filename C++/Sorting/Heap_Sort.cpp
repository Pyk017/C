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

void heapify(int ar[], int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l < n && ar[l] > ar[largest]){
        largest = l;
    }
    if(r < n && ar[r] > ar[largest]){
        largest = r;
    }
    if(largest != i){
        swap(&ar[i], &ar[largest]);
        heapify(ar, n, largest);
    }
}

int* heap_sort(int ar[], int n){
    for(int i=n/2; i>=0; i--){
        heapify(ar, n, i);
    }
    for(int i = n-1; i>=0; i--){
        swap(&ar[0], &ar[i]);
        heapify(ar, i, 0);
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
    p = heap_sort(arr, n);
    print(p, n);
    return 0;
}