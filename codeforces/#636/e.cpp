#include <bits/stdc++.h> 
using namespace std; 
#define forn(i, n) for(int i = 0; i < n; ++i)

void add_edge(vector<int> adj[], int src, int dest) { 
	adj[src].push_back(dest); 
	adj[dest].push_back(src); 
} 

void BFS(vector<int> adj[],int src,int dest,int v,int pred[],int dist[]){
 	list<int> queue; 
  	bool visited[v]; 
  
    forn(i,v){ 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        pred[i] = -1; 
    } 
    
    visited[src] = true; 
    dist[src] = 0; 
    queue.push_back(src); 
  
    while(!queue.empty()){ 
        int u = queue.front(); 
        queue.pop_front(); 
        sort(adj[u].begin(),adj[u].end());
        forn(i,adj[u].size())
            if(visited[adj[u][i]] == false){ 
                visited[adj[u][i]] = true; 
                dist[adj[u][i]] = dist[u] + 1; 
                pred[adj[u][i]] = u; 
                queue.push_back(adj[u][i]); 
  
                if(adj[u][i] == dest) 
                   return; 
            }
    }
} 

vector<int> shortestPath(vector<int> adj[], int s, int dest, int v) { 
	int pred[v], dist[v];  
	BFS(adj, s, dest, v, pred, dist);

	vector<int> path; 
	int crawl = dest; 
	path.push_back(crawl); 

	while (pred[crawl] != -1) { 
		path.push_back(pred[crawl]); 
		crawl = pred[crawl]; 
	}
	return path;
} 

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,m,a,b,c,start,end,count,t;
	long long sum;
	vector<int> path1,path2;
	cin>>t;

	while(t--){
		cin>>n>>m>>a>>b>>c;
		vector<int> p(m);
		forn(i,m)
			cin>>p[i];
		sum=count=0;
		vector<int> adj[n];
		forn(i,m){
			cin>>start>>end;
			add_edge(adj, start-1, end-1); 
		}
		path1=shortestPath(adj, a-1, b-1, n);
		path2=shortestPath(adj, b-1, c-1, n);
		map<pair<int,int>,bool> m;
		forn(i,path1.size()-1){
			m[make_pair(path1[i],path1[i+1])]=true;
			m[make_pair(path1[i+1],path1[i])]=true;
		}
		forn(i,path2.size()-1)
			if(m.find(make_pair(path2[i],path2[i+1]))!=m.end())
				count++;
		sort(p.begin(),p.end());
		forn(i,path1.size()+path2.size()-2-count){
			if(i<count)
				sum+=p[i];
			sum+=p[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}