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
    int n,t,ans;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        n=s.length(), ans=0;
        if(n==2){
        	cout<<(s[0]==s[1])<<'\n';
        	continue;
        }
        forn(i,0,n-2){
        	if(s[i]==s[i+1] && s[i]!='?')
        		s[i+1]='?', ans++;
        	if(s[i]==s[i+2] && s[i]!='?')
        		s[i+2]='?', ans++;
        	if(s[i+1]==s[i+2]&& s[i+1]!='?')
        		s[i+2]='?', ans++;
        }
        debug(s);
        cout<<ans<<'\n';
    }
    return 0;
}