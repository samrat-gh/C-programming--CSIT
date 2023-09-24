#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define V 6 // Define the number of vertices in your graph

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Function to print the constructed distance array
void printSolution(int dist[]) {
    printf("Vertex \t Minimum Distance from Source\n");
    for (int i = 0; i < V; i++) {
        printf("%d \t %d\n", i, dist[i]);
    }
}

// Function to perform Dijkstra's algorithm
void dijkstra(int graph[V][V], int src) {
    int dist[V];     // The output array to store the shortest distance from the source vertex
    bool sptSet[V];  // Set to true if the vertex is included in the shortest path tree

    // Initialize all distances as INFINITE and sptSet[] as false
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    // Distance of the source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        // Update dist[] for adjacent vertices of the picked vertex
        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the constructed distance array
    printSolution(dist);
}

int main() {
    // Example graph represented as an adjacency matrix
    
    printf("For  6 Vertices: \n \n");
    
    int graph[V][V] = {
        {0, 4, 2, 0,  0, 0},
        {4, 0, 1, 5,  0, 0},
        {2, 1, 0, 8,  10,0},
        {0, 5, 8, 0,  2, 6},
        {0, 0, 10,2,  0, 3},
        {0, 0, 0, 6,  3, 0}
    };

    // Perform Dijkstra's algorithm starting from vertex 0
    dijkstra(graph, 0);

    return 0;
}

