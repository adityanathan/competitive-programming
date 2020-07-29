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
    int x,t,y;
    cin>>t;

    while(t--){
        cin>>x>>y;
        if(x==1)
        	cout<<(y==1?"YES":"NO")<<'\n';
        else if(x<=3)
        	cout<<(y<=3?"YES":"NO")<<'\n';
        else
        	cout<<"YES\n";
    }
    return 0;
}