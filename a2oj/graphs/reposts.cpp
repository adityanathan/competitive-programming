#include<bits/stdc++.h>
using namespace std;

map<string,vector<string>> m;
map<string,int> depth;

int dfs(string u){
	depth[u]=1;
	for(auto v:m[u])
		if(depth.find(v)==depth.end())
			depth[v]=dfs(v), depth[u]=max(depth[u],1+depth[v]);
	return depth[u];
}

int main(){
	int n;
	string x,y;
	cin>>n;
	while(n--){
		cin>>x>>y>>y;
		transform(x.begin(), x.end(), x.begin(), ::tolower);
		transform(y.begin(), y.end(), y.begin(), ::tolower);
		m[y].push_back(x);
	}
	cout<<dfs("polycarp");
}