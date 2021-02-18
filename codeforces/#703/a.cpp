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
    int n,h,t;
    cin>>t;

    while(t--){
        cin>>n;
        ll tot=0;
        bool b=true;
        forn(i,0,n)
        	cin>>h, tot+=h, b=b&&tot>=i*(i+1)/2;

        cout<<(b?"YES":"NO")<<'\n';
    }
    return 0;
}