#include<stdio.h>
#include<stdlib.h>

void print_matrix(int matrix[][50], int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			printf("%d  ", matrix[i][j]);
		}
		printf("\n");
	}
}

void add_edge(int matrix[][50], int source, int destination){
	matrix[source][destination] = 1;
}

void init(int matrix[][50], int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			matrix[i][j] = 0;
		}
	}
}

int main(){
	int n;
	printf("Enter Number of Vertices :- \n");
	scanf("%d", &n);
	int matrix[50][50];
	init(matrix, n);
	add_edge(matrix,0,1);
    add_edge(matrix,0,2);
    add_edge(matrix,0,3);
    add_edge(matrix,1,3);
    add_edge(matrix,1,4);
    add_edge(matrix,2,3);
    add_edge(matrix,3,4);
    print_matrix(matrix, n);
	return 0;
}
