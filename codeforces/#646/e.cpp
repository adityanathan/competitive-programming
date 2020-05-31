#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(ll i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<vector<ll>> tree;
vector<ll> vis,parent;
vector<ll> a,b,c;

void addEdge(ll a, ll b){ 
    tree[a].push_back(b);
    tree[b].push_back(a); 
}

void bfs(ll node) { 
    queue<pair<ll, int> > qu; 
  
    qu.push({ node, 1}); 
  
    while (!qu.empty()) { 
        pair<int, int> p = qu.front();
        qu.pop(); 
        parent[p.first] = p.second; 
        vis[p.first] = true;
        for (int child : tree[p.first]) { 
            if (!vis[child]) { 
                qu.push({ child, p.first }); 
            }
        }
    }
}

void opt(int node){ 
    queue<int> qu; 
  
    qu.push(node); 
  
    while (!qu.empty()) { 
        int p = qu.front();
        qu.pop(); 
        a[p] = min(a[p],a[parent[p]]); 
        vis[p] = true;
        for (int child : tree[p]) { 
            if (!vis[child]){ 
                qu.push(child); 
            }
        }
    }
}

pair<pair<int,int>,ll> dfs(int v) { 
    vis[v] = true;
    pair<pair<int,int>,ll> x; 
    int red=b[v]&&(!c[v]),blue=(!b[v])&&c[v];
    ll cost=0;
    for (int child: tree[v]) 
        if(!vis[child]){
            x=dfs(child);
            red+=x.first.first;
            blue+=x.first.second;
            cost+=x.second;
        }
    int sub=min(red,blue);
    debug(v,red,blue,cost);
    cost+=(ll)2*sub*a[v];
    red-=sub;
    blue-=sub;
    debug(v,red,blue,cost);
    return make_pair(make_pair(red,blue),cost);
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y;

    cin>>n;
    vector<ll> aa(n+1),bb(n+1),cc(n+1),emp(n+1);
    a=aa;
    b=bb;
    c=cc;
    vector<vector<ll>> t(n+1);
    tree=t;
    parent=vis=emp;
    forn(i,0,n)
    	cin>>a[i+1]>>b[i+1]>>c[i+1];
    forn(i,0,n-1){
    	cin>>x>>y;
    	addEdge(x,y);
    }
    bfs(1);
    vis=emp;
    opt(1);
    vis=emp;
    pair<pair<ll,ll>,ll> ans=dfs(1);
    if(ans.first.first || ans.first.second)
    	cout<<"-1\n";
    else
    	cout<<ans.second<<"\n";

    return 0;
}