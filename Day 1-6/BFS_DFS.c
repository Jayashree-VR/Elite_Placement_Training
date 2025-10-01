#include<stdio.h>
#define MAX 10
#define TRUE 1
#define FALSE 0

int graph[MAX][MAX] = {0};
int V;   // store global vertex count

void insertEdge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void BFS(int start) {
    int visited[MAX] = {0};
    int queue[MAX], front = 0, rear = 0;
    visited[start] = TRUE;
    queue[rear++] = start;

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);
        for (int i = 0; i < V; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = TRUE;
                queue[rear++] = i;
            }
        }
    }
    printf("\n");
}

void DFSUtil(int start, int visited[]) {
    visited[start] = TRUE;
    printf("%d ", start);
    for (int i = 0; i < V; i++) {
        if (graph[start][i] == 1 && !visited[i]) {
            DFSUtil(i, visited);
        }
    }
}

void DFS(int start) {
    int visited[MAX] = {0};
    DFSUtil(start, visited);
    printf("\n");
}

int main() {
    int E, s, d;
    scanf("%d %d", &V, &E);

    for (int i = 0; i < E; i++) {
        scanf("%d %d", &s, &d);
        if (s >= V || d >= V) {
            printf("Invalid edge!\n");
            continue;
        }
        insertEdge(s, d);
    }

    printf("Adjacency Matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    printf("BFS starting from node 0:\n");
    BFS(0);

    printf("DFS starting from node 0:\n");
    DFS(0);

    return 0;
}
