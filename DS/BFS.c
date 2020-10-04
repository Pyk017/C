#include<stdio.h>
#include<stdlib.h>


struct Queue{
  int* items;
  int size;
  int front;
  int rear;
};

struct Queue* create_queue(int size){
  struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
  queue->items = (int*)malloc(size * sizeof(int));
  queue->front = -1;
  queue->rear = -1;
  queue->size = size;
  return queue;
};

int isEmpty(struct Queue* q){
  if(q->rear == -1)
    return 1;
  else
    return 0;
}

void enqueue(struct Queue* q, int item){
  if(q->rear == q->size - 1){
      printf("\nQueue is Full!");
  }
  else{
    if(q->front == -1){
      q->front = 0;
    }
    q->rear += 1;
    q->items[q->rear] = item;
  }
}

int dequeue(struct Queue* q){
  int item;
  if(isEmpty(q)){
    printf("\nQueue is Empty");
    item = -1;
  }
  else{
    item = q->items[q->front];
    q->front += 1;
    if(q->front > q->rear){
      printf("\nQueue is Resetting");
      q->front = q->rear = -1;
    }
  }
  return item;
}

void print_queue(struct Queue* q){
  int i;
  if(isEmpty(q)){
    printf("\nQueue is Empty!");
  }
  else{
    printf("\nQueue is :- ");
    for(i = q->front; i < q->rear + 1; i++){
      printf("%d ", q->items[i]);
    }
  }
}

struct Node{
    int data;
    struct Node* next;
};

struct adj_list{
    struct Node* head;
};

struct Graph{
    int size;
    struct adj_list* array;
    int* visited;
};

