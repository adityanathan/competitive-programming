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
    ll n,a,b,c,q,sum=0;
    map<int,int> m;
    cin>>n;

    forn(i,0,n){
    	cin>>a;
    	m[a]++;
    	sum+=a;
    }

    cin>>q;

    forn(i,0,q){
    	cin>>b>>c;
    	sum+=(c-b)*m[b];
    	m[c]+=m[b];
    	m.erase(b);
    	cout<<sum<<'\n';
    }
    
    return 0;
}