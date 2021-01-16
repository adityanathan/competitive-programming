#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.rbegin(); it!=m.rend(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y,z,k;

    cin>>x>>y>>z>>k;
    vector<ll> a(x), b(y), c(z);
    forn(i,0,x)
    	cin>>a[i];
    forn(i,0,y)
    	cin>>b[i];
    forn(i,0,z)
    	cin>>c[i];
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    priority_queue<pair<ll,vector<int>>> pq;
    map<vector<int>,ll> m, seen;
    pq.push({a[0]+b[0]+c[0],{0,0,0}});
    while(m.size()<k){
    	auto [ans,v]=pq.top();
    	pq.pop();
    	m[v]=ans;
    	if(v[0]+1<x && !seen.count({v[0]+1,v[1],v[2]})){
    		seen[{v[0]+1,v[1],v[2]}]=1;
    		pq.push({a[v[0]+1]+b[v[1]]+c[v[2]],{v[0]+1,v[1],v[2]}});
    	}
    	if(v[1]+1<y && !seen.count({v[0],v[1]+1,v[2]})){
    		seen[{v[0],v[1]+1,v[2]}]=1;
    		pq.push({a[v[0]]+b[v[1]+1]+c[v[2]],{v[0],v[1]+1,v[2]}});
    	}
    	if(v[2]+1<z && !seen.count({v[0],v[1],v[2]+1})){
    		seen[{v[0],v[1],v[2]+1}]=1;
    		pq.push({a[v[0]]+b[v[1]]+c[v[2]+1],{v[0],v[1],v[2]+1}});
    	}
    }
    multiset<ll> ans;
    forit(it,m)
    	ans.insert(it->second);

    forit(it,ans)
    	cout<<*it<<'\n';
    
    return 0;
}