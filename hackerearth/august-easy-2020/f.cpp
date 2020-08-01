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
    ll n,m,ans=1;
    bool bb;
    
    cin>>n>>m;

    int a[n];
    forn(i,0,n)
        a[i]=i+1;

    while(next_permutation(a,a+n)){
        bb=true;
        forn(i,0,n)
            if(abs(a[i]-i-1)==m){
                bb=false;
                break;
            }
        ans+=bb;
    }
    cout<<ans;
    return 0;
}