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
    int n,a,x,her=0;
    {
        cin>>n>>a;
        unordered_map<int,int> m,m2;
        forn(i,0,n){
        	cin>>x;
        	if(x==a)
        		her++;
        	else if(her==0)
        		m[x]++;
        	else if(m.find(x)!=m.end())
        		m[x]++;
        	if(x==a){
	        	forit(it,m)
	        		if(it->second>=her)
	        			m2.insert(*it);
        		m = m2;
        	}
        	m2.clear();
        	if(m.size()==0)
        		break;
        	debug(m);
        }

        cout<<(m.size()==0?-1:m.begin()->first)<<'\n';
    }
    return 0;
}