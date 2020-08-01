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

const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d) {
    int n = adj.size();
    d.assign(n, INF);

    d[s] = 0;
    set<pair<int, int>> q;
    q.insert({0, s});
    while (!q.empty()) {
        int v = q.begin()->second;
        q.erase(q.begin());

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                q.insert({d[to], to});
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,x,y;
    ll m,w,ans=0;
    cin>>s;
    adj.assign(26,vector<pair<int,int>> ());
    vector<vector<int>> cost(26, vector<int> (26));
    cin>>m;
    forn(i,0,m){
        cin>>x>>y>>w;
        adj[x[0]-'a'].push_back({y[0]-'a',w});
        adj[y[0]-'a'].push_back({x[0]-'a',w});
    }

    debug(adj);
    forn(i,0,26)
        dijkstra(i,cost[i]);
    int n=s.size();
    forn(i,0,n/2)
        ans+=min(cost[s[i]-'a'][s[n-1-i]-'a'],cost[s[n-1-i]-'a'][s[i]-'a']);
    cout<<ans;
    return 0;
}

