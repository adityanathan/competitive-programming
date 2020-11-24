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
    int n,t,aa;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(1);
        set<int> s;
        map<int,int> m;
        cin>>a[0];
        s.insert(a[0]);
        forn(i,1,n){
        	cin>>aa;
        	if(aa!=a.back())
        		a.push_back(aa),
        		s.insert(aa);
        }
        int ans=a.size();

        forn(i,1,a.size()-1)
        	if(a[i]!=a[i-1])
        		m[a[i]]++;
        for(auto x:s)
        	ans=min(ans,m[x]);

        cout<<(m.size()<=1?0:ans+1)<<'\n';
    }
    return 0;
}