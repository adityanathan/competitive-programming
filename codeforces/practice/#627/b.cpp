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
    int n,t,aa;
    bool b;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,int> m;
        b=false;
        forn(i,0,n){
        	cin>>aa;
        	if(m.find(aa)!=m.end()){
        		if(m[aa]!=i-1)
        			b=true;
        		else
        			continue;
        	}
        	m[aa]=i;
        }
        cout<<(b?"YES":"NO")<<'\n';
    }
    return 0;
}