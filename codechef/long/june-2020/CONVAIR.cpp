#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

class Graph{ 
    int V;
    void DFSUtil(int v, bool visited[]);

public:
    list<int>* adj;
    Graph(int V);
    void addEdge(int v, int w);
    int NumberOfconnectedComponents();
};

int Graph::NumberOfconnectedComponents(){ 
    bool* visited = new bool[V];
    int count = 0;
    forn(v,0,V)
        visited[v] = false;

    forn(v,0,V)
        if (!visited[v]){ 
            DFSUtil(v, visited);
            count++;
        }

    return count;
} 

void Graph::DFSUtil(int v, bool visited[]){ 
    visited[v] = true;

    forit(i,adj[v])
        if(!visited[*i]) 
            DFSUtil(*i, visited);
} 

Graph::Graph(int V){ 
    this->V = V;
    adj = new list<int>[V];
} 

void Graph::addEdge(int v, int w){ 
    adj[v].push_back(w);
    adj[w].push_back(v);
} 

int main(){
    int t,n,m,a,b,conn,deg_of_unsat,singles;
    cin>>t;

    while(t--){
        cin>>n>>m;
        singles=0;
        Graph g(n);
        forn(i,0,m){
            cin>>a>>b;
            g.addEdge(a-1,b-1);
        }
        conn=g.NumberOfconnectedComponents();
        forn(i,0,n)
            singles+=g.adj[i].size()==0;
        deg_of_unsat=m+conn-n;

        if(deg_of_unsat<=conn-singles-1){
            cout<<2*conn-2-2*deg_of_unsat<<" 0\n";
            continue;
        }
        deg_of_unsat-=conn-singles-1;
        if(2*deg_of_unsat<singles){
            cout<<2*(singles%2)+4*(singles/2-deg_of_unsat)+2*deg_of_unsat<<" 0\n";
            continue;
        }
        cout<<2*(singles%2)+singles/2*2<<" 0\n";
    }
    
    return 0;
} 