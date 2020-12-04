#pragma GCC optimize("Ofast") 
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

ll area(ll i, ll j, ll ai, ll aj, ll bi, ll bj){
	if(abs(ai)>1e8||abs(aj)>1e8||abs(bi)>1e8||abs(bj)>1e8)
		return 0;
	return abs(i*aj+ai*bj+bi*j-i*bj-ai*j-bi*aj);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<string> a(n);
        vector<vector<ll>> mxr(10,vector<ll>(n,-1e9)),mnr(10,vector<ll>(n,1e9)), mxc(10,vector<ll>(n,-1e9)), mnc(10,vector<ll>(n,1e9));
        forn(i,0,n){
        	cin>>a[i];
        	forn(j,0,n)
        		mxr[a[i][j]-'0'][i]=max(mxr[a[i][j]-'0'][i],j),
        		mxc[a[i][j]-'0'][j]=max(mxc[a[i][j]-'0'][j],i),
        		mnr[a[i][j]-'0'][i]=min(mnr[a[i][j]-'0'][i],j),
        		mnc[a[i][j]-'0'][j]=min(mnc[a[i][j]-'0'][j],i);
        }
        
        forn(d,0,10){
        	ll ans=0;
        	forn(i,0,n)
        		forn(j,0,n){
        			if(abs(mxr[d][i])>1e8||abs(mxc[d][j])>1e8||abs(mnr[d][i])>1e8||abs(mnc[d][j])>1e8)
        				continue;
        			ans=max(ans,max(area(i,0,i,mxr[d][i],mxc[d][j],j),area(i,0,i,mxr[d][i],mnc[d][j],j)));
        			ans=max(ans,max(area(i,n-1,i,mnr[d][i],mxc[d][j],j),area(i,n-1,i,mnr[d][i],mnc[d][j],j)));
        			ans=max(ans,max(area(0,j,i,mxr[d][i],mxc[d][j],j),area(0,j,i,mnr[d][i],mxc[d][j],j)));
        			ans=max(ans,max(area(n-1,j,i,mxr[d][i],mnc[d][j],j),area(n-1,j,i,mnr[d][i],mnc[d][j],j)));
        			ans=max(ans,max(max(0ll,mxr[d][i]-mnr[d][i])*max(n-1-i,i),max(0ll,mxc[d][j]-mnc[d][j])*max(n-1-j,j)));
        		}
        	cout<<ans<<' ';
        }
        cout<<'\n';
    }
    return 0;
}