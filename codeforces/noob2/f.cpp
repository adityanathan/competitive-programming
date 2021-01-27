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
        ll i=0, j=0, sum=0, ans=0;
        map<int,int> m;
        while(i<n){
        	while(sum<=k && j<n){
        		if(m[a[j]]==0)
        			sum+=a[j];
        		m[a[j]]++;
        		if(sum<=k)
        			ans=max(ans,j+1-i);
        		j++;
        	}
        	if(j==n)
        		break;
        	m[a[i]]--;
        	if(m[a[i]]==0)
        		sum-=a[i];
        	i++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}