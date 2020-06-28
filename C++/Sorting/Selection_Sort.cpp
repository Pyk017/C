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

int* selection_sort(int ar[], int size){
    int min = 0;
    for(int i=0; i<size-1; i++){
        min = i;
        for(int j=i+1; j<size; j++){
            if(ar[min] > ar[j]){
                min = j;
            }
        }
        swap(&ar[min], &ar[i]);
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
    p = selection_sort(arr, n);
    print(p, n);
    return 0;
}