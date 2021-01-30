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
    string s;
    int ans=0;

    cin>>s;
    forn(i,0,s.length())
    	ans+=s[i]-'0'!=i%2;

    cout<<min((int)s.length()-ans,ans)<<'\n';
    
    return 0;
}