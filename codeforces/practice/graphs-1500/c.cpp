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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    
    cin>>n>>k;
    vector<int> a(k);
    set<int> seen;
    set<pair<int,int>> s;
    forn(i,0,k)
    	cin>>a[i];
    
    forn(i,0,k){
    	seen.insert(a[k-i-1]);
    	if(seen.count(a[k-1-i]))
    		s.insert({a[k-1-i],a[k-1-i]});
    	if(seen.count(a[k-1-i]+1))
    		s.insert({a[k-1-i],a[k-1-i]+1});
    	if(seen.count(a[k-1-i]-1))
    		s.insert({a[k-1-i],a[k-1-i]-1});
    }
    cout<<3*n-2-s.size()<<'\n';
    
    return 0;
}