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
        vector<ll> a(2*n);
        forn(i,0,2*n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        bool b=true;
        forn(i,0,n)
        	if(a[2*i]!=a[2*i+1]||a[2*i]%2||a[2*i+1]%2)
        		b=false;
        
        cout<<(b&&(n==1||a[0]>=2*(a[2*n-1]-a[0])-(a[2*n-1]-a[2*n-3]))?"YES":"NO")<<'\n';
    }
    return 0;
}