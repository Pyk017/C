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
	int v, e, source, destination;
	printf("Enter Number of Vertices :- \n");
	scanf("%d", &v);
	int matrix[50][50];
	init(matrix, v);
	for (int i=0; i<e; i++){
		printf("Enter Source and Destination:- \n");
		scanf("%d %d", &source, &destination);
		add_edge(matrix, source, destination);
	}
	printf("Adjacency Matrix is :- \n");
    print_matrix(matrix, v);
	return 0;
}
