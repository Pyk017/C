#include<stdio.h>
#include<stdlib.h>
void sort(int a[], int n){
	int key=0,j;
	for (int i=1; i<n; i++){
		key = a[i];
		j = i-1;
		while(j >=0 && a[j] < key){
			a[j+1] = a[j];
			j -= 1;
		}
		a[j+1] = key;
	}
}
bool check(int n){
	for (int i=2; i<=(n / 2); i++){
		if (n % 2 == 0){
			return false;
		}
	}
	return true;
}
int* sorted(int a[], int n){
	int *b = (int*)malloc(n*sizeof(int));
	int j=0;
	for (int i=0; i<n; i++){
		if (check(a[i])){
			b[j] = a[i];
			j += 1;
		}
	}
	sort(b, j);
	int k=0;
	for (int i=0; i<n; i++){
		if (check(a[i])){
			a[i] = b[k];
			k += 1;
		}
	}
	return a;
}
int main(){
	int n;
	printf("Enter Range :- ",&n);
	scanf("%d",&n);
	int *a = (int*)malloc(n * sizeof(int));
	printf("Enter elements :- \n");
	for (int i=0; i<n; i++){
		scanf("%d",(a+i));
	}
	int *b = sorted(a, n);
	printf("\nNew Array is :- \n");
	for (int i=0; i<n; i++){
		printf("%d	",b[i]);
	}
	return 0;
}
