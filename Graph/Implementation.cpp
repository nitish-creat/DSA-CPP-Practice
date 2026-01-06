#include <bits/stdc++.h>
using namespace std;

template <typename T>  //No need to enter the data type

class Graph{

    public:
    unordered_map<T,list<T>> adj;  // T for all data type

    void addEdge(T u,T v,bool direction){
        // DIRECTION = 0 ->UNDIRECTED
        // DIRECTION = 1 ->DIRECTED

        //CREATE EDGE FROM U TO V
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void PrintAdj(){
        for(auto i:adj){
            cout<<i.first <<"-> ";
            for(auto j:i.second){
                cout<< j<<" ";
            }
            cout<<endl;
        }
    }
    void BFS(T start) {
    unordered_map<T, bool> visited;
    queue<T> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        T node = q.front();
        q.pop();

        cout << node << " ";

        for (auto neighbour : adj[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

};

int main() {
    int n;
    cout<<"Enter no. of nodes: ";
    cin>>n;

    int e;
    cout<<"Enter no. of edges: ";
    cin>>e;
    Graph<int> g;

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);  //undirected graph
    }
    cout<<"Adj. Matrix: ";
    g.PrintAdj();

    int start;
    cout<<"\nEnter start position: ";
    cin>>start;
    cout<<"BFS Traversal: ";
    g.BFS(start);
    return 0;
}