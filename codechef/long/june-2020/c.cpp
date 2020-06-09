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

int x;
vector<vector<int>> a(15,vector<int> (15));

void search(int l, int r, int u, int d) { 
    // cout<<1<<' '<<u<<' '<<l<<' '<<d<<' '<<r<<'\n';
    // cin>>x;
    if(l==r && u==d)
        a[u][l]=1;
    if((l<r||u<d) && x) { 
        int lr = l+(r-l)/2, ud = u+(d-u)/2;
  
        search(l,lr,u,ud); 
        search(lr+1,r,u,ud); 
        search(l,lr,ud+1,d); 
        search(lr+1,r,ud+1,d); 
    }
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n=15,a;
    while(t--){
        a.clear();
        search()
        cout<<ans<<'\n';
    }
    return 0;
}