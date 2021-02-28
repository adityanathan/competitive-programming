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
    int n,l,t;
    string s;
    cin>>t;

    while(t--){
        cin>>n;
        int ans=0;
        map<string,map<int,int>> m;
        forn(i,0,n)
        	cin>>s>>l, m[s][l]++;
        for(auto x:m)
        	ans+=max(x.second[0],x.second[1]);
        cout<<ans<<'\n';
    }
    return 0;
}