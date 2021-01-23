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
    ll n,type,p,a,b,m,q;

    cin>>n;
    vector<ll> x(n),y(n);
    forn(i,0,n)
    	cin>>x[i]>>y[i];
    cin>>m;
    vector<ll> tx(m+1),ty(m+1),rot(m+1),sx(m+1),sy(m+1);
    forn(i,0,m){
    	cin>>type;
    	rot[i+1]=rot[i];
    	tx[i+1]=tx[i];
    	ty[i+1]=ty[i];
    	sx[i+1]=sx[i];
    	sy[i+1]=sy[i];
    	if(type==1)
    		rot[i+1]+=3;
    	if(type==2)
    		rot[i+1]++;
    	if(type==3){
    		cin>>p;
    		if(rot[i+1]%4==0)
    			tx[i+1]=2*p-tx[i+1];
    		if(rot[i+1]%4==1)
    			ty[i+1]=-2*p-ty[i+1];
    		if(rot[i+1]%4==2)
    			tx[i+1]=-2*p-tx[i+1];
    		if(rot[i+1]%4==3)
    			ty[i+1]=2*p-ty[i+1];
    		if(rot[i+1]%2==0)
    			sx[i+1]++;
    		else
    			sy[i+1]++;
    	}
    	if(type==4){
    		cin>>p;
    		if(rot[i+1]%4==0)
    			ty[i+1]=2*p-ty[i+1];
    		if(rot[i+1]%4==1)
    			tx[i+1]=2*p-tx[i+1];
    		if(rot[i+1]%4==2)
    			ty[i+1]=-2*p-ty[i+1];
    		if(rot[i+1]%4==3)
    			tx[i+1]=-2*p-tx[i+1];
    		if(rot[i+1]%2)
    			sx[i+1]++;
    		else
    			sy[i+1]++;
    	}
    }
    cin>>q;
    while(q--){
    	cin>>a>>b;
    	pair<ll,ll> ans={(sx[a]%2?-x[b-1]:x[b-1])+tx[a],(sy[a]%2?-y[b-1]:y[b-1])+ty[a]};
    	if(rot[a]%4==0)
    		cout<<ans.first<<' '<<ans.second<<'\n';
    	if(rot[a]%4==1)
    		cout<<-ans.second<<' '<<ans.first<<'\n';
    	if(rot[a]%4==2)
    		cout<<-ans.first<<' '<<-ans.second<<'\n';
    	if(rot[a]%4==3)
    		cout<<ans.second<<' '<<-ans.first<<'\n';
    }
    
    return 0;
}