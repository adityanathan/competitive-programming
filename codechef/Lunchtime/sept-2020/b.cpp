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
    int r,c;
    cin>>r>>c;

    forn(i,0,r){
        cout<<'U';
        forn(j,0,c)
            cout<<'R';
        forn(j,0,c)
            cout<<'L';
    }
    cout<<'U';
    forn(i,0,2*c){
        cout<<'R';
        forn(j,0,r)
            cout<<'D';
        forn(j,0,r)
            cout<<'U';
    }


    return 0;
}