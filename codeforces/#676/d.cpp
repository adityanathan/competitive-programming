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
    ll x,y,t;
    cin>>t;

    while(t--){
        cin>>x>>y;
        vector<ll> c(7), best(7);
        forn(i,1,7)
        	cin>>c[i];
        forn(i,1,7)
        	best[i]=min(c[i],c[1+(i+4)%6]+c[1+i%6]);
        c=best;

        if(x==0){
        	if(y>0)
        		cout<<y*c[2]<<'\n';
        	else
        		cout<<-y*c[5]<<'\n';
        	continue;
        }
        if(y==0){
        	if(x>0)
        		cout<<x*c[6]<<'\n';
        	else
        		cout<<-x*c[3]<<'\n';
        	continue;
        }
        if(x==y){
        	if(y>0)
        		cout<<y*c[1]<<'\n';
        	else
        		cout<<-y*c[4]<<'\n';
        	continue;
        }
        if(x>0 && y>0){
        	if(x>y)
        		cout<<y*c[1]+(x-y)*c[6]<<'\n';
        	else
        		cout<<x*c[1]+(y-x)*c[2]<<'\n';
        	continue;
        }
        if(x<0 && y<0){
        	if(x>y)
        		cout<<-x*c[4]+(x-y)*c[5]<<'\n';
        	else
        		cout<<-y*c[4]+(y-x)*c[3]<<'\n';
        	continue;
        }
        if(x<0 && y>0){
        	cout<<-x*c[3]+y*c[2]<<'\n';
        	continue;
        }
        if(x>0 && y<0){
        	cout<<x*c[6]-y*c[5]<<'\n';
        	continue;
        }
    }
    return 0;
}