struct Node* get_node(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

struct Graph* create_graph(int n){
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->size = n;
    graph->array = (struct adj_list*)malloc(n * sizeof(struct adj_list));
    graph->visited = (int*)malloc(sizeof(int) * n);
    for(int i=0; i<n; i++){
      graph->visited[i] = 0;
        graph->array[i].head = NULL;
    }
    return graph;
}

void add_edge(struct Graph* graph, int src, int dest){
    struct Node* temp = get_node(dest);
    temp->next = graph->array[src].head;
    graph->array[src].head = temp;

    temp = get_node(src);
    temp->next = graph->array[dest].head;
    graph->array[dest].head = temp;
}


void bfs(struct Graph* graph, int startVertex){
  struct Queue* queue = create_queue(graph->size);
  graph->visited[startVertex] = 1;
  enqueue(queue, startVertex);
  while(!isEmpty(queue)){
    print_queue(queue);
    int current_vertex = dequeue(queue);
    printf("Visited %d\n", current_vertex);
    struct Node* temp = graph->array[current_vertex].head;
    while(temp){
      int vertex = temp->data;
      if(graph->visited[vertex] == 0){
        enqueue(queue, vertex);
        graph->visited[vertex] = 1;
      }
      temp = temp->next;
    }
  }
}



void print_graph(struct Graph* graph){
    for(int i=0; i<graph->size; i++){
        struct Node* p = graph->array[i].head;
        printf("Adjacency List of vertext %d\n head ", i);
        while(p != NULL){
            printf("-> %d", p->data);
            p = p->next;
        }
        printf("\n");
    }
}


int main(){
    int n, m;
    printf("Enter Number of vertices and Edges in the Graph :- ");
    scanf("%d %d", &n, &m);
    struct Graph* graph = create_graph(n);
    int v1, v2;
    for(int i=0; i<m; i++){
        scanf("%d %d", &v1, &v2);
        add_edge(graph, v1-1, v2-1);
    }
    print_graph(graph);
    printf("\n");
    bfs(graph, 0);
    return 0;
}

























// // #include <stdio.h>
// // #include <stdlib.h>
// #define SIZE 40

// struct queue {
//   int items[SIZE];
//   int front;
//   int rear;
// };

// struct queue* createQueue();
// void enqueue(struct queue* q, int);
// int dequeue(struct queue* q);
// void display(struct queue* q);
// int isEmpty(struct queue* q);
// void printQueue(struct queue* q);

// struct node {
//   int vertex;
//   struct node* next;
// };

// struct node* createNode(int);

// struct Graph {
//   int numVertices;
//   struct node** adjLists;
//   int* visited;
// };

// // BFS algorithm
// void bfs(struct Graph* graph, int startVertex) {
//   struct queue* q = createQueue();

//   graph->visited[startVertex] = 1;
//   enqueue(q, startVertex);

//   while (!isEmpty(q)) {
//     printQueue(q);
//     int currentVertex = dequeue(q);
//     printf("Visited %d\n", currentVertex);

//     struct node* temp = graph->adjLists[currentVertex];

//     while (temp) {
//       int adjVertex = temp->vertex;

//       if (graph->visited[adjVertex] == 0) {
//         graph->visited[adjVertex] = 1;
//         enqueue(q, adjVertex);
//       }
//       temp = temp->next;
//     }
//   }
// }

// // Creating a node
// struct node* createNode(int v) {
//   struct node* newNode = (struct node*)malloc(sizeof(struct node));
//   newNode->vertex = v;
//   newNode->next = NULL;
//   return newNode;
// }

// // Creating a graph
// struct Graph* createGraph(int vertices) {
//   struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
//   graph->numVertices = vertices;

//   graph->adjLists = (struct node**)malloc(vertices * sizeof(struct node*));
//   graph->visited = (int*)malloc(vertices * sizeof(int));

//   int i;
//   for (i = 0; i < vertices; i++) {
//     graph->adjLists[i] = NULL;
//     graph->visited[i] = 0;
//   }

//   return graph;
// }

// // Add edge
// void addEdge(struct Graph* graph, int src, int dest) {
//   // Add edge from src to dest
//   struct node* newNode = (struct node*)createNode(dest);
//   newNode->next = graph->adjLists[src];
//   graph->adjLists[src] = newNode;

//   // Add edge from dest to src
//   newNode = createNode(src);
//   newNode->next = graph->adjLists[dest];
//   graph->adjLists[dest] = newNode;
// }

// // Create a queue
// struct queue* createQueue() {
//   struct queue* q = (struct queue*)malloc(sizeof(struct queue));
//   q->front = -1;
//   q->rear = -1;
//   return q;
// }

// // Check if the queue is empty
// int isEmpty(struct queue* q) {
//   if (q->rear == -1)
//     return 1;
//   else
//     return 0;
// }

// // Adding elements into queue
// void enqueue(struct queue* q, int value) {
//   if (q->rear == SIZE - 1)
//     printf("\nQueue is Full!!");
//   else {
//     if (q->front == -1)
//       q->front = 0;
//     q->rear++;
//     q->items[q->rear] = value;
//   }
// }

// // Removing elements from queue
// int dequeue(struct queue* q) {
//   int item;
//   if (isEmpty(q)) {
//     printf("Queue is empty");
//     item = -1;
//   } else {
//     item = q->items[q->front];
//     q->front++;
//     if (q->front > q->rear) {
//       printf("Resetting queue ");
//       q->front = q->rear = -1;
//     }
//   }
//   return item;
// }

// // Print the queue
// void printQueue(struct queue* q) {
//   int i = q->front;

//   if (isEmpty(q)) {
//     printf("Queue is empty");
//   } else {
//     printf("\nQueue contains \n");
//     for (i = q->front; i < q->rear + 1; i++) {
//       printf("%d ", q->items[i]);
//     }
//   }
// }

// int main() {
//   struct Graph* graph = createGraph(6);
//   addEdge(graph, 0, 1);
//   addEdge(graph, 0, 2);
//   addEdge(graph, 1, 2);
//   addEdge(graph, 1, 4);
//   addEdge(graph, 1, 3);
//   addEdge(graph, 2, 4);
//   addEdge(graph, 3, 4);

//   bfs(graph, 0);

//   return 0;
// }