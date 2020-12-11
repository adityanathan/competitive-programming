#include <bits/stdc++.h> // implicit graphs, dfs
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

int n,m,ans=0;

int dfs(int i, int j){
	a[i][j]='#';
	if(i && a[i-1][j]=='.')
		dfs(i-1,j);
	if(i<n-1 && a[i+1][j]=='.')
		dfs(i+1,j);
	if(j && a[i][j-1]=='.')
		dfs(i,j-1);
	if(j<m-1 && a[i][j+1]=='.')
		dfs(i,j+1);
	return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    a.assign(n,"");

    forn(i,0,n)
    	cin>>a[i];

    forn(i,0,n)
    	forn(j,0,m)
    		if(a[i][j]=='.')
    			ans+=dfs(i,j);
    cout<<ans;
    return 0;
}