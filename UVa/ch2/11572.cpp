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
    int t,g,sg,sb;
    cin>>t;

    while(t--){
        cin>>g>>sg>>sb;
        left=ans=0;
        for(int i=0;i<n;++i){
            cin>>aa;
            if(m[aa]>left)
                left=m[aa];
            if(i+1-left>ans)
                ans=i+1-left;
            m[aa]=i+1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}