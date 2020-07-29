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
        vector<int> a(n);
        map<int,set<int>> m;
        forn(i,0,n)
        	cin>>a[i];
        cin>>m;
        forn(i,0,m)
        	cin>>p>>s, m[p].insert(s);
        int i=0, pw=0;
        while(i<n){
        	pw=max(pw,a[i]);
        	if(pw)
        }
        cout<<n<<'\n';
    }
    return 0;
}