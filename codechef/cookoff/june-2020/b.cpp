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

vector<pair<double,int>> a;
double mx;

void addEdge(vector<int> adj[], int u, int v) { 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 

void DFSUtil(int u, vector<int> adj[], vector<bool> &visited, vector<int> &v){ 
    visited[u] = true;
    if(a[u].first!=mx)
        return;
    v.push_back(u);
    forn(i,0,adj[u].size()) 
        if(!visited[adj[u][i]])
            DFSUtil(adj[u][i], adj, visited, v);
} 

vector<int> DFS(vector<int> adj[], int V){ 
    vector<bool> visited(V, false);
    vector<int> val,re;
    forn(u,0,V) 
        if(!visited[u]){
            re.clear();
            DFSUtil(u, adj, visited, re);
            val = val.size()<re.size()?re:val; 
        }
    return val;
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t,aa,b;
    double x;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<int> adj[n],ans;
        a.resize(n);
        forn(i,0,n){
            cin>>a[i].first;
            a[i].second=i;
        }
        forn(i,0,n){
            cin>>x;
            a[i].first/=x;
        }
        mx = max_element(a.begin(),a.end())->first;

        forn(i,0,m){
            cin>>aa>>b;
            addEdge(adj,aa-1,b-1);
        }
        ans = DFS(adj,n);
        cout<<ans.size()<<'\n';
        for(auto az:ans)
            cout<<az+1<<' ';
        cout<<'\n';
    }
    return 0;
}