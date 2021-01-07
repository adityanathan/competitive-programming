#include<bits/stdc++.h> // boolean, yes-no, possibility knapsack (no weights)
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n),ans;
	vector<vector<bool>> dp(n+1,vector<bool>(1000*n));
	for(int i=0;i<n;i++)
		cin>>a[i];
	dp[0][0]=1;
	for(int i=1;i<=n;i++)
		for(int j=0;j<1000*n;j++)
			dp[i][j]=dp[i-1][j]||j-a[i-1]>=0&&dp[i-1][j-a[i-1]];
	for(int j=1;j<1000*n;j++)
		if(dp[n][j])
			ans.push_back(j);
	cout<<ans.size()<<'\n';
	for(auto x:ans)
		cout<<x<<' ';
}