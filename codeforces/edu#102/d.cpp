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
    int n,m,t,l,r;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>m>>s;
        vector<int> a(n+1), mx, mn, mxr, mnr;
        forn(i,0,n)
        	a[i+1]=a[i]+(s[i]=='+'?1:-1);
        int maxx=-1e9, minn=1e9, maxxr=-1e9, minnr=1e9;
        forn(i,0,n+1){
        	if(a[n-i]>maxxr)
        		maxxr=a[n-i], mxr.push_back(n-i);
        	if(a[n-i]<minnr)
        		minnr=a[n-i], mnr.push_back(n-i);
        	if(a[i]>maxx)
        		maxx=a[i], mx.push_back(i);
        	if(a[i]<minn)
        		minn=a[i], mn.push_back(i);
        }
        reverse(mnr.begin(),mnr.end());
        reverse(mxr.begin(),mxr.end());
        debug(a,mx,mn,mxr,mnr);
        while(m--){
        	cin>>l>>r;
        	maxx=lower_bound(mx.begin(),mx.end(),l)-mx.begin()-1>=0?a[mx[lower_bound(mx.begin(),mx.end(),l)-mx.begin()-1]]:-1e9;
        	minn=lower_bound(mn.begin(),mn.end(),l)-mn.begin()-1>=0?a[mn[lower_bound(mn.begin(),mn.end(),l)-mn.begin()-1]]:1e9;
        	maxxr=upper_bound(mxr.begin(),mxr.end(),r)!=mxr.end()?a[*upper_bound(mxr.begin(),mxr.end(),r)]:-1e9;
        	minnr=upper_bound(mnr.begin(),mnr.end(),r)!=mnr.end()?a[*upper_bound(mnr.begin(),mnr.end(),r)]:1e9;
        	cout<<max(maxx,maxxr-a[r]+a[l-1])-min(minn,minnr-a[r]+a[l-1])+1<<'\n';
        }
    }
    return 0;
}