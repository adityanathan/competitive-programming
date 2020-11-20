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
        int ans=0;
        map<char,int> m;
        forn(i,0,n){
        	m[s[i]]++;
        	if(s[i]==')' && m['('])
        		m['(']--, m[')']--, ans++;
        	if(s[i]==']' && m['['])
        		m['[']--, m[']']--, ans++;
		}   	
        cout<<ans<<'\n';
    }
    return 0;
}