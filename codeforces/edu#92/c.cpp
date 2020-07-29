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
    int t,n,ans,now;
    string s;
    bool b;
    cin>>t;

    while(t--){
        cin>>s;
        n=ans=s.length();
        forn(x,0,10)
        	forn(y,0,10){
        		b=now=0;
        		forn(i,0,n){
        			if(!b&&s[i]=='0'+x)
        				b=1;
        			else if(b&&s[i]=='0'+y)
        				b=0;
        			else
        				now++;
        		}
        		now+=b&&(x!=y);
        		if(ans>now)
        			debug(x,y,now);
        		ans=min(ans,now);
        	}

        cout<<ans<<'\n';
    }
    return 0;
}