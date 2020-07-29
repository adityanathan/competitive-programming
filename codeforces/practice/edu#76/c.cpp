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
    int n,t,ans,a;
    cin>>t;

    while(t--){
        cin>>n;
        ans=n+1;
        map<int,int> m;
        forn(i,0,n){
        	cin>>a;
        	if(m.find(a)!=m.end())
        		ans=min(ans,i-m[a]+1);
        	m[a]=i;
        }
        cout<<(ans==n+1?-1:ans)<<'\n';
    }
    return 0;
}