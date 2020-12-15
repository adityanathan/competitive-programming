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

vector<int> divs(ll n){
    vector<int> v;
    forn(i,1,sqrt(n)+1)
        if(n%i==0){
            if(n/i!=i)
                v.push_back(n/i);
            v.push_back(i);
        }
    sort(v.begin(),v.end());
    return v;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        int sum=0,curr=0,ans=1e9,b=1;
        vector<int> a(n);
        forn(i,0,n)
            cin>>a[i], sum+=a[i];
        vector<int> div=divs(sum);
        for(auto x:div){
            b=1,curr=0;
            forn(i,0,n){
                curr+=a[i];
                if(curr>x){
                    b=0;
                    break;
                }
                else if(curr==x)
                    curr=0;
            }
            if(b)
                ans=min(ans,n-sum/x);
        }
        cout<<ans<<'\n';
    }
    return 0;
}