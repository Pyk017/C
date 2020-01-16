#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int heap_size = 0;
void display(int *ar, int n){
	for(int i=0; i<n; i++){
		printf("%d	", *(ar+i));
	}
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void heapify(int *ar, int i){
	int left = 2*i + 1;
	int right = 2*i + 2;
	int largest = i;
	if(left < heap_size and ar[left] > ar[i]){
		largest = left;
	}
	if(right < heap_size and ar[right] > ar[largest]){
		largest = right;
	}
	if(largest != i){
		swap((ar+i), (ar+largest));
		heapify(ar, largest);
	}
}
void build_heap(int *ar, int n){
	heap_size = n;
	for(int i=((int)floor(n/2)); i>=0; i--){
		heapify(ar, i);
	}
}
void heap_sort(int *ar, int n){
	build_heap(ar, n);
	for(int i=n-1; i>0; i--){
		swap((ar+i), (ar+0));
		heap_size -= 1;
		heapify(ar, 0);
	}
}
int main(){
	int n;
	printf("Enter range :- ");
	scanf("%d", &n);
	printf("Enter elements in the Array :- \n");
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", (a+i));
	}
	heap_sort(a, n);
	printf("Elements after Sorting using Heap Sort is :- \n");
	display(a, n);
	return 0;
}
