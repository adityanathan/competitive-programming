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
    int n,t;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        n=s.length();
        vector<int> ones;
        forn(i,0,n)
        	if(s[i]=='1'){
            	int count=0;
        		while(i<n && s[i]=='1')
        			count++, i++;
        		ones.push_back(count);
        	}
        sort(ones.begin(),ones.end());
        ll ans=0;
        forn(i,0,ones.size())
        	ans+=i%2?0:ones[ones.size()-1-i];
        cout<<ans<<'\n';
    }
    return 0;
}