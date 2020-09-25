#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int, int>>> adj;
set<int> s;
int main(){
	int n,m,k,x,y,l, ans=1e9+7;
	cin>>n>>m>>k;
	adj.assign(n,vector<pair<int, int>>());
	while(m--){
		cin>>x>>y>>l;
		adj[x-1].push_back({y-1,l});
		adj[y-1].push_back({x-1,l});
	}
	while(k--)
		cin>>l, s.insert(l-1);

	for(auto st :s)
		for(auto x:adj[st])
			if(!s.count(x.first))
				ans=min(ans,x.second);
	cout<<(ans==1e9+7?-1:ans);
}