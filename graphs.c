#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 50

struct Graph{
    int V;
    int adj[MAX_NODES][MAX_NODES];
};

struct Graph* create_graph(int no_of_vertices){
    struct Graph *head=malloc(sizeof(struct Graph));
    head->V=no_of_vertices;
    
    //initialise
    for(int i=0;i<MAX_NODES;i++){
        for(int j=0;j<MAX_NODES;j++){
            head->adj[i][j]=0;
        }
    }
    return head;
}

void print_graph(struct Graph *head){
    for(int i=0;i<head->V;i++){
        for(int j=0;j<head->V;j++){
            printf("%d ",head->adj[i][j]);
        }
        printf("\n");
    }
}

void BFS(struct Graph *g, int s){
    int i=0;
    
    int visited[MAX_NODES];
    for(;i<g->V;i++){
        visited[i]=0;
    }
    
    int queue[MAX_NODES];
    int front=0;int rear=0;
    
    queue[rear++]=s;
    visited[s]=1;
    
    while(front<rear){
        s=queue[front++];
        printf("%d ",s);
        
/*        
        for (int adjacent = 0; adjacent < g->V;
             adjacent++) {
            if (g->adj[s][adjacent] && !visited[adjacent]) {
                visited[adjacent] = 1;
                queue[rear++] = adjacent;
            }
        }*/
        
        for(int adjacent=0;adjacent<g->V;adjacent++){
            if(!visited[adjacent] && g->adj[s][adjacent]){
                queue[rear++]=adjacent;
                visited[adjacent]=1;
            }
        }
        
        
        
    }
}

void add_node(struct Graph *g, int src, int dest){
    for(int i=0;i<g->V;i++){
        for(int j=0;j<g->V;j++){
            g->adj[src][dest]=1;
        }
    }
}

int main(){
    struct Graph *head= create_graph(4);
    printf("initially your graph\n");
    print_graph(head);
    
    add_node(head,0,1);
    add_node(head,0,2);
    add_node(head,1,2);
    add_node(head,2,0);
    add_node(head,2,3);

    printf("After adding some arcs\n");
    print_graph(head);
    
    BFS(head,2);

}
