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
    int n,x,y;
    bool b;

    while(cin>>n>>x){
        vector<int> a(n,0);
        b=true;
        forn(i,0,n-1){
        	cin>>y;
            if(abs(x-y)<n)
                a[abs(x-y)]++;
            x=y;
        }
        forn(i,1,n)
            if(a[i]!=1)
                b=false;
        cout<<(b?"Jolly":"Not jolly")<<'\n';
    }
    return 0;
}