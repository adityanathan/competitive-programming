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
    int n,k,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        if(k>10000){
        	cout<<"-1\n";
        	continue;
        }
        int ans=-1;
        forn(j,0,k){
        	debug(a);
        	forn(i,1,n)
        		if(a[i]>a[i-1]){
        			a[i-1]++;
        			if(j==k-1)
        				ans=i;
        			break;
        		}
        }
        cout<<ans<<'\n';
    }
    return 0;
}