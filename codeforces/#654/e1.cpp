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
    ll i,n,p,ans;

    cin>>n>>p;
    vector<int> a(n),all;
    forn(i,0,n)
        cin>>a[i];
    sort(a.begin(),a.end());
    forn(x,1,n+1){
        for(i=0;i<n;i++)
            if(a[i]-i>x)
                break;
        if(i<n)
            continue;
        ans=1;
        forn(i,0,n){
            ans*=a[n-1-i]-(n-1)-x+1;
            ans%=p;
        }
        if(ans)
            all.push_back(x);
    }
    cout<<all.size()<<'\n';

    for(auto x:all)
        cout<<x<<' ';

    return 0;
}