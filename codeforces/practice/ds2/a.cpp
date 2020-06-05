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
    cin>>s;
    vector<int> l[2];
    forn(i,1,s.length()+1)
    	l[s[i-1]=='r'].push_back(i);
    forn(i,0,l[1].size())
    	cout<<l[1][i]<<'\n';
    forn(i,0,l[0].size())
    	cout<<l[0][l[0].size()-1-i]<<'\n';
    return 0;
}