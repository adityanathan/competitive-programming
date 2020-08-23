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

ll viable(vector<int>& e, vector<int>& r, int n){
    vector<ll> t(n,-1e10);
    ll time=0;
    debug(e,r);
    forn(j,0,3)
        forn(i,0,n)
            if(time-t[i]>=r[i])
                time+=e[i], t[i]=time;
            else 
                return time;
    return 1e16+0.5;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,test;
    cin>>test;
	t=test;

    while(t--){
        cin>>n;
        vector<int> e(n),r(n);
        ll ans=0, front=0;
        forn(i,0,n)
            cin>>e[i]>>r[i];
        forn(j,1,1<<n){
            vector<int> te, tr;
            forn(i,0,n)
                if((1<<i)&j)
                    te.push_back(e[i]), tr.push_back(r[i]);
            ll ret=viable(te,tr,te.size());
            if(ret>ans)
                ans=ret, front=n-te.size();
            else if(ret==ans)
                front=min(front,(ll)n-(ll)te.size());
        }
        cout<<"Case #"<<test-t<<": "<< front<<' '<<(ans==(ll)(1e16+0.5)?"INDEFINITELY":to_string(ans)) <<'\n';
    }
    return 0;
}