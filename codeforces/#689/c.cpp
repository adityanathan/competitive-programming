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
    int n,m,r,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<int> a(n);
        int x=0;
        forn(i,0,n){
        	cin>>a[i];
        	if(a[i]!=i+1)
        		x=i+1;
        }

        double ans=0,p,kk=1;
        
        forn(i,0,m){
        	cin>>r>>p;
        	if(r>=x)
        		ans+=p*kk, kk*=1-p;
        }
        if(x==0){
        	cout<<"1.000000\n";
        	continue;
        }

        cout<<setprecision(15)<<ans<<'\n';
    }
    return 0;
}