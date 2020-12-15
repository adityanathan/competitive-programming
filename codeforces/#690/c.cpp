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
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        int mindig=10,ans;
        forn(i,0,1<<9){
            int sum=0,dig=0;
            forn(j,0,9)
                if(i&1<<j)
                    sum+=j+1, dig++;
            if(sum==n && dig<=mindig)
                mindig=dig, ans=i;
            
        }
        if(mindig==10)
            cout<<"-1\n";
        else{
            forn(j,0,9)
                if(ans&1<<j)
                    cout<<j+1;
            cout<<'\n';
        }
    }
    return 0;
}