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
    ll n,x,y,t,nn;
    cin>>t;

    while(t--){
        cin>>x>>y>>n;
        nn=n;
        if(y==0){
        	cout<<n/x*x<<'\n';
        }
        else{
        	if(nn/x*x+y%x>n)
        		nn-=x;
        	cout<<nn/x*x+y%x<<'\n';
        }
    }
    return 0;
}