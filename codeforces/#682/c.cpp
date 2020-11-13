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
        vector<vector<int>> a(n,vector<int>(m));
        forn(i,0,n)
        	forn(j,0,m){
        		cin>>a[i][j];
        		if((i+j+a[i][j])%2)
        			a[i][j]++;
        	}
        forn(i,0,n){
        	forn(j,0,m)
        		cout<<a[i][j]<<' ';
	        cout<<'\n';
	    }
    }
    return 0;
}