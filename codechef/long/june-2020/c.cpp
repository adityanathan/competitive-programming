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

int x=1, t=2, n=60, p;
vector<vector<int>> a(n,vector<int> (n,0));
vector<vector<int>> b(n,vector<int> (n,0));
vector<vector<int>> c(n,vector<int> (n,0));
vector<vector<int>> d(n,vector<int> (n,0));

// void bin(int bb, int l, int r, int u, int d){
//     if(l>=r && u>=d && x){
//         if(bb){
//             a[d][r]=1;
//         }
//         else{
//             b[d][r]=1;
//         }
//     }
//     if((l<r||u<d)&& x){ 
//         int lr = l+(r-l)/2, ud = u+(d-u)/2;
//         search(bb,l,lr,u,ud); 
//         search(bb,lr+1,r,u,ud); 
//         search(bb,l,lr,ud+1,d); 
//         search(bb,lr+1,r,ud+1,d); 
//     }
//     debug(l,r,u,d);
//     forn(i,0,n)
//         debug(a[i]);
// }

void search(int bb, int l, int r, int u, int d){
    if(r<l||d<u)
        return;
    cout<<1<<' '<<u+1<<' '<<l+1<<' '<<d+1<<' '<<r+1<<endl;
    cin>>x;
    if(l>=r && u>=d && x){
        if(bb){
            a[d][r]=1;
        }
        else{
            b[d][r]=1;
        }
    }
    if((l<r||u<d)&& x){ 
        int lr = l+(r-l)/2, ud = u+(d-u)/2;
        search(bb,l,lr,u,ud); 
        search(bb,lr+1,r,u,ud); 
        search(bb,l,lr,ud+1,d); 
        search(bb,lr+1,r,ud+1,d); 
    }
    debug(l,r,u,d);
    forn(i,0,n)
        debug(a[i]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>p;
        search(t,0,n-1,0,n-1);
        cout<<'2'<<endl;
        forn(i,0,n){
            forn(j,0,n)
                cout<<(t?a[i][j]:b[i][j])<<' ';
            cout<<endl;
        }
        cin>>x;
    }
    return 0;
}