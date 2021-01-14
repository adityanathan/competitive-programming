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
    int n,t,d;
    cin>>t;

    while(t--){
        cin>>n>>d;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());

        cout<<(a[0]+a[1]<=d||a[n-1]<=d?"Yes":"No")<<'\n';
    }
    return 0;
}