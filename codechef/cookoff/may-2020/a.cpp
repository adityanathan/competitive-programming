#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(x...) 141
#endif

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    bool b;
    cin>>t;

    while(t--){
        cin>>n;
        b=true;
        map<int,int> m,val;
        vector<int> a(n);
        forn(i,0,n){
            cin>>a[i];
            if(m.find(a[i])!=m.end() && a[i]!=a[i-1])
                b=false;
            m[a[i]]++;
        }

        forit(it,m){
           if(val.find(it->second)!=val.end())
                b=false;
            val[it->second]=1;
        }

        cout<<(b?"YES":"NO")<<"\n";
    }
    return 0;
}