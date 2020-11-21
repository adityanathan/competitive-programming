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
    int n,q,t,l,r;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>q>>s;
        vector<int> a(n+1), b(n+1);
        forn(i,0,n)
        	a[i+1]=a[i]+(s[i]=='0'),
        	b[i+1]=b[i]+(s[i]=='1');

        while(q--){
        	cin>>l>>r;
        	bool bb=false;
        	if((s[l-1]=='0' && a[l-1] || s[l-1]=='1' && b[l-1]))
        		bb=true;
        	else if(s[r-1]=='0' && a[n]-a[r] || s[r-1]=='1' && b[n]-b[r])
        			bb=true;
        	cout<<(bb?"YES\n":"NO\n");

        }
    }
    return 0;
}