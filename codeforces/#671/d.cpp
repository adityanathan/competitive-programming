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
    int n;
    {
        cin>>n;
        vector<int> a(n),b;
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        int ans=0;
        forn(i,0,n/2){
        	b.push_back(a[n/2+i]), b.push_back(a[i]);
        }
        if(n%2)
        	b.push_back(a[n-1]);
        forn(i,1,n-1)
            ans+=b[i]<b[i-1] && b[i]<b[i+1];
        cout<<ans<<'\n';
        for(auto x:b)
            cout<<x<<' ';

    }
    return 0;
}