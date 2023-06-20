
#include <bits/stdc++.h>
using namespace std;

class Graph {
    public:
int n;
vector<int>* adj;
void DFS(int v, bool visited[]);
public:
Graph(int n);
void addEdge(int u, int v);
int NumberOfconnectedComponents();
};

int Graph::NumberOfconnectedComponents()
{
bool* visited = new bool[n];
int count = 0;
for (int v = 0; v < n; v++)
visited[v] = false;
for (int v = 0; v < n; v++) {
if (visited[v] == false) {
DFS(v, visited);
count += 1;
}
}
return count;
}

void Graph::DFS(int v, bool visited[])
{
visited[v] = true;
 for( auto child:adj[v])
    {
     if(!visited[child])
     {
     DFS(child,visited);
}
}
}

Graph::Graph(int n)
{
this->n= n;
adj = new vector<int>[n];
}


void Graph::addEdge(int u, int v)
{
adj[u].push_back(v);
adj[v].push_back(u);
}

int main()
{
    int n,m;
    cin>>n>>m;
    Graph b(n);
    int x,y;
    for(int i=0;i<m;i++)
    {
        
        cin>>x>>y;
        b.addEdge(x,y);
    }
    
    cout << b.NumberOfconnectedComponents();
    return 0;
}