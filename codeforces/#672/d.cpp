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

ll p=998244353;
ll power(ll x, int y){ 
    ll res = 1;
    x = x % p;
    while (y > 0) { 
        if (y & 1) 
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p; 
    } 
    return res; 
} 

ll modInverse(ll n){ 
    return power(n, p - 2); 
} 

ll fastNCR(ll n, int r){ 
    if(!r) 
        return 1; 
    ll fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
  
    return (fac[n] * modInverse(fac[r]) % p * modInverse(fac[n - r]) % p) % p; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,li,ri;
    ll final=0;
    set<int> all;
    set<set<int>> ans;
    set<int> on;
    unordered_map<int,vector<int>> l,r;
    cin>>n>>k;
    forn(i,0,n)
    	cin>>li>>ri, l[li].push_back(i), r[ri+1].push_back(i), all.insert(li), all.insert(ri+1);
    for(auto time:all){
    	if(l.find(time)!=l.end())
    		for(auto it:l[time])
    			on.insert(it);
    	if(r.find(time)!=r.end())
    		for(auto it:r[time])
    			on.erase(it);
    	if(on.size()>=k)
    		ans.insert(on);
    	
    }
    for(auto x:ans)
    	final+=fastNCR(x.size(),k);
    cout<<final%p<<'\n';
    
    return 0;
}