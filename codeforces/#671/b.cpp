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
    ll n,t;
    cin>>t;

    while(t--){
        cin>>n;
        ll side=1, cnt=0;
        while(n>=0){
        	n-=side*(side+1)/2;
        	side=2*side+1;
        	cnt++;
        }
        cout<<cnt-1<<'\n';
    }
    return 0;
}