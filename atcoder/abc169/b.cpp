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
    ll x=1,ai;
    bool zero=false,b=true;

    {
        cin>>n;

        forn(i,0,n){
        	cin>>ai;
        	// debug(log10(x)+log10(ai),x*ai-(ll)1e18);
        	if(ai==0)
        		zero=true;
        	else if(!zero && log10(x)+log10(ai)>18)
        		b=false;
        	else if(x*ai>(ll)1e18)
        		b=false;
        	else if(!zero)
        		x*=ai;
        }
        if(zero)
        	cout<<0<<'\n';
        else if(b)
        	cout<<x<<'\n';
        else
        	cout<<-1<<'\n';
    }
    return 0;
}