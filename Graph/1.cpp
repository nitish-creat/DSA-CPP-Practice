#include <bits/stdc++.h>
using namespace std;
#define V 5

int MinDis(int dist[],bool visited[]){
    int min= INT_MAX, min_index ;
    for(int v=0;v<V;v++){
        if(!visited[v] && dist[v]<=min){
            min =dist[v];
            min_index=v;

        }
    }
    return min_index;
}

void dijkstra(int graph[V][V],int src){
    int dist[V];
    bool visited[V];
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
        visited[i]=false;
    }

    dist[src] = 0;
    for(int count = 0;count<V-1;count++){
        int u=MinDis(dist,visited);
        visited[u] = true;

        for(int v=0;v<V;v++){
            if(!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v]<dist[v]){
                dist[v] = dist[u]+graph[u][v];
            }
        }
    }

    cout<<"Vertex: shortest distance from source: "<<endl;
    for(int i=0;i<V;i++){
        cout<<i<<"\t\t"<<dist[i]<<endl;
    }
}

int main() {
    int graph[V][V]={
        {0,10,0,5,0},
        {0,0,1,2,0},
        {0,0,0,0,4},
        {0,3,0,0,2},
        {7,0,0,0,0}
    };
    dijkstra(graph,0);
    return 0;
}