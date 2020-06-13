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
    int n,m,s,e,r;
    bool b;

    while(cin>>n>>m, n||m){
        vector<int> a(1e6+5);
        forn(i,0,n){
            cin>>s>>e;
            forn(j,s,e)
                a[j]+=1;
        }
        
        forn(i,0,m){
            cin>>s>>e>>r;
            b=true;
            while(b){
                forn(j,s,e)
                    if(j>1e6){
                        b=false;
                        break;
                    }
                    else
                        a[j]+=1;
                s+=r,e+=r;
            }
        }

        b=true;

        forn(i,0,1e6+1)
            if(a[i]>1)
                b=false;
        cout<<(b?"NO ":"")<<"CONFLICT\n";
    }
    return 0;
}