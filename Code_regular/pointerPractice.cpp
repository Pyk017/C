#include<stdio.h>
#include<stdlib.h>
int main(){
	
//	Method 1. Using Single Pointer
//	int r=3, c=4;
//	int *arr = (int*)malloc(r * c *sizeof(int));
//	int i,j,count=0;
//	for (int i=0; i<r; i++){
//		for (int j=0; j<c; j++){
//			*(arr + c*i + j) = count;
//			count += 1;
//		}
//	}
//	for (int i=0; i<r; i++){
//		for (int j=0; j<c; j++){
//			printf("%d	",*(arr + c*i +j));
//		}
//	}

//	Method2. Using an Array of Pointers
	int r=3, c=4, count=0;
	int **arr = (int **)malloc(r * sizeof(int *)) ;
	for (int i=0; i<r; i++){
		*(arr + i) = (int*)malloc(c * sizeof(int));
	}
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			*(*(arr + i) + j) = count;
			count += 1;
		}
	}
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			printf("%d	",*(*(arr + i) + j));
		}
	}
	
	return 0;
}
