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
    ll n,t,ans,j;
    cin>>t;

    while(t--){
        cin>>n;
        ans=0;
        j=0;
        while(n){
        	if(n%2)
        		ans+=pow(2,j+1)-1;
        	n/=2;
        	j++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}