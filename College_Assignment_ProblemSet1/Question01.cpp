#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sum_on_division(int arr[], int n){
	int sum = arr[0];
	for (int i=1; i<n; i++){
		sum += (int)arr[i] / arr[i-1];
	}
	return sum;
}
int main(){
	int n;
	printf("Enter range of element :- ");
	scanf("%d",&n);
	printf("Enter elements in the Array :- \n");
	int *arr = (int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Total Sum is :- %d",sum_on_division(arr, n));
	return 0;
}
