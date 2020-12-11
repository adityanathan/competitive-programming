#include <bits/stdc++.h> // implicit graphs, bfs
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<string> a;
vector<vector<char>> p;
vector<vector<pair<int,int>>> par;
pair<int,int> aa,b;
int n,m;

void bfs(int i, int j){
    a[i][j]='#';
    queue<pair<int,int>> q;
    q.push({i,j});

    while(q.size()){
        auto [i,j] = q.front(); q.pop();
        if(i && a[i-1][j]!='#')
            q.push({i-1,j}), a[i-1][j]='#', p[i-1][j]='D', par[i-1][j]={i,j};
        if(i<n-1 && a[i+1][j]!='#')
            q.push({i+1,j}), a[i+1][j]='#', p[i+1][j]='U', par[i+1][j]={i,j};
        if(j && a[i][j-1]!='#')
            q.push({i,j-1}), a[i][j-1]='#', p[i][j-1]='R', par[i][j-1]={i,j};
        if(j<m-1 && a[i][j+1]!='#')
            q.push({i,j+1}), a[i][j+1]='#', p[i][j+1]='L', par[i][j+1]={i,j};
    }

    if(p[aa.first][aa.second]!='x'){
        cout<<"YES\n";
        string ans="";
        while(aa!=b){
            ans+=p[aa.first][aa.second];
            aa=par[aa.first][aa.second];
        }
        cout<<ans.size()<<'\n'<<ans;
    }
    else
        cout<<"NO";
    exit(0);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    a.assign(n,"");
    p.assign(n,vector<char>(m,'x'));
    par.assign(n,vector<pair<int,int>>(m,{-1,-1}));

    forn(i,0,n){
        cin>>a[i];
        forn(j,0,m)
            if(a[i][j]=='A')
                aa={i,j};
            else if(a[i][j]=='B')
                b={i,j};
    }

    bfs(b.first, b.second);

    return 0;
}