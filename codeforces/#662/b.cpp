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
    int n,q,aa;
    char s;
  
    cin>>n;
    map<int,int> mp;
    vector<map<int,int>> m(5);

    forn(i,0,n)
    	cin>>aa, mp[aa]++;
    forit(it,mp)
	    if(it->second>=8)
    		m[5-1].insert(*it);
    	else if(it->second>=6)
    		m[4-1].insert(*it);
    	else if(it->second>=4)
    		m[3-1].insert(*it);
    	else if(it->second>=2)
    		m[2-1].insert(*it);
    	else
    		m[1-1].insert(*it);
    cin>>q;

    while(q--){
    	cin>>s>>aa;
    	int id=0;
    	forn(i,0,5)
    		if(m[i].find(aa)!=m[i].end())
    			id=i;
    	
    	if(s=='+'){
    		m[id][aa]++;
    		if(id<4 && m[id][aa]>=2*id+2)
    			m[id+1][aa]=m[id][aa], m[id].erase(aa);
    	}
    	else{
    		m[id][aa]--;
    		if(id && m[id][aa]<2*id)
    			m[id-1][aa]=m[id][aa], m[id].erase(aa);
    	}
    	if(m[4].size())
    		cout<<"YES\n";
    	else if(m[3].size()>=1 && m[3].size()-1 + m[2].size() + m[1].size()>=1)
    		cout<<"YES\n";
    	else if(m[2].size()>=2)
    		cout<<"YES\n";
    	else if(m[2].size() && m[1].size()>=2)
    		cout<<"YES\n";
    	else cout<<"NO\n";
    }
    return 0;
}