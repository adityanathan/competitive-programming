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
    int n,t,m,x;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<map<int,int>> a(n+m-1);
        forn(i,0,n)
        	forn(j,0,m){
        		cin>>x;
        		a[i+j][x]++;
        	}
        int ans=0;
        forn(i,0,(n+m-1)/2)
        	ans+=min(a[i][0]+a[n+m-2-i][0],a[i][1]+a[n+m-2-i][1]);
        
        cout<<ans<<'\n';
    }
    return 0;
}