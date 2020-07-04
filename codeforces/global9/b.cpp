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
    int n,m,t,aa;
    bool b;
    cin>>t;

    while(t--){
        cin>>n>>m;
        b=true;
        forn(i,0,n)
        	forn(j,0,m){
        		cin>>aa;
        		if(aa>4-(!i||i==n-1)-(j==m-1||!j))
        			b=false;
        	}
        cout<<(b?"YES":"NO")<<'\n';
        if(b)
        	forn(i,0,n){
	        	forn(j,0,m)
	        		cout<<4-(!i||i==n-1)-(j==m-1||!j)<<' ';
	        cout<<'\n';
        	}
    }
    return 0;
}