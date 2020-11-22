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

double dp[101][101][101];
double f(int a, int b, int c){
	if(dp[a][b][c]==-1)
		dp[a][b][c]=1+((100-a)*f(a-1,b,c)+(100-b)*f(a,b-1,c)+(100-c)*f(a,b,c-1))/(300-a-b-c);
	
	return dp[a][b][c];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;

    cin>>a>>b>>c;
    
    forn(i,0,101)
    	forn(j,0,101)
    		forn(k,0,101)
    			dp[i][j][k]=-1;

    forn(i,0,101)
    	forn(j,0,101)
    		dp[i][j][0]=dp[i][0][j]=dp[0][j][i]=0;
    dp[1][1][1]=1;

    cout<<setprecision(15)<<f(100-a,100-b,100-c)<<'\n';
    
    return 0;
}