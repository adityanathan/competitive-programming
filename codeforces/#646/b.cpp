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
    int n,t,cost;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        n=s.length();
        vector<int> z(n+1,0),o(n+1,0);
        forn(i,0,n){
        	z[i+1]=z[i]+(s[i]=='0');
        	o[i+1]=o[i]+(s[i]=='1');
        }
        cost=10001;
        forn(i,0,n+1){
        	cost=min(cost,i-z[i]+n-i-(o[n]-o[i]));
        	cost=min(cost,i-o[i]+n-i-(z[n]-z[i]));
        }

        cout<<cost<<'\n';
    }
    return 0;
}