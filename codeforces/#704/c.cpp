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
    int n,m,ans=1;
    string s,t;

    cin>>n>>m>>s>>t;

    vector<int> b(m), b2(m);

    map<char,vector<int>> mp;

    forn(i,0,n)
    	mp[s[i]].push_back(i);

    forn(i,0,m)
    	b[i]=*upper_bound(mp[t[i]].begin(),mp[t[i]].end(),i?b[i-1]:-1);

    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    mp.clear();

    forn(i,0,n)
    	mp[s[i]].push_back(i);

    forn(i,0,m)
    	b2[i]=*upper_bound(mp[t[i]].begin(),mp[t[i]].end(),i?b2[i-1]:-1);

    reverse(b2.begin(),b2.end());

    forn(i,0,m)
    	b2[i]=n-1-b2[i];

    debug(b,b2);

    forn(i,0,m-1)
    	ans=max(ans,b2[i+1]-b[i]);

    cout<<ans;
    
    return 0;
}