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
    int n,m,x,y;
    bool b=true;
    cin>>n>>m;

    vector<int> t(n+1);
    vector<vector<int>> adj(n+1),topics(n+1);
    vector<set<int>> s(n+1);
    while(m--){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    forn(i,1,n+1){
        cin>>t[i];
        topics[t[i]].push_back(i);
    }

    forn(i,1,n+1){

        for(auto x: adj[i]){
            if(t[x]==t[i])
                b=false;
            s[i].insert(t[x]);
        }

        int j=1;

        if(s[i].size()<t[i]-1)
            b=false;

        for(auto x: s[i])
            if(j>=t[i])
                break;
            else if(x!=j++)
                b=false;

        if(!b)
            break;
    }
    if(!b){
        cout<<"-1\n";
        return 0;
    }
    forn(i,1,n+1){
        vector<int> curr = topics[i];
        for(auto x:curr)
            cout<<x<<" ";
    }

    return 0;
}