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

bool cmp(int n, pair<int, int> const& p)
{
    return p.first > n;
}

bool cmp2(pair<int, int> const& p, int n)
{
    return p.first >= n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x;
    char c;

    cin>>n;
    vector<vector<int>> a(n,vector<int>(6));
    forn(i,0,n)
        forn(j,0,6)
            cin>>a[i][j];
    cin>>m;
    vector<vector<pair<int,int>>> xy(2);
    vector<vector<int>> xyz(2);
    vector<int> ans(m,0);
    forn(i,0,m){
        scanf(" %c = %d",&c,&x);
        xy[c=='y'].push_back(make_pair(x,i));
    }
    sort(xy[0].begin(),xy[0].end());
    sort(xy[1].begin(),xy[1].end());

    xy[0].push_back({1e8,-1});
    xy[1].push_back({1e8,-1});
    
    for(auto p:xy[0])
        xyz[0].push_back(p.first);
    for(auto p:xy[1])
        xyz[1].push_back(p.first);
    

    vector<vector<int>> integ(2);
    integ[0].resize(xy[0].size());
    integ[1].resize(xy[1].size());

    debug(xy);
    forn(i,0,n){
        debug(a[i],min(a[i][0],min(a[i][2],a[i][4])));
        auto itx = upper_bound(xyz[0].begin(),xyz[0].end(),min(a[i][0],min(a[i][2],a[i][4]))),
            itxl = lower_bound(xyz[0].begin(),xyz[0].end(),max(a[i][0],max(a[i][2],a[i][4]))),
             ity = upper_bound(xyz[1].begin(),xyz[1].end(),min(a[i][1],min(a[i][3],a[i][5]))),
            ityl = lower_bound(xyz[1].begin(),xyz[1].end(),max(a[i][1],max(a[i][3],a[i][5])));
        if(*itx<max(a[i][0],max(a[i][2],a[i][4])))
            integ[0][itx-xyz[0].begin()]++,integ[0][itxl-xyz[0].begin()]--;
        if(*ity<max(a[i][1],max(a[i][3],a[i][5])))
            integ[1][ity-xyz[1].begin()]++,integ[1][ityl-xyz[1].begin()]--;
        debug(integ);
    }

    forn(i,1,xy[0].size()-1){
        integ[0][i]+=integ[0][i-1];
        ans[xy[0][i].second]=integ[0][i];
    }
    ans[xy[0][0].second]=integ[0][0];
    forn(i,1,xy[1].size()-1){
        integ[1][i]+=integ[1][i-1];
        ans[xy[1][i].second]=integ[1][i];
    }
    ans[xy[1][0].second]=integ[1][0];
    forn(i,0,m)
        cout<<ans[i]<<'\n';

    return 0;
}