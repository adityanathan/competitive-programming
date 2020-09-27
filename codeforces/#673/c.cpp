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
        vector<int> a(n),ans(n+1,1e8);
        map<int,int> m, smallest;
        forn(i,0,n){
        	cin>>a[i];
        	if(m.find(a[i])==m.end())
        		smallest[a[i]]=i+1;
        	else
        		smallest[a[i]]=max(smallest[a[i]],i+1-m[a[i]]);
        	m[a[i]]=i+1;
        }
        for(auto x:m)
        	smallest[x.first]=max(smallest[x.first],n+1-x.second);
        for(auto x:smallest)
        	ans[x.second]=min(ans[x.second],x.first);
        int now=-1;
        forn(i,0,n+1)
        	if(ans[i]==1e8)
        		ans[i]=now;
        	else if(now>ans[i]||now==-1)
        		now=ans[i];
        	else
        		ans[i]=now;

        forn(i,1,n+1)
        	cout<<ans[i]<<' ';
        cout<<'\n';
    }
    return 0;
}