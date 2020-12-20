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
 
bool check(ll n){
    ll x=n;
    while(x)
        if(x%10 && n%(x%10))
            return 0;
        else
            x/=10;
    
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t;
    cin>>t;
 
    while(t--){
        cin>>n;
        while(!check(n++));
        cout<<n-1<<'\n';
    }
    return 0;
}