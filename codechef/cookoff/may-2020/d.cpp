#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(x...) 141
#endif

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    ll ans,i;
    cin>>t;

    while(t--){
        cin>>n;
        if(!(n&(n-1))){
            cout<<"-1\n";
            continue;
        }
        ans=i=0;
        while(n){
            ans+=pow(2,i++)*(n/2+(n&1));
            n/=2;
        }
        cout<<ans-1<<"\n";
    }
    return 0;
}