#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct adj_node{
    int data;
    struct adj_node* next;
};

struct adj_list{
    struct adj_node* head;
};

struct Graph{
    int size;
    struct adj_list* array;
};   


struct adj_node* create_node(int data){
    struct adj_node* node = (struct adj_node*)malloc(sizeof(struct adj_node));
    node->data = data;
    node->next = NULL;
    return node;
};

struct Graph* create_graph(int size){
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->size = size;
    graph->array = (struct adj_list*)malloc(size * sizeof(struct adj_list));

    for(int i=0; i<size; i++){
        graph->array[i].head = NULL;
    }
    return graph;
}

struct Graph* add_edge(struct Graph* graph, int src, int dest){
    struct adj_node* node = create_node(dest);
    node->next = graph->array[src].head;
    graph->array[src].head = node;

    node = create_node(src);
    node->next = graph->array[dest].head;
    graph->array[dest].head = node;

    return graph;
}

void print_graph(struct Graph* graph){
    int n = graph->size;
    for(int i=0; i<n; i++){
        struct adj_node* head = graph->array[i].head;
        printf("Adjacency list of vertex %d\n head ", i);
        while(head != NULL){
            printf("-> %d", head->data);
            head = head->next;
        }
        printf("\n");
    }
}


int main(){
    int n, m;
    printf("Enter number of vertices and edges in the graph :- ");
    scanf("%d %d", &n, &m);
    struct Graph* graph = create_graph(n);
    printf("Enter Vertices pair in the graph :- \n");
    for(int i = 0; i<m; i++){
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        graph = add_edge(graph, v1-1, v2-1);
    }
    print_graph(graph);
    return 0;
}