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
    int n;
    
    cin>>n;
    vector<int> a(n);
    vector<pair<int,int>> seg;
    forn(i,0,n)
    	cin>>a[i];
    seg.push_back({a[0],1});
    forn(i,1,n)
    	if(a[i]==a[i-1])
    		seg[seg.size()-1].second++;
    	else
    		seg.push_back({a[i],1});
    debug(seg);
    int ans=0;
    forn(i,0,seg.size())
    	if(seg[i].second==1)
    		ans++;
    	else
    		ans+=1+!(i>1&&seg[i].first==seg[i-2].first&&seg[i-2].second>1);
    cout<<ans<<'\n';
    
    return 0;
}