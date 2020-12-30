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
    int n,a,t;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,int> m;
        set<int> s;
        forn(i,0,n)
        	cin>>a, m[a]++, s.insert(a);

        for(auto x:m)
        	if(x.second>1)
        		s.insert(x.first+1), m[x.first+1]++;
        
        cout<<s.size()<<'\n';
    }
    return 0;
}