#pragma GCC optimize (Ofast)
#include <bits/stdc++.h>
using namespace std; 
#define forn(i, n) for(int i = 0; i < n; ++i)

vector<int> BFS(vector<int> adj[],int src,int dest,int v){
 	queue<int> Q; 
  	vector<bool> visited(v,false); 
  	vector<int> pred(v,-1);

    visited[src] = true; 
    Q.push(src); 

    int u;
  
    while(!Q.empty()){ 
        u = Q.front(); 
        Q.pop(); 
        sort(adj[u].begin(),adj[u].end());
        forn(i,adj[u].size())
            if(visited[adj[u][i]] == false){ 
                visited[adj[u][i]] = true;
                pred[adj[u][i]] = u; 
                Q.push(adj[u][i]); 
  
                if(adj[u][i] == dest) {

                	return pred; 
                }
            }
    }
    return pred;
} 

int shortestPathL(vector<int> adj[], int s, int dest, int v) { 
	int path = 1, reach = dest; 
	vector<int> pred;

	pred=BFS(adj, s, dest, v);

	while (pred[reach] != -1) { 
		path++; 
		reach = pred[reach]; 
	}
	return path;
} 

vector<int> shortestPath(vector<int> adj[], int s, int dest, int v) { 
	int reach = dest; 
	vector<int> pred,path(1,s);

	pred=BFS(adj, s, dest, v);

	while (pred[reach] != -1) { 
		path.push_back(reach); 
		reach = pred[reach]; 
	}
	return path;
} 

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int t,n,m,a,b,c,start,end,p1,p2,p3;
	vector<int> path;
	long long ans;
	cin>>t;

	while(t--){
		cin>>n>>m>>a>>b>>c;

		vector<long long> p(m),psum(m+1,0);
		vector<bool> visited(n,false);
		forn(i,m)
			cin>>p[i];
		sort(p.begin(),p.end());
		forn(i,m)
			psum[i+1]=p[i]+psum[i];

		vector<int> adj[n];
		forn(i,m){
			cin>>start>>end;
			adj[start-1].push_back(end-1); 
			adj[end-1].push_back(start-1); 
		}

		ans=LLONG_MAX;
		path=shortestPath(adj, a-1, b-1, n);
		for(int i:path){
			visited[i]=true;
			p1=shortestPathL(adj, i, a-1, n);
			p2=shortestPathL(adj, i, b-1, n);
			p3=shortestPathL(adj, i, c-1, n);
			if(p1+p2+p3-3<=m)
				ans=min(ans,psum[p2-1]+psum[p1+p2+p3-3]);
		}
		path=shortestPath(adj, b-1, c-1, n);
		for(int i:path){
			if(visited[i])
				continue;
			p1=shortestPathL(adj, i, a-1, n);
			p2=shortestPathL(adj, i, b-1, n);
			p3=shortestPathL(adj, i, c-1, n);
			if(p1+p2+p3-3<=m)
				ans=min(ans,psum[p2-1]+psum[p1+p2+p3-3]);
		}
		cout<<ans<<endl;
	}
	return 0;
}