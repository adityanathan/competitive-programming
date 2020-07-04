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
    int n,t,m,mi,ma,ans;
    cin>>t;

    while(t--){
        cin>>n>>m;
        mi=INT_MAX,ans=ma=0;
        vector<vector<int>> a(n,vector<int>(m));
        forn(i,0,n*m){
        	cin>>a[i/m][i%m];
        	mi=min(mi,a[i/m][i%m]);
        	ma=max(ma,a[i/m][i%m]);
        }
        unordered_set<int> row,col;
        forn(i,0,n)
        	forn(j,0,m)
        		if(a[i][j]==mi||a[i][j]==ma)
        			row.insert(i),col.insert(j);

        forn(i,0,n)
        	forn(j,0,m)
        		if(row.count(i)+col.count(j)==0)
        			ans++;

        cout<<ans<<'\n';
    }
    return 0;
}