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
    int n,x,t,mi;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(2*n);
        x=0;
        forn(i,0,2*n)
        	cin>>a[i];
        mi=-1;
        forn(i,0,2*n){
        	if(mi<a[i] && x<n) 
        		x++,debug(a[i]),mi=max(mi,a[i]);
        }

        cout<<(x==n?"YES":"NO")<<'\n';
    }
    return 0;
}