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
    int val,t;
    ll a,b;
    cin>>t;

    while(t--){
        cin>>a>>b;
        val=0;
        bool bo=true;
        if(a>=b){
	        while(a>b){
	        	if(a%2)
	        		bo=false;
	        	a/=2;
	        	val++;
	        }
	        if(a==b && bo){
	        	cout<<val/3+(val%3!=0)<<'\n';
	        	continue;
	        }
	        else{
	        	cout<<"-1\n";
	        	continue;
	        }
	    }
	    else{
	        while(a<b){
	        	a*=2;
	        	val++;
	        }
	        if(a==b && bo){
	        	cout<<val/3+(val%3!=0)<<'\n';
	        	continue;
	        }
	        else{
	        	cout<<"-1\n";
	        	continue;
	        }
	    }
    }
    return 0;
}