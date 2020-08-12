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
    ll r,g,b,w,t,x;
    cin>>t;

    while(t--){
        cin>>r>>g>>b>>w;
        x=min(r,min(g,b));
        // r-=x, g-=x, b-=x, w+=3*x;
        if((r+g+b+w)%2){
        	if(r%2+g%2+b%2+w%2<=1)
        		cout<<"Yes\n";
        	else if(x && (r-1)%2+(g-1)%2+(b-1)%2+(w+3)%2<=1)
        		cout<<"Yes\n";
        	else
        		cout<<"No\n";
        }
        else{
        	if(r%2+g%2+b%2+w%2==0)
        		cout<<"Yes\n";
        	else if(x && (r-1)%2+(g-1)%2+(b-1)%2+(w+3)%2==0)
        		cout<<"Yes\n";
        	else
        		cout<<"No\n";
        }
    }
    return 0;
}