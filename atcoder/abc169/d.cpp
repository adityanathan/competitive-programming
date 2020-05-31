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
    ll n,ans=0,i;
    cin>>n;
    map<ll,int> m;
    while (n % 2 == 0)  
    {  
        m[2]++;  
        n = n/2;  
    }    
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            m[i]++;  
            n = n/i;  
        }  
    }  
    if (n > 2)  
        m[n]++;
    forit(it,m){
    	i=0;
    	while(i*(i+1)/2<=it->second)
    		i++;
    	ans+=i-1;
    }
    cout<<ans<<'\n';
    return 0;
}