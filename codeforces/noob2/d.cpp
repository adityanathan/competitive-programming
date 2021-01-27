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
    int a,b,t;
    cin>>t;

    while(t--){
        cin>>a>>b;
        int ans=0;
        forn(i,0,a+1)
        	ans=max(ans,b^i);
        cout<<(ans<=(a^b)?"No":"Yes")<<'\n';
    }
    return 0;
}