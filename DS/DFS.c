#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Graph{
    int size;
    struct Node** array;
    int* visited;
};

struct Node* create_node(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

struct Graph* create_graph(int n){
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->array = (struct Node**)malloc(n * sizeof(struct Node*));
    graph->visited = (int*)malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        graph->array[i] = NULL;
        graph->visited = 0;
    }
    return graph;
}

void add_edge(struct Graph* graph, int src, int dest){
    struct Node* temp = create_node(src);
    temp->next = graph->array[dest];
    graph->array[dest] = temp;

    temp = create_node(dest);
    temp->next = graph->array[src];
    graph->array[src] = temp;
}

void print_graph(struct Graph* graph){
    for(int i=0; i<graph->size; i++){
        struct Node* temp = graph->array[i];
        printf("Adjacency List of vertex %d\n head ", i);
        while(temp != NULL){
            printf("-> %d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}


int main(){
    int n, m;
    printf("Enter the number of Vertices and Edges :- ");
    scanf("%d %d", &n, &m);
    struct Graph* graph = create_graph(n);
    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        add_edge(graph, a-1, b-1);    
    }
    print_graph(graph);
    return 0;
}