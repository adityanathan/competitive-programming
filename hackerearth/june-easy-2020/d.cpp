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
    int n,q,type;
    string s;
    char a,b;
    cin>>n>>s>>q;
    unordered_map<char,set<char>> m;
    map<pair<char,char>,int> f;
    forn(i,0,n/2)
		if(s[i]!=s[n-1-i])
			f[make_pair(min(s[i],s[n-1-i]),max(s[i],s[n-1-i]))]++;
	forn(i,0,26)
		m[i+'a'].insert(i+'a');
    while(q--){
    	cin>>type;
    	if(type==1){
    		cin>>a>>b;
    		for(auto bf:m[b])
    			m[a].insert(bf);
    		for(auto af:m[a])
    			if(af!=a)
    				m[af]=m[a];
    	}
    	else{
    		int cost=0;
    		set<pair<char,char>> x;
    		for(auto pp:f)
    			if(!m[pp.first.first].count(pp.first.second))
    				cost+=pp.second;
    			else 
    				x.insert(pp.first);
    		for(auto pp:x)
    			f.erase(pp);
    		debug(f);
    		cout<<cost<<'\n';
    	}
    }
    return 0;
}