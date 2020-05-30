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
    int n,t,m;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n),b;
        forn(i,0,n){
            cin>>a[i];
            if(a[i])
                b.push_back(i);
        }
        m=b.size();
        forn(i,0,m)
            forn(j,0,m){
                if()
            }
        cout<<n<<'\n';
    }
    return 0;
}