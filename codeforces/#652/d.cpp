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

vector<ll> a(2000001,-1);
int r = 1000000007;

ll f(ll n){
	if(a[n]==-1)
		a[n]=(f(n-1)%r + 2*f(n-2)%r + 4*(n%3==0))%r;
	return a[n];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;
    a[0]=a[1]=a[2]=0;
    while(t--){
        cin>>n;
        cout<<f(n)<<'\n';
    }
    return 0;
}