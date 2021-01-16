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
    int a[5],sum=0, mini=10;

    forn(i,0,5){
    	cin>>a[i];
    	if(a[i]%10)
    		mini=min(mini,a[i]%10);
    	while(a[i]%10)
    		a[i]++;
    	sum+=a[i];
    }
    cout<<sum+mini-10<<'\n';
    
    return 0;
}