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
    int n,aa,q;
    while(cin>>n>>q){
        map<int,vector<int>> m;
        forn(i,0,n)
        	cin>>aa,m[aa].push_back(i);
        while(q--){
        	cin>>n>>aa;
        	cout<<(m[aa].size()<n?0:1+m[aa][n-1])<<'\n';
        }
    }
    return 0;
}