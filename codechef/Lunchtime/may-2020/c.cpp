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
    int n,t,maxn,minn;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        forn(i,0,n)
            cin>>a[i];
        ll c=0;
        forn(l,0,n){
            minn=1e9+3;
            maxn=0;
            forn(r,l,n){
                maxn=max(maxn,a[r]);
                minn=min(minn,a[r]);
                if(a[l]==maxn && a[r]==minn || a[r]==maxn && a[l]==minn)
                    c++;
            }
        }
        cout<<c<<'\n';
    }
    return 0;
}