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
    bool b;
    cin>>t;

    while(t--){
        cin>>n>>s;
        map<char,int> m;
        b=1;
        forn(i,0,n)
        	m[s[i]]++;
        forit(it,m)
        	if(it->second%2)
        		b=false;
        cout<<(b?"YES":"NO")<<'\n';
    }
    return 0;
}