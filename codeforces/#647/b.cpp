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
    int n,aa,t;
    cin>>t;

    while(t--){
        cin>>n;
        multiset<int> a,b;

        forn(i,0,n){
        	cin>>aa;
        	a.insert(aa);
        }

        bool bb=true;

        forn(i,1,1025){
        	b.clear();
        	for(auto aa:a)
        		b.insert(aa^i);
        	if(b==a){
        		cout<<i<<'\n';
        		bb=false;
        		break;
        	}
        }
        if(bb)
        	cout<<"-1\n";
    }
    return 0;
}