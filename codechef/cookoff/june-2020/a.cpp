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
    ll n,n2,t,med,c,cost;
    pair<ll,ll> ai;
    vector<pair<ll,ll>> arr;
    cin>>t;

    while(t--){
        cin>>n>>c;
        cost=0;
        map<pair<ll,ll>,vector<pair<ll,ll>>> m;
        forn(i,0,n){
            cin>>ai.first>>ai.second;
            m[make_pair(ai.first-ai.second,(c+ai.first%c)%c)].push_back(ai);
        }

        forit(it,m){
            arr = it->second;
            n2=arr.size();
            nth_element(arr.begin(), arr.begin() + n2/2, arr.end());
            med=arr[n2/2].first;
            for(auto pr:arr){
                cost+=abs(med-pr.first)/c;
            }
        }
        cout<<m.size()<<' '<<cost<<"\n";
    }
    return 0;
}