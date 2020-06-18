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
    ll n,t,a,b,te,count;
    cin>>t;

    while(t--){
        cin>>a>>b>>n;
        if(a>b)
        	swap(a,b);
        count=0;
       	while(b<=n){
       		debug(b);
       		te=b;
       		b+=a;
       		a=te;
       		count++;
       	}
        cout<<count<<'\n';
    }
    return 0;
}