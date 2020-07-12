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
    int n,t,test,up,down,ans;
    cin>>test;
    t=test;

    while(t--){
        cin>>n;
        vector<int> a(n);
        up=down=ans=0;
        forn(i,0,n){
            cin>>a[i];
            if(i && a[i]>a[i-1])
                up++,ans+=down/4,down=0;
            else if(i && a[i]<a[i-1])
                down++,ans+=up/4,up=0;
        }
        cout<<"Case #"<<test-t<<": "<<ans+up/4+down/4<<'\n';
    }
    return 0;
}