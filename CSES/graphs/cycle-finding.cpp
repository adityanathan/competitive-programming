#include<bits/stdc++.h> // bellman ford, negative cycle detection
using namespace std;
typedef long long ll;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
    int n,m,x,y,w;
    cin>>n>>m;
    vector<ll> dist(n,1e18);
    vector<int> p(n);
    vector<tuple<int,int,ll>> e;

    while(m--)
        cin>>x>>y>>w,
        e.push_back({x-1,y-1,w});

    forn(_,n){
        x=-1;
        for(auto [u,v,w]:e)
            if(dist[u]+w<dist[v])
                dist[v]=dist[u]+w,
                p[v]=u, x=v;
    }

    if(x+1){
        forn(_,n)
            x=p[x];
        int v=x;
        vector<int> cycle;
        while(v!=x || !cycle.size())
            cycle.push_back(v+1), v=p[v];


        cout<<"YES\n"<<cycle[0]<<' ';
        reverse(cycle.begin(), cycle.end());
        for(auto x:cycle)
            cout<<x<<' ';
    }
    else
        cout<<"NO\n";
}