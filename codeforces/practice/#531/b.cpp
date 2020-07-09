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
    int n,k,color=0;

    cin>>n>>k;
    map<int,vector<int>> m;
    vector<int> a(n);

    forn(i,0,n){
    	cin>>a[i];
    	m[a[i]].push_back(i);
    }
    forit(it,m){
    	if(it->second.size()>k){
    		cout<<"NO\n";
    		return 0;
    	}
    	for(auto i:it->second)
    		a[i]=(color++)%k+1;
    }
    cout<<"YES\n";
    forn(i,0,n)
    	cout<<a[i]<<' ';
    
    return 0;
}