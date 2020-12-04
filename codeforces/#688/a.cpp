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
    int n,t,m,aa;
    cin>>t;

    while(t--){
        cin>>n>>m;
        int ans=0;
        map<int,int> mm;
        forn(i,0,n)
        	cin>>aa, mm[aa]++;
        forn(i,0,m)
        	cin>>aa, ans+=mm[aa]>0;
        cout<<ans<<'\n';
    }
    return 0;
}