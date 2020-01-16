#include<stdlib.h>
#include<stdio.h>

struct node{
	int dest;
	struct node* next;
};

struct list{
	struct node* head;
};

struct graph{
	int V;
	struct list* array;
};

struct node* get_node(int data){
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->dest = data;
	new_node->next = NULL;
	return new_node;
}

struct graph* create_graph(int v){
	struct graph* new_graph = (struct graph*)malloc(sizeof(struct graph));
	new_graph->V = v;
	new_graph->array = (struct list*)malloc(v * sizeof(struct list));
	for (int i=0; i<v; i++){
		new_graph->array[i].head = NULL;
	}
	return new_graph;
}

void add_edge(struct graph* gra, int source, int destination){
	struct node* temp = get_node(destination);
	temp->next = gra->array[source].head;
	gra->array[source].head = temp;
	
	temp = get_node(source);
	temp->next = gra->array[destination].head;
	gra->array[destination].head = temp;
}

void print_graph(struct graph* Graph){
	for (int i=0; i<Graph->V; i++){
		struct node* p = Graph->array[i].head;
		printf("\n Adjacency list of vertex %d\n head ", i);
		while (p){
			printf("-> %d", p->dest);
			p = p->next;
		}
		printf("\n");
	}
}

int main(){
	printf("Enter total number of Vertices :- \n");
	int v, s, d, e;
	scanf("%d", &v);
	struct graph* Graph = create_graph(v);
	printf("Enter total number of Edges :- \n");
	scanf("%d", &e);
	for (int i=0; i<e; i++){
		printf("Enter Source and Destination :- \n");
		scanf("%d %d", &s, &d);
		add_edge(Graph, s, d);
	}
	print_graph(Graph);
	return 0;
}
