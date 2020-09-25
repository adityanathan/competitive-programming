#include <bits/stdc++.h>
using namespace std;

//implicit graphs connected components

set<pair<int,int>> vis;
map<int,set<pair<int,int>>> xs, ys;

void dfs(pair<int,int> u){
	vis.insert(u);
	for(auto child:xs[u.first])
		if(!vis.count(child))
			dfs(child);
	for(auto child:ys[u.second])
		if(!vis.count(child))
			dfs(child);
}
int main(){
	int n, x, y, ans=0;
	cin>>n;

	for(int i=0;i<n;i++)
		cin>>x>>y, xs[x].insert({x,y}), ys[y].insert({x,y});

	for(auto it:xs)
		for(auto pi:it.second)
			if(!vis.count(pi))
				ans++, dfs(pi);
	cout<<ans-1;
}