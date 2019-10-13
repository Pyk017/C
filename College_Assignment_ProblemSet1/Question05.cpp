#include<stdlib.h>
#include<stdio.h>
void printing(int a[], int n){
	int negative=0, positive=0, zero=0;
	for(int i=0; i<n; i++){
		if (a[i] > 0){
			positive += 1;
		}
		else if(a[i] < 0){
			negative += 1;
		}
		else{
			zero += 1;
		}
	}
	printf("\nPositive Fraction is :- %.3f",(float)positive / (float)n);
	printf("\nNegative Fraction is :- %.3f",(float)negative / (float)n);
	printf("\nZero Fraction is :- %.3f",(float)zero / (float)n);
}
int main(){
	int n;
	printf("Enter Range :- ");
	scanf("%d",&n);
	int *a = (int*)malloc(n * sizeof(int));
	printf("Enter elements in the Array :- \n");
	for (int i=0; i<n; i++){
		scanf("%d",(a+i));
	}
	printing(a, n);
	return 0;
}
