#include <bits/stdc++.h>
using namespace std;

#define forn(i,x,n) for(int i = x; i < n; ++i)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m,s,g;
	
	cin>>n>>m;
	vector<int> dist(n*m);
	vector<vector<int>> adj(n*m);
	unordered_map<char,vector<int>> teleport;
	vector<string> a(n);
	forn(i,0,n)
		cin>>a[i];
	forn(i,0,n)
		forn(j,0,m){
			dist[i*m+j]=INT_MAX;
			if(a[i][j]!='#' && a[i][j]!='.')
				teleport[a[i][j]].push_back(i*m+j);
			if(a[i][j]=='S')
				s=i*m+j;
			if(a[i][j]=='G')
				g=i*m+j;
			if(i && a[i-1][j]!='#')
				adj[i*m+j].push_back((i-1)*m+j);
			if(j && a[i][j-1]!='#')
				adj[i*m+j].push_back(i*m+j-1);
			if(i<n-1 && a[i+1][j]!='#')
				adj[i*m+j].push_back((i+1)*m+j);
			if(j<m-1 && a[i][j+1]!='#')
				adj[i*m+j].push_back(i*m+j+1);
		}

	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    dist[s]=0;
    q.push({dist[s],s});

    while(q.size()){
        int f = q.top().second;
        q.pop();
        for(auto v: adj[f])
            if(dist[v]>dist[f]+1)
                dist[v]=dist[f]+1, q.push({dist[v],v});
        if(teleport.find(a[f/m][f%m])!=teleport.end()){
        	for(auto v:teleport[a[f/m][f%m]])
	        	if(dist[v]>dist[f]+1)
	                dist[v]=dist[f]+1, q.push({dist[v],v});
        	teleport.erase(a[f/m][f%m]);
        }
    }
	cout<<(dist[g]==INT_MAX?-1:dist[g]);
}