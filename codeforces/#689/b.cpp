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
    int n,m,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<string> a(n);
        vector<vector<int>> s(n,vector<int>(m+1));
        forn(i,0,n){
        	cin>>a[i];
        	forn(j,1,m+1)
        		s[i][j]=s[i][j-1]+(a[i][j-1]=='*');
        }
        debug(s);
        ll ans=0;
        forn(i,0,n)
        	forn(j,0,m){
        		int k=0;
        		while(k+i<n && j+k+1<=m && j-k>=0 && s[i+k][j+k+1]-s[i+k][j-k]==2*k+1)
        			k++;
        		ans+=k;
        	}

        cout<<ans<<'\n';
    }
    return 0;
}