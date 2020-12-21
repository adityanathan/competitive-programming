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
        int all=0,ques=0,curr=0;
        ll ans=0;
        forn(i,0,n)
        	if(s[i]^'?')
        		all^=1<<s[i]-'a';
        map<int,int> m[2];
        m[0][0]++;
        forn(i,0,n){
        	if(s[i]^'?')
        		curr^=1<<s[i]-'a';
        	else
        		ques++;
        	ans+=m[ques%2][curr^all];
        	forn(j,0,26)
        		ans+=m[!(ques%2)][all^curr^(1<<j)];
        	m[ques%2][curr]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}