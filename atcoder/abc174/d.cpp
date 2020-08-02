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
    int n,ans;
    string s;

    cin>>n>>s;
    ans=n;
    vector<int> wh(n+1);
    forn(i,0,n)
    	wh[i+1]=wh[i]+(s[i]=='W');
    forn(i,0,n+1)
    	ans=min(ans,wh[i]+n-i-(wh[n]-wh[i])-min(wh[i],n-i-(wh[n]-wh[i]))), debug(ans);
    cout<<ans<<'\n';
    
    return 0;
}