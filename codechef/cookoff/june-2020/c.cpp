#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(x...) 141
#endif

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t,a,count;
    bool b;
    cin>>t;

    while(t--){
        cin>>n>>m;
        b=true;
        count=0;
        map<int,int> mp;
        forn(i,0,n*m){
            cin>>a;
            mp[a]++;
        } 

        forit(it,mp)
           count+=it->second&1;

        if(m&1 && count>n|| !(m&1) && count!=0)
            b=false;

        if(b){
            vector<vector<int> > v(n,vector<int>(m));
            auto it=mp.begin();
            forn(i,0,n)
                forn(j,0,m/2){
                    while(it->second<2)
                        it++;
                    v[i][j]=it->first;
                    v[i][m-1-j]=it->first;
                    mp[it->first]-=2;
                }
            it=mp.begin();
            if(m&1)
                forn(i,0,n){
                    while(it->second==0)
                            it++;
                    v[i][m/2]=it->first;
                    mp[it->first]--;
                }
            forn(i,0,n){
                forn(j,0,m)
                    cout<<v[i][j]<<" ";
                cout<<"\n";
            }
        }
        else cout<<"-1\n";
    }
    return 0;
}