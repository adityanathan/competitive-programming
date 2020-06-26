#include<bits/stdc++.h>
using namespace std;
#define forn(i,x,n) for(int i = x; i < n; ++i)
typedef long long ll;

ll gcd(ll a, ll b){
	return b==0?a:gcd(b,a%b);
}

unordered_map<ll,int> pf(ll n){
	unordered_map<ll,int> m;
	while(n%2==0)
		m[2]++, n/=2;
	for(int i=3;i<=sqrt(n);i+=2)
		while(n%i==0)
			m[i]++, n/=i;
	if(n>2)
		m[n]++;
	return m;
}

ll median(vector<ll> a){
	int n = a.size();
	if(n%2==0)
		nth_element(a.begin(), a.begin()+(n-1)/2, a.end());
	nth_element(a.begin(), a.begin()+n/2, a.end());
	return (a[(n-!(n%2))/2]+a[n/2])/2;
}

// GRAPH TRAVERSALS

vector<bool> vis;
vector<vector<int>> adj;

void dfs(int u){
	vis[u]=true;
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v);
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	vis[u] = true;

	while(!q.empty()){
		int f = q.front();
		q.pop();
		for(auto v: adj[f])
			if(!vis[v])
				q.push(v), vis[v]=true;
	}
}

int main(){
	int t,n,m,a,b;
	cin>>t;

	while(t--){
		cin>>n>>m;
		vis.assign(n,false);
		adj.assign(n,vector<int>());

		forn(i,0,m){
			cin>>a>>b;
			adj[a-1].push_back(b-1);
		}

		forn(i,0,n)
			if(!vis[i])
				dfs(i);
	}
}