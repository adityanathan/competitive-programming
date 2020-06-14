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
    int k,carr=0;
    string s,t;
    cin>>k>>s>>t;

    string u(k,'a');
    vector<int> ex(k,0);
    debug(u,k);
    forn(i,0,k)
    	if((s[k-1-i]+t[k-1-i])%2)
    		ex[k-1-i+1]=13;
    debug(ex);
    forn(i,0,k){
    	u[k-1-i]='a'+((s[k-1-i]-'a'+t[k-1-i]-'a')/2+ex[k-1-i]+carr)%26;
    	carr=((s[k-1-i]-'a'+t[k-1-i]-'a')/2+ex[k-1-i]+carr)/26;
    }
    debug(u);
    cout<<u<<'\n';
    return 0;
}