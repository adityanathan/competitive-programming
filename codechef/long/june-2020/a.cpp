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
    int n,m,t,x;
    cin>>t;

    while(t--){
        cin>>n>>m;
        unordered_set<int> r,c;
        forn(i,0,n)
        	forn(j,0,m){
        		cin>>x;
        		if(x)
                    r.insert(i),c.insert(j);
        	}

        cout<<(min(n-r.size(),m-c.size())%2?"Ashish":"Vivek")<<'\n';
    }
    return 0;
}