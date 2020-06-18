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
    ll n,count=0;
    cin>>n;
    while(pow(count,10)<n)
    	count++;
    vector<ll> c(10,count-1);
    while(c[0]*c[1]*c[2]*c[3]*c[4]*c[5]*c[6]*c[7]*c[8]*c[9]<n){
    	forn(i,0,10)
    		if(c[0]*c[1]*c[2]*c[3]*c[4]*c[5]*c[6]*c[7]*c[8]*c[9]>=n)
    			break;
    		else
    			c[i]++;
    	debug(c);
    }
    string s="codeforces";
    forn(i,0,10)
    	while(c[i]--)
    		cout<<s[i];
    return 0;
}