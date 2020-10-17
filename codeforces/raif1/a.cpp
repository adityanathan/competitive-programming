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
    int x1,x2,y1,y2,t;
    cin>>t;

    while(t--){
        cin>>x1>>y1>>x2>>y2;
        cout<<abs(x1-x2)+abs(y1-y2)+2*(x1!=x2&&y1!=y2)<<'\n';
    }
    return 0;
}