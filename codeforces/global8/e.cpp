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
vector<unordered_set<int>> g; 

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
    int t,n,m,a,b,count;
    bool flag;
    cin>>t;

    while(t--){
        cin>>n>>m; 
        v.assign(n,false);
        odd.assign(n,false);
        g.assign(n,unordered_set<int>());

        forn(i,0,m){ 
            cin>>a>>b;
            g[a-1].insert(b-1);
        } 

        forn(i,0,n) 
            if(!v[i]) 
                odd[i]=true, bfs(i);

        flag=true;
        count=0;
        forn(i,0,n)
            count+=odd[i];

        if(count>4*n/7)
            flag=false;

        cout<<(flag?count:n-count)<<'\n';

        forn(i,0,n)
            if(odd[i]==flag)
                cout<<i+1<<" ";
        cout<<"\n";
    }
    return 0;
}