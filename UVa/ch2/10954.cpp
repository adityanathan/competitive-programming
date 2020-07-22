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
    int n,a,b;
    ll ans;
    while(cin>>n,n){
        priority_queue<int,vector<int>,greater<int>> pq;
        ans=0;
        while(n--){
            cin>>a;
            pq.push(a);
        }
        while(pq.size()>1){
            a=pq.top(), pq.pop();
            b=pq.top(), pq.pop();
            ans+=a+b;
            pq.push(a+b);
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}