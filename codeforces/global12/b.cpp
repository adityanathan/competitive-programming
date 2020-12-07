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
    int n,k,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<int> x(n),y(n);
        forn(i,0,n)
        	cin>>x[i]>>y[i];
        bool b=false;
        forn(i,0,n){
        	b=true;
        	forn(j,0,n)
        		if(abs(x[i]-x[j])+abs(y[i]-y[j])>k)
        			b=false;
        	if(b)
        		break;
        }
        

        cout<<(b?1:-1)<<'\n';
    }
    return 0;
}