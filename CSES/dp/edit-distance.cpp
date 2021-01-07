#include<bits/stdc++.h> // dp
using namespace std;
typedef long long ll;

int main(){
	int n,m;
	string a,b;
	cin>>a>>b;

	n=a.length(), m=b.length();
	vector<vector<int>> dp(n+1,vector<int>(m+1));

	for(int i=0;i<=n;i++)
		dp[i][0]=i;

	for(int j=0;j<=m;j++)
		dp[0][j]=j;

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			dp[i][j]=a[i-1]==b[j-1]?dp[i-1][j-1]:1+min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);

	cout<<dp[n][m];
}