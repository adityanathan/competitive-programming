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
    int n,d,m;
    ll ans=0;
    cin>>n>>d>>m;
    vector<int> aa(n);
    forn(i,0,n)
    	cin>>aa[i];
    sort(aa.begin(),aa.end());
    deque<int> a;
    for(auto x:aa)
    	a.push_back(x);

    while(n){
    	ll sum=0;
    	forn(i,0,min(n-1,d)){
    		if(a.front()>=m)
    			break;
    		sum+=a.front(), a.pop_front();
    	}
    	if(sum<a.back())
    		ans+=a.back(), a.pop_back();


    	n=a.size();
    }
    
    return 0;
}