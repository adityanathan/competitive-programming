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
    int n,t,k,z,ans,max2;
    cin>>t;

    while(t--){
        cin>>n>>k>>z;
        k++;
        ans=max2=0;
        vector<int> a(n),b;
        forn(i,0,n){
        	cin>>a[i];
        	if(i && i<k)
        		max2=max(max2,a[i]+a[i-1]);
        }
        if(k==1){
        	cout<<a[0]<<'\n';
        	continue;
        }
        forn(i,0,k-1)
        	b.push_back(a[i]);
        // if(z&& k>2)
        // 	b.push_back(max(a[k-1],a[k-3]));
        // else
        	b.push_back(a[k-1]);
        while(z && b.size()>1)
        	if(max2>b[b.size()-1]+b[b.size()-2])
        		ans+=max2, b.pop_back(), b.pop_back(), z--;//, debug(max2,z,b);
        	else
        		break;
        for(auto x:b)
        	ans+=x;
        cout<<ans<<'\n';
    }
    return 0;
}