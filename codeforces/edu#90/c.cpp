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
    ll t,res,ans;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        res=ans=0;
        forn(i,0,s.length()){
        	res+=s[i]=='+'?1:-1;
        	if(res<0)
        		ans+=i+1,res++;
        }
        debug(res);
        cout<<ans+(res>=0?s.length():0)<<'\n';
    }
    return 0;
}