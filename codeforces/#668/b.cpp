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
        ll res=0, ans=0;
        forn(i,0,n){
        	cin>>a[i];
        	res+=a[i];
        	if(res<0)
        		ans-=res, res=0;
        }

        cout<<ans<<'\n';
    }
    return 0;
}