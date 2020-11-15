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

vector<vector<ll>> ans,toth,totw,totd,tot;
vector<string> s;
int h,w;
ll p=1e9+7.5;

ll dp(int i, int j){
	if(ans[i][j]==-1){
		if(i==0 && j==0){
			ans[i][j]= 1;
			toth[i+1][j+1]=totw[i+1][j+1]=totd[i+1][j+1]=1;
		}
		else if(i==0){
			ans[i][j] = dp(i,j-1)*(s[i][j]=='.')%p;
			toth[i+1][j+1] = (toth[i+1][j]+ans[i][j])*(s[i][j]=='.')%p;
			totw[i+1][j+1]=ans[i][j];
			totd[i+1][j+1]=ans[i][j];
		}
		else if(j==0){
			ans[i][j] = dp(i-1,j)*(s[i][j]=='.')%p;
			totw[i+1][j+1] = (totw[i][j+1]+ans[i][j])*(s[i][j]=='.')%p;
			toth[i+1][j+1]=ans[i][j];
			totd[i+1][j+1]=ans[i][j];
		}
		else{
			ans[i][j] = (dp(i-1,j)+dp(i-1,j-1)+dp(i,j-1))*(s[i][j]=='.')%p;
			toth[i+1][j+1] = (toth[i+1][j]+dp(i,j-1))*(s[i][j]=='.')%p;
			totw[i+1][j+1] = (totw[i][j+1]+dp(i-1,j))*(s[i][j]=='.')%p;
			totd[i+1][j+1] = (totd[i][j]+dp(i-1,j-1))*(s[i][j]=='.')%p;
		}
	}
	
	return ans[i][j];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>h>>w;
    s.assign(h,"");
    forn(i,0,h)
    	cin>>s[i];

    ans.assign(h,vector<ll>(w,-1));
    toth.assign(h+1,vector<ll>(w+1,0));
    totw.assign(h+1,vector<ll>(w+1,0));
    totd.assign(h+1,vector<ll>(w+1,0));
    dp(h-1,w-1);
    cout<<toth[h][w]+totd[h][w]+totw[h][w]<<'\n';
    // for(auto ansi:ans)
    // debug(ansi);
    for(auto totih:toth)
    debug(totih);
    for(auto totiw:totw)
    debug(totiw);
for(auto totid:totd)
    debug(totid);
    return 0;
}