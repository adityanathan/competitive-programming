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
    int n;
    vector<pair<int, int> > v = { {1,1}, {1, 0}, {0,1}};
    cin>>n;
    cout<<3*n+4<<"\n0 0\n";

    forn(i,0,n+1)
    	for(auto p:v)
    		cout<<i+p.first<<" "<<i+p.second<<"\n";
    return 0;
}