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
        vector<ll> a(n);
        ll mini=INT_MAX, maxi=INT_MIN;
        ll sum=0;
        forn(i,0,n)
        	cin>>a[i],mini=min(mini,a[i]), sum+=a[i], maxi=max(maxi,a[i]);
        if(n==2)
        	cout<<"0\n";
        else if(maxi*(n-1)>=sum)
        	cout<<max(0ll,maxi*(n-1)-sum+(n-1)*((maxi*(n-1)-sum)<0))<<'\n';
        else
        	cout<<n-1-sum%(n-1)<<'\n';
    }
    return 0;
}