#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)

vector<int> dist;
vector<string> a;
int r,c;

vector<int> adj(int u){
    vector<int> v;
    if(u%1000)
        v.push_back(u-1);
    if(u/1000)
        v.push_back(u-1000);
    if(u%1000!=c-1)
        v.push_back(u+1);
    if(u/1000!=r-1)
        v.push_back(u+1000);
    return v;
}
int dijkstra(){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q,xy,x_y;
    priority_queue<pair<int,int>> mxy, mx_y;

    forn(i,0,r)
        forn(j,0,c){
            if(a[i][j]=='1')
                dist[i*1000+j]=0,
                q.push({dist[i*1000+j],i*1000+j});
            xy.push({i+j,i*1000+j}); x_y.push({i-j,i*1000+j});
            mxy.push({i+j,i*1000+j}); mx_y.push({i-j,i*1000+j});
        }
    int curr=0, xyt, x_yt, mxyt, mx_yt;
    while(q.size()){
        int f = q.top().second;
        q.pop();
        if(dist[f]>curr){
            while(xy.size() && a[xy.top().second/1000][xy.top().second%1000]=='1') 
                xy.pop();
            while(x_y.size() && a[x_y.top().second/1000][x_y.top().second%1000]=='1') 
                x_y.pop();
            while(mxy.size() && a[mxy.top().second/1000][mxy.top().second%1000]=='1') 
                mxy.pop();
            while(mx_y.size() && a[mx_y.top().second/1000][mx_y.top().second%1000]=='1')
                mx_y.pop();
            if(xy.size())
                xyt=xy.top().first, x_yt=x_y.top().first, mxyt=mxy.top().first, mx_yt=mx_y.top().first;
            else
                xyt=x_yt=mxyt=mx_yt=0;
            debug(f,curr,xy.top(),x_y.top(),mxy.top(),mx_y.top());
            if(2*curr>=max(mxyt-xyt,mx_yt-x_yt))
                return curr;
            curr=dist[f];
        }
        a[f/1000][f%1000]='1';
        for(auto v: adj(f))
            if(dist[v]>dist[f]+1)
                dist[v]=dist[f]+1, q.push({dist[v],v});

    }
    return curr;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,test;
    cin>>test;
    t=test;

    while(t--){
        cin>>r>>c;
        a.assign(r,"");
        dist.assign(1000*(r-1)+c,1e9);
        forn(i,0,r)
            cin>>a[i];

        cout<<"Case #"<<test-t<<": "<< dijkstra() <<'\n';
    }
    return 0;
}