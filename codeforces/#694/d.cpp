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

int pf(ll n){
	map<ll,int> m;
	while(n%2==0)
		m[2]++, n/=2;
	for(int i=3;i<=sqrt(n);i+=2)
		while(n%i==0)
			m[i]++, n/=i;
	if(n>2)
		m[n]++;
	int ans=1;
	for(auto x:m)
		ans*=pow(x.first,x.second-x.second%2);
	return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,q,w,aa,t,x;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,int> m, m2;
        forn(i,0,n){
        	cin>>aa, x=pf(aa), m[aa/x]++;
        	debug(aa,x);
        }
        int ans[2]={0,0};
        debug(m);
        for(auto x:m)
        	ans[0]=max(ans[0],x.second),
        	m2[x.second%2?x.first:1]+=x.second;
        for(auto x:m2)
        	ans[1]=max(ans[1],x.second);
        cin>>q;
        while(q--){
        	cin>>w;
        	cout<<ans[w>0]<<'\n';
        }
    }
    return 0;
}