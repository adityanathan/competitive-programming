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
    int x,y,t;
    string s;
    cin>>t;

    while(t--){
        cin>>x>>y>>s;
        map<char,int> m;
        for(auto x:s)
        	m[x]++;
        bool b=true;
        if(x>=0)
        	b=b&m['R']>=x;
        else
        	b=b&m['L']>=-x;
        if(y>=0)
        	b=b&m['U']>=y;
        else
        	b=b&m['D']>=-y;
        cout<<(b?"YES":"NO")<<'\n';
    }
    return 0;
}