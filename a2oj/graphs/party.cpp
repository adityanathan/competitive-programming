#include <bits/stdc++.h>
using namespace std;

// parent array trees

vector<int> p, dist;

int dfs(int u){
	if(p[u]==-2)
		return 1;
	if(!dist[u])
		dist[u]=dfs(p[u])+1;
	return dist[u];
}

int main(){
	int n, pi, ans=0;
	cin>>n;
	p.assign(n,0);
	dist.assign(n,0);
	
	for(int i=0;i<n;i++)
		cin>>pi, p[i]=pi-1;
	
	for(int i=0;i<n;i++)
		ans=max(dfs(i),ans);
	
	cout<<ans;

}