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
    int n,m,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<int> a(n), b(n), c(m), ans(m);
        map<int,vector<int>> mp, all;
        map<int,int> reqd, reqd2;
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n){
        	cin>>b[i];
        	if(a[i]^b[i])
        		mp[b[i]].push_back(i), reqd2[b[i]]=i;
        	reqd[b[i]]=i;
        }
        int last=-1, last2=-1;
        forn(i,0,m){
        	cin>>c[i];
        	all[c[i]].push_back(i);
        }
        forn(i,0,n)
        	if(reqd.count(c[i])&&all[c[i]].size()>mp[c[i]].size())
        		last=i;
        	else if(mp[c[i]].size())
        		last2=i;

        bool bb=true;

        forn(i,0,m)
        	if(mp[c[m-i-1]].size()>0)
        		ans[m-1-i]=mp[c[m-i-1]].back()+1, mp[c[m-i-1]].pop_back();
        	else if(m-i-1>last){
        		if(reqd[c[m-i-1]])
        			ans[m-1-i]=reqd[c[m-i-1]]+1;
        		else if(m-i-1>last2)
        			bb=false;
        		else
        			ans[m-1-i]=reqd2[c[last2]]+1;
        	}
        	else
        		ans[m-1-i]=reqd[c[last]]+1;

        for(auto x:mp)
        	if(x.second.size())
        		bb=false;

        cout<<(bb?"YES":"NO")<<'\n';
        if(bb){
	        for(auto x:ans)
	        	cout<<x<<' ';
	        cout<<'\n';
	    }
    }
    return 0;
}