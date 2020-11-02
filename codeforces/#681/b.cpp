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
    int n,t,a,b;
    string s;
    cin>>t;

    while(t--){
        cin>>a>>b>>s;
        n=s.size();
        vector<pair<int,int>> block;
        int i=1,curr=1;
        while(i<n){
        	if(s[i]!=s[i-1]){
        		if(s[i-1]=='1')
        			block.push_back({i,curr});
        		curr=1;
        	}
        	curr+=s[i]==s[i-1];
        	i++;
        }
        if(s[i-1]=='1')
        	block.push_back({i,curr});

        ll ans = a*(block.size()>0);
        forn(i,1,block.size()){
        	ans+=min(a,b*(block[i].first-block[i-1].first-block[i].second));
        }

        cout<<ans<<'\n';
    }
    return 0;
}