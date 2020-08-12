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
    int n,m,x=0;
    
    cin>>n>>m;
    vector<int> a(n), b(m);
    forn(i,0,n){
    	cin>>a[i];
    	x|=a[i];
    }
    forn(i,0,m)
    	cin>>b[i];

    vector<vector<int>> ans(n,b);

    for(int dig=8;dig>=0;dig--){
    	if((x&(1<<dig))==0)
    		continue;
    	bool b=true;
    	vector<vector<int>> c(n);
    	forn(i,0,n)
    		if(a[i]&(1<<dig)){
    			for(auto num: ans[i])
    				if(!(num&(1<<dig)))
    					c[i].push_back(num);
    			if(c[i].size()==0)
    				b=false;
    		}
    		else
    			c[i]=ans[i];
    	if(b)
    		x=x&~(1<<dig), ans=c;
    	
    	debug(dig,ans);
    }
    cout<<x<<'\n';
    
    return 0;
}