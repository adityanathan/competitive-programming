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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>p;
        forn(i,1,n+1)
            forn(j,1,n+1){
                cout<<1<<' '<<i<<' '<<j<<' '<<i<<' '<<j<<'\n'<<flush;
                if(t)
                    cin>>a[i-1][j-1];
                else
                    cin>>b[i-1][j-1];
                if(a[i-1][j-1]==-1 || b[i-1][j-1]==-1)
                    return 0;
            }
        cout<<"2\n"<<flush;
        forn(i,0,n){
            forn(j,0,n)
                cout<<(t?a[i][j]:b[i][j])<<' ';
            cout<<'\n'<<flush;
        }
        cin>>x;
        if(x==-1)
            return 0;
    }
    return 0;
}