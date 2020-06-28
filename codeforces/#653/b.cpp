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
    ll n,t,m;
    bool b;
    cin>>t;

    while(t--){
        cin>>n;
        m=0;
        b=1;
        while(n!=1){
        	if(n%6==0)
        		n/=6,m++;
        	else{
        		n*=2;
        		m++;
        		if(n%6){
        			b=false;
        			break;
        		}
        	}
        }
        cout<<(b?m:-1)<<'\n';
    }
    return 0;
}