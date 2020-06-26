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
    int n,k,x;
    {
        cin>>n>>k;
        vector<int> v(n,1);
        forn(i,0,k)
        	cin>>x>>x,v[x-1]=0;
        forn(i,0,n)
        	cout<<v[i]<<' ';
    }
    return 0;
}