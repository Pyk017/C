#include<stdio.h>
#include<stdlib.h>

struct adjListNode{
	int data;
	struct adjListNode* next;
};

struct adjList{
	struct adjListNode *head;
};

struct Graph{
	int V;
	struct adjList* array;
};

struct adjListNode* newadjListNode(int data){
	struct adjListNode* newNode = (struct adjListNode*)malloc(sizeof(struct adjListNode));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

struct Graph* createGraph(int V){
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->V = V;
	graph->array = (struct adjList*)malloc(V * sizeof(struct adjList));
	for (int i=0; i<V; i++){
		graph->array[i].head = NULL; 
	}
	return graph;
}

void addEdge(struct Graph* graph, int sour, int data){
	struct adjListNode* newNode = newadjListNode(data);
	newNode->next = graph->array[sour].head;
	graph->array[sour].head = newNode;
	
	newNode = newadjListNode(sour);
	newNode->next = graph->array[data].head;
	graph->array[data].head = newNode;
}

void printGraph(struct Graph* graph){
	for (int i=0; i<graph->V; i++){
		struct adjListNode* list = graph->array[i].head;
		printf("\n Adjacency list of vertex %d\n head ", i);
		while (list != NULL){
			printf("-> %d", list->data);
			list =  list->next;
		}
		printf("\n");
	}
}

int main(){
	int v = 5;
	struct Graph* graph = createGraph(v);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4); 
    addEdge(graph, 1, 2); 
    addEdge(graph, 1, 3); 
    addEdge(graph, 1, 4); 
    addEdge(graph, 2, 3); 
    addEdge(graph, 3, 4);
    printGraph(graph);
	return 0;
}
