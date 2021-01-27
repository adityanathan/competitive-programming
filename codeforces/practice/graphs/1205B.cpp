#include<bits/stdc++.h> // GRAPHS, SHORTEST CYCLE, GIRTH, BFS, AND-EDGES, O(mn)
using namespace std;
#define forn(i,x,n) for(int i = x; i < n; ++i)
typedef long long ll;

vector<int> vis;
vector<set<int>> adj;
int ans=1e9;

int bfs(int u){
	queue<int> q;
	q.push(u);
	vis[u] = 0;
	set<int> touched;

	while(!q.empty()){
		int f = q.front();
		touched.insert(f);
		q.pop();
		for(auto v: adj[f])
			if(vis[v]==-1)
				q.push(v), vis[v]=vis[f]+1;
			else if(vis[f]<=vis[v] && f!=v)
				ans=min(ans,vis[v]+vis[f]+1);
	}
	for(auto x:touched)
		vis[x]=-1;
	
	return ans;
}

int main(){
	ll n,a;
	cin>>n;
	map<int,vector<int>> m;
	forn(i,0,n){
		cin>>a;
		forn(j,0,60)
			if(a&(1ll<<j))
				m[j].push_back(i);
	}

	vis.assign(n,-1);
	adj.assign(n,set<int>());

	for(auto x:m)
		if(x.second.size()>2){
			cout<<3;
			return 0;
		}
		else if(x.second.size()==2)
			adj[x.second[0]].insert(x.second[1]),
			adj[x.second[1]].insert(x.second[0]);

	forn(i,0,n)
		ans=min(ans,bfs(i));

	cout<<(ans==1e9?-1:ans);
}