#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    int n, m;
    printf("Enter number of Vertices and Edges in the Graph :- ");
    scanf("%d %d", &n, &m);
    printf("\nEnter the pairs of vertices connected by the edges. \n");
    int v, e;
    int matrix[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matrix[i][j] = 0;
        }
    }
    
    for(int i = 0; i<m; i++){
        scanf("%d %d", &v, &e);
        matrix[v - 1][e - 1] = 1;
        matrix[e - 1][v - 1] = 1;
        add_edge(v, e, n, m, matrix);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}