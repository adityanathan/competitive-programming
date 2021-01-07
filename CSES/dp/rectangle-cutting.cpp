#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> dp(n+1,vector<int>(m+1,1e9));

	for(int i=0;i<=min(n,m);i++)
		dp[i][i]=0;

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			for(int k=1;k<i;k++)
				dp[i][j]=min(dp[i][j],1+dp[k][j]+dp[i-k][j]);
			for(int k=1;k<j;k++)
				dp[i][j]=min(dp[i][j],1+dp[i][k]+dp[i][j-k]);
		}

	cout<<dp[n][m];
}