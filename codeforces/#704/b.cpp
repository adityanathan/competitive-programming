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
        int mx=0;
        vector<int> a(n),mxs,ans;
        forn(i,0,n){
        	cin>>a[i];
        	if(mx<a[i])
        		mx=a[i], mxs.push_back(i);
        }
        forn(i,0,mxs.size()){
        	int z=mxs[mxs.size()-1-i];
        	// debug(z,n,ans);
        	while(z<n)
        		ans.push_back(a[z++]);
        	n=mxs[mxs.size()-1-i];
        }
        for(auto x:ans)
        	cout<<x<<' ';

        cout<<'\n';
    }
    return 0;
}