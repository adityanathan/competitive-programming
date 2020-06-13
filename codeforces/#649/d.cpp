#include <bits/stdc++.h>
using namespace std;
 
#define S second
#define F first
#define int long long
 
typedef long long ll;
typedef long double ld;
 
const int maxn = 2e5+10;
 
int n, m, sq, sq2;
vector<int> g[maxn], ta[maxn];
int mark[maxn], h[maxn], par[maxn];
 
void dfs(int v){
    ta[h[v]%((sq+1)/2-1)].push_back(v);
    mark[v] = 1;
    for(auto u : g[v])
        if(!mark[u]){
            h[u] = h[v] + 1;
            par[u] = v;
            dfs(u);
        }
        else if( h[u] < h[v] - 1 && h[v] - h[u] + 1 >= sq){
            vector<int> ans;
            while(v != u){
                ans.push_back(v);
                v = par[v];
            }
            ans.push_back(u);
			if(ans.size()>sq)
				continue;
			cout<< 2 <<"\n";
            cout<< ans.size() <<"\n";
            for(auto x : ans) 
            	cout<< x <<" ";
            exit(0);
        }
 
}
 
signed main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
    cin>>n>>m>>sq;
    sq2 = n/((sq+1)/2);
 
    for(int i = 1, u , v; i <= m; i++)
    {
        cin>> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
 
    cout<< 1 <<"\n";
    for(int i = 0; i < sq2; i++)
        if(ta[i].size() >= (sq+1)/2)
        {
            for(int j = 0; j < (sq+1)/2; j++)
                cout<< ta[i][j] <<" ";
            return 0;
        }
}