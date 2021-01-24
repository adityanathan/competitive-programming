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
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        forn(i,0,n)
            cin>>a[i];
        forn(i,0,n/2)
            cout<<a[i]<<' '<<a[n-1-i]<<' ';
        if(n%2)
            cout<<a[n/2];
        cout<<'\n';
    }
    return 0;
}