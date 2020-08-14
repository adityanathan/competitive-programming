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
    string s;
    cin>>t;

    while(t--){
        cin>>n>>s;
        ll ans=0,curr=0;
        map<int,int> m;
        forn(i,0,n){
        	curr+=s[i]-'0'-1;
        	ans+=m[curr]+(curr==0);
        	m[curr]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}