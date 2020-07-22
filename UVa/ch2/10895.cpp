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
    int t,edge;
    string s;
    cin>>t;

    while(t--){
        set<char> m;
        edge = 0;
        while(cin>>s, s[0]!='*')
            edge++, m.insert(s[1]), m.insert(s[3]);
        cin>>s;
        cout<<"There are "<<s.size()/2-edge<<" tree(s) and "<<1+s.size()/2-m.size()<<" acorn(s).\n";
    }
    return 0;
}