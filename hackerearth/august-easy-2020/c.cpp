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
    string s, ans;
    int maxnow, global=0, i, n;
    cin>>s;
    n = s.size();
    for(i=1;i<27;i++){
    	map<string,int> m;
    	for(int j=0;j+i<=n;j++)
    		m[s.substr(j,i)]++;
    	maxnow=0;
    	forit(it,m)
    		maxnow=max(maxnow,it->second);
    	// debug(maxnow,i,m);
    	if(maxnow<global)
    		break;
    	global = maxnow;
    }
    i--;
    map<string,int> m, m2;
	for(int j=0;j+i<=n;j++){
		if(m2.find(s.substr(j,i))==m2.end())
			m2[s.substr(j,i)]=j;
		m[s.substr(j,i)]++;
	}
	ans=s.substr(n-i,i);
	debug(m,m2,global);
	forit(it,m)
		if(it->second==global && m2[ans]>m2[it->first])
			ans=it->first;

	cout<<ans;
    return 0;
}