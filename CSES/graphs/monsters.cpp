#include <bits/stdc++.h> // implicit graphs, bfs chase, catching game
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<string> a,xa;
vector<vector<char>> p;
vector<vector<int>> lvl,lvlm;
vector<vector<pair<int,int>>> par;
pair<int,int> aa,b={-1,-1};
int n,m;

void bfs(){
    xa=a;
    queue<pair<int,int>> q;
    forn(i,0,n)
        forn(j,0,m)
            if(xa[i][j]=='M')
                q.push({i,j}), xa[i][j]='#', lvlm[i][j]=0;
    while(q.size()){
        auto [i,j] = q.front(); q.pop();
        if(i && xa[i-1][j]!='#')
            q.push({i-1,j}), xa[i-1][j]='#', lvlm[i-1][j]=lvlm[i][j]+1;
        if(i<n-1 && xa[i+1][j]!='#')
            q.push({i+1,j}), xa[i+1][j]='#', lvlm[i+1][j]=lvlm[i][j]+1;
        if(j && xa[i][j-1]!='#')
            q.push({i,j-1}), xa[i][j-1]='#', lvlm[i][j-1]=lvlm[i][j]+1;
        if(j<m-1 && xa[i][j+1]!='#')
            q.push({i,j+1}), xa[i][j+1]='#', lvlm[i][j+1]=lvlm[i][j]+1;
    }

    a[aa.first][aa.second]='#';
    lvl[aa.first][aa.second]=0;
    q.push(aa);

    while(q.size()){
        auto [i,j] = q.front(); q.pop();
        if((i==0||j==0||i==n-1||j==m-1)&&lvl[i][j]<lvlm[i][j]){
            b={i,j};
            break;
        }
        if(i && a[i-1][j]!='#')
            q.push({i-1,j}), a[i-1][j]='#', p[i-1][j]='U', par[i-1][j]={i,j}, lvl[i-1][j]=lvl[i][j]+1;
        if(i<n-1 && a[i+1][j]!='#')
            q.push({i+1,j}), a[i+1][j]='#', p[i+1][j]='D', par[i+1][j]={i,j}, lvl[i+1][j]=lvl[i][j]+1;
        if(j && a[i][j-1]!='#')
            q.push({i,j-1}), a[i][j-1]='#', p[i][j-1]='L', par[i][j-1]={i,j}, lvl[i][j-1]=lvl[i][j]+1;
        if(j<m-1 && a[i][j+1]!='#')
            q.push({i,j+1}), a[i][j+1]='#', p[i][j+1]='R', par[i][j+1]={i,j}, lvl[i][j+1]=lvl[i][j]+1;
    }

    if(b.first!=-1){
        cout<<"YES\n";
        string ans="";
        while(aa!=b){
            ans+=p[b.first][b.second];
            b=par[b.first][b.second];
        }
        reverse(ans.begin(),ans.end());
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
    lvl.assign(n,vector<int>(m,1e9));
    lvlm.assign(n,vector<int>(m,1e9));
    par.assign(n,vector<pair<int,int>>(m,{-1,-1}));

    forn(i,0,n){
        cin>>a[i];
        forn(j,0,m)
            if(a[i][j]=='A')
                aa={i,j};
    }

    bfs();

    return 0;
}