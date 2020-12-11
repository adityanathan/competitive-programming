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

set<ll> s;
vector<ll> a,sum;

void summ(int l, int r){
	if(l>r)
		return;
	if(l==r || a[l]==a[r]){
		s.insert(sum[r+1]-sum[l]);
		return;
	}

	s.insert(sum[r+1]-sum[l]);
	int mid=upper_bound(a.begin()+l,a.begin()+r+1,(a[r]+a[l])/2)-a.begin();
	summ(l,mid-1);
	summ(mid,r);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t,x,q;
    cin>>t;

    while(t--){
        cin>>n>>q;
        a.assign(n,0);
        sum.assign(n+1,0);
        s.clear();
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        forn(i,0,n)
        	sum[i+1]=sum[i]+a[i];
        summ(0,n-1);
        while(q--)
        	cin>>x,
        	cout<<(s.count(x)?"Yes\n":"No\n");
    }
    return 0;
}