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
    ll n,t,vc=0,vg=0,ans=0,prin=1;
    string s;
    cin>>t>>n>>s;
    forn(i,0,n)
    	if(s[i]=='C')
    		vc++;
    	else if(s[i]=='G')
    		vg++;

    forn(i,0,t){
        cin>>n>>s;
        ll c=0, g=0;
        forn(i,0,n)
        	if(s[i]=='C')
        		c++;
        	else if(s[i]=='G')
        		g++;
        if(c*vg+g*vc>ans)
        	ans=c*vg+g*vc, prin=i+1;
    }
    cout<<prin<<'\n';
    return 0;
}