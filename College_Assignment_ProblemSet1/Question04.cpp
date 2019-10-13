#include<stdlib.h>
#include<stdio.h>
int min(int a[], int n){
	int m = 0;
	for (int i=1; i<n; i++){
		if (a[m] > a[i]){
			m = i;
		}
	}
	return a[m];
}
int main(){
	int n;
	printf("Enter range :- ");
	scanf("%d",&n);
	int* a = (int*)malloc(n*sizeof(int));
	printf("Enter elements in the Array :- \n");
	for (int i=0; i<n; i++){
		scanf("%d",(a+i));
	}
	int mini = min(a, n);
	int count = 0, i=0;
	for(i=0; i<n; i++){
		if (a[i] % mini == 0){
			count += 1;
		}
	}
	if (count == n){
		printf("Element which divides all is :- %d",mini);
	}
	else{
		printf("\n -1");
	}
	return 0;
}
