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
    ll t,n,k,maxc,maxr,minc,minr,currc,currr;
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int>(n));
        if(k)
            forn(i,0,n){
                forn(j,0,n){
                    a[j][(i+j)%n]=1,k--;
                    if(!k)
                        break;
                }
                if(!k)
                    break;
            }
        maxc=maxr=0;
        minc=minr=n+1;
        forn(i,0,n){
            currc=currr=0;
            forn(j,0,n){
                currc+=a[i][j];
                currr+=a[j][i];
            }
            maxc=max(maxc,currc);
            maxr=max(maxr,currr);
            minc=min(minc,currc);
            minr=min(minr,currr);
        }
        cout<<(maxc-minc)*(maxc-minc)+(maxr-minr)*(maxr-minr)<<'\n';
        forn(i,0,n){
            forn(j,0,n)
                cout<<a[i][j];
            cout<<'\n';
        }
    }
    return 0;
}