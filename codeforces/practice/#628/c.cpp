#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<pair<int,pair<int,int>>> ht;
int dfs(vector<int> graph[], int x){ 
	for(auto child: graph[x]){
		ht[x].first=max(ht[x].first,1+dfs(graph,child));
		ht[child].second.first=x;
	}
	return ht[x].first;
} 


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,x=0;

    cin>>n;
    vector<int> graph[n];
    vector<int> ans(n,0);
    vector<pair<int,pair<int,int>>> p(n,make_pair(0,make_pair(n+1,n-1)));
    
    vector<pair<int,int>> v(n-1);
    forn(i,0,n-1){
    	cin>>a>>b;
    	p[i].second.second=i;
    	v[i]=make_pair(a-1,b-1);
    	graph[a-1].push_back(b-1);
    }
    ht=p;
    dfs(graph, 0);

    sort(ht.begin(),ht.end());

    debug(ht);
    forn(i,0,ht.size())
    	ans[ht[i].second.second]=x++;

    forn(i,0,n-1)
    	cout<<min(ans[v[i].first],ans[v[i].second])<<'\n';
    return 0;
}