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
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    set<pair<int,int>> s;
    s.insert({x,y});
    cout<<x<<" "<<y<<'\n';
    if(x!=1)
    	s.insert({1,y});
    cout<<1<<" "<<y<<'\n';
    forn(i,0,n)
    	forn(j,0,m)
    		if(!s.count({i+1,(i%2==0?j+1:m-j)}))
    			cout<<i+1<<' '<<(i%2==0?j+1:m-j)<<'\n';

    return 0;
}