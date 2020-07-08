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

vector<bool> v, odd; 
vector<vector<int>> g; 

void bfs(int u){
    queue<int> q;
    q.push(u);
    v[u] = true;

    while(!q.empty()){ 
        int f = q.front(); 
        q.pop();
        forit(i,g[f])
            if(!v[*i])
                q.push(*i), v[*i]=true, odd[*i]=!odd[f];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool flag=true;
    int n,m,a,b,count;
    {
        cin>>n>>m; 
        v.assign(n,false);
        odd.assign(n,false);
        g.assign(n,vector<int>());

        forn(i,0,m){ 
            cin>>a>>b;
            g[a-1].push_back(b-1);
            g[b-1].push_back(a-1);
        } 

        forn(i,0,n) 
            if(!v[i]) 
                odd[i]=true, bfs(i);

        count=0;
        forn(i,0,n)
            count+=odd[i];

        forn(i,0,n)
            for(auto x:g[i])
                if(odd[x]==odd[i])
                    flag=false;
        if(!flag){
            cout<<-1;
            return 0;
        }
        cout<<count<<'\n';

        forn(i,0,n)
            if(odd[i])
                cout<<i+1<<" ";
        cout<<"\n";

        cout<<n-count<<'\n';

        forn(i,0,n)
            if(!odd[i])
                cout<<i+1<<" ";
        
    }
    return 0;
}