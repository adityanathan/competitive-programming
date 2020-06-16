#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.rbegin(); it!=m.rend(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,t;
    string s;
    cin>>t;

    while(t--){
        cin>>s>>m;
        vector<int> b(m),c;
        string ans(m,s[0]);

        forn(i,0,m)
        	cin>>b[i];

        map<char,int> st;

        forn(i,0,s.length())
        	st[s[i]]++;

        forit(it,st){
        	c.clear();
	        forn(i,0,m)
	        	if(b[i]==0)
	        		c.push_back(i);
	        while(it->second<c.size() && it!=st.rend())
	        	it++;
	        for(auto x:c){
	        	int i=x;
	        	ans[i]=it->first;
	        	while(i>0)
	        		if(b[i-1]>0)
	        			--i,b[i]-=x-i;
	        		else
	        			--i;
	        	i=x;
	        	while(i<m-1)
	        		if(b[i+1]>0)
	        			++i,b[i]-=i-x;
	        		else
	        			++i;
	        	b[x]=-1;
	        }
	    }
        cout<<ans<<'\n';
    }
    return 0;
}