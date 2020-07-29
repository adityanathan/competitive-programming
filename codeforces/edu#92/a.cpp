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
    int l,r,t;
    cin>>t;

    while(t--){
        cin>>l>>r;
        cout<<(2*l>r?-1:l)<<' ';
        cout<<(2*l>r?-1:2*l)<<'\n';
    }
    return 0;
}