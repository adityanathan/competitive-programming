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
    int n,k,t,isl,ans;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>k>>s;
        ans=0;
        forn(i,0,n){
        	isl = k*(i==0);
        	while(s[i]=='0' && i<n)
        		isl++,i++;
        	if(isl==n+2*k)
        		isl=n;
        	isl+=k*(i==n);
        	ans+=max(0,(isl-k)/(k+1));
        }
        cout<<ans<<'\n';
    }
    return 0;
}