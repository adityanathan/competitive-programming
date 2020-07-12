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
    int n,t,test,ans,a;
    pair<int,int> maxx;
    bool b;
    cin>>test;
	t=test;

    while(t--){
        cin>>n;
        ans=0; b=1;
        maxx={-1,-1};
        forn(i,0,n){
            cin>>a;
            if(b && maxx.first>a)
                ans++;
            if(a>maxx.first)
                maxx={a,i};
            b=make_pair(a,i)==maxx;
        }
        ans+=b;
        cout<<"Case #"<<test-t<<": "<< ans <<'\n';
    }
    return 0;
}