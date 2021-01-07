#include<bits/stdc++.h> // dp, 0-1 knapsack
using namespace std;
typedef long long ll;

int main(){
	int n,x;
	cin>>n>>x;
	vector<int> a(n), w(n);
	vector<vector<int>> dp(n+1,vector<int>(1e5+1));
	
	for(int i=0;i<n;i++)
		cin>>w[i];

	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=1;i<=n;i++)
		for(int j=0;j<=x;j++){
			if(j-w[i-1]>=0)
				dp[i][j]=max(dp[i][j],a[i-1]+dp[i-1][j-w[i-1]]);
			dp[i][j]=max(dp[i][j],dp[i-1][j]);
		}

	cout<<dp[n][x];
}