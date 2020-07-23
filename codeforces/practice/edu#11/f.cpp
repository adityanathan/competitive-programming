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
    ll n, ans=0;
    cin>>n;
    vector<ll> a(n),sum(n),score(n);
    cin>>a[0];
    sum[0]=score[0]=a[0];
    forn(i,1,n){
        cin>>a[i];
        sum[i]=a[i]+sum[i-1];
        score[i]=(i+1)*a[i]+score[i-1];
    }

    ll max_so_far=0, max_ending_here=0;

    forn(i,0,n){ 
       max_ending_here = max_ending_here+a[i]; 
       if (max_ending_here<0)
           max_ending_here=0;

       else if(max_so_far < max_ending_here) 
           max_so_far = max_ending_here;
    }
    return 0;
}