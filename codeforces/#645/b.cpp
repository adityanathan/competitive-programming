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
    int n,t,curr;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        curr=-1;
        forn(i,0,n)
        	if(a[i]<=i+1)
        		curr=i;
        cout<<curr+2<<'\n';
    }
    return 0;
}