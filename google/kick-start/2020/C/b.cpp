#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

map<int,int> m;
map<int,char> mxx;

class Graph { 
    int V;    
    list<int> *adj;
  	bool isCyclicUtil(int v, bool visited[], bool *rs);
  	void topologicalSortUtil(int v, bool visited[],stack<int>& Stack);  
    void DFSUtil(int v, vector<bool> &visited); 
public: 
    Graph(int V); 
    void addEdge(int v, int w);
    int findMother(); 
    vector<char> longestPath(int s); 
    bool isCyclic();
}; 

Graph::Graph(int V){ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w){ 
	adj[v].push_back(w);
} 

void Graph::DFSUtil(int v, vector<bool> &visited){ 
   visited[v] = true; 
   list<int>::iterator i; 
   for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
            DFSUtil(*i, visited); 
} 

int Graph::findMother(){ 
    vector <bool> visited(V, false); 
    int v = 0; 
    for(int i = 0; i < V; i++) 
    	if(visited[i] == false){ 
            DFSUtil(i, visited); 
            v = i; 
        }
    return v; 
} 

bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack) { 
	if(visited[v] == false){ 
		visited[v] = true; 
		recStack[v] = true; 

		for(list<int>::iterator i=adj[v].begin();i!=adj[v].end();++i){ 
			if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) ) 
				return true; 
			else if (recStack[*i]) 
				return true; 
		} 
	} 
	recStack[v] = false; 
	return false; 
} 

bool Graph::isCyclic() { 
	bool *visited = new bool[V]; 
	bool *recStack = new bool[V]; 
	for(int i = 0; i < V; i++) 
	{ 
		visited[i] = false; 
		recStack[i] = false; 
	} 
	for(int i = 0; i < V; i++) 
		if (isCyclicUtil(i, visited, recStack)) 
			return true; 

	return false; 
} 

void Graph::topologicalSortUtil(int v, bool visited[],  
                                stack<int>& Stack)  
{  
    // Mark the current node as visited  
    visited[v] = true;  
    
    // Recur for all the vertices adjacent to this vertex  
    list<int>::iterator i;  
    for (i = adj[v].begin(); i != adj[v].end(); ++i) {  
        int node = *i;  
        if (!visited[node])  
            topologicalSortUtil(node, visited, Stack);  
    }  
    
    // Push current vertex to stack which stores topological  
    // sort  
    Stack.push(v);  
}  
    
// The function to find longest distances from a given vertex.  
// It uses recursive topologicalSortUtil() to get topological  
// sorting.  
vector<char> Graph::longestPath(int s){  
    stack<int> Stack;
    vector<int> dist(V);  
    
    bool* visited = new bool[V];  
    for (int i = 0; i < V; i++)  
        visited[i] = false;  

    for (int i = 0; i < V; i++)  
        if (visited[i] == false)  
            topologicalSortUtil(i, visited, Stack);  
 
    for (int i = 0; i < V; i++)  
        dist[i] = 10007;  
    dist[s] = 0;  
    
    while (Stack.empty() == false) {  
        int u = Stack.top();  
        Stack.pop();  
        list<int>::iterator i;  
        // if (dist[u] != 10007)
            for (i = adj[u].begin(); i != adj[u].end(); ++i)  
                if (dist[*i] < dist[u] + 1)  
                    dist[*i] = dist[u] + 1;
    }
      
    delete [] visited;
    vector<pair<int,int> > pp;
    forn(i,V)
    	pp.push_back(make_pair(dist[i],i));
    sort(pp.begin(),pp.end());
    vector<char> vx(V);
    forn(i,V)
    	vx[i]=mxx[pp[i].second];
    return vx;
}  

int main(){
	int t,n,test,r,c,mom,rank;
	cin>>test;
	t=test;
	while(t--){
		cin>>r>>c;
		rank=0;
		vector<string> a(r);
		map<int,int> mm;
		map<int,char> mx;
		forn(i,r){
			cin>>a[i];
			forn(j,c){
				if(mm.find(a[i][j]-'A')==mm.end()){
					mx[rank]=a[i][j];
					mm[a[i][j]-'A']=rank++;
				}
			}
		}

		m=mm;
		mxx=mx;
		n=mm.size();

		Graph g(n); 

		forn(i,r-1)
			forn(j,c){
				if(a[i+1][j]!=a[i][j])
					g.addEdge(mm[a[i+1][j]-'A'],mm[a[i][j]-'A']);
			}
		if(g.isCyclic()){
			cout<<"Case #"<<test-t<<": "<<-1<<"\n";
			continue;
		}
		mom=g.findMother();
		vector<char> dist = g.longestPath(mom);

		cout<<"Case #"<<test-t<<": ";

		forn(i,n)
			cout<<dist[i];
		cout<<"\n";
	}
	return 0;
}