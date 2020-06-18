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
    ll n,aa,sq=0;
    {
        cin>>n;
        vector<ll> a(20,0);
        forn(i,0,n){
        	cin>>aa;
        	forn(i,0,20){
        		a[i]+=aa%2;
        		aa/=2;
        	}
        }
        debug(a);
        forn(i,0,n){
        	aa=0;
        	forn(i,0,20){
        		aa*=2;
        		if(a[19-i]){
        			aa+=1;
        			a[19-i]--;
        		}
        		debug(aa,i,a);
        	}
        	sq+=aa*aa;
        }
        cout<<sq<<'\n';
    }
    return 0;
}