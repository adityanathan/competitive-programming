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
    ll a,b,c,t;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;
        if(a<c){
        	cout<<"1 ";
        }
        else
        	cout<<"-1 ";
        if(a*b>c){
        	cout<<b<<"\n";
        }
        else
        	cout<<-1<<'\n';
    }
    return 0;
}