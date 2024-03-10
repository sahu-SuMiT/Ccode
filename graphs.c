
#include <stdio.h>
#include <stdlib.h>
#define MAXNODES 50
struct Graph{
    int V;
    int adj[MAXNODES][MAXNODES];
};

struct Graph *create_graph(int vertices){
        struct Graph *head=malloc(sizeof(struct Graph));
        head->V=vertices;
        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++){
                head->adj[i][j]=0;
            }
        }
        return head;
}

void add_node(struct Graph *head,int src,int dest){
    for(int i=0;i<head->V;i++){
            for(int j=0;j<head->V;j++){
                head->adj[src][dest]=1;
            }
        }
}

void DFS(struct Graph *head, int s, int *visited){

    if(!visited[s]){
        printf("%d ",s);
        visited[s]=1;
    }
    for(int adjancy=0;adjancy<head->V;adjancy++){
        if(!visited[adjancy] && head->adj[s][adjancy]){
            DFS(head,adjancy,visited);
        }
    }
}

void BFS(struct Graph *g, int s){
    int i=0;
    
    int visited[g->V];
    for(;i<g->V;i++){
        visited[i]=0;
    }
    
    int queue[MAXNODES];
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
int main() {
    struct Graph *head=create_graph(4);
    add_node(head,0,1);
    add_node(head,0,3);
    add_node(head,1,2);
    add_node(head,2,0);
    add_node(head,2,3);
    add_node(head,3,3);
    
    //printing the graph
    for(int i=0;i<head->V;i++){
        for(int j=0;j<head->V;j++){
            printf("%d",head->adj[i][j]);
        }
        printf("\n");
    }
    
    printf("DFS\n");
    int visited[head->V];
    for(int i=0;i<head->V;i++){
        visited[i]=0;
    }
    DFS(head,2,visited);
    printf("\nBFS\n");
    BFS(head,2);
    return 0;
    
}
