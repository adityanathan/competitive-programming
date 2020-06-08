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
    int n,a;
    {
        cin>>n;
        map<int,int> m,mm,x;
        forn(i,0,n){
        	cin>>a;
        	m[a]=i+1;
        }
        forn(i,0,n){
        	cin>>a;
        	mm[a]=i+1;
        }
        forn(i,1,n+1){
        	x[(n+m[i]-mm[i])%n]++;
        }
        int ans=0;
        forit(it,x)
        	ans=max(ans,it->second);
        cout<<ans<<'\n';
    }
    return 0;
}