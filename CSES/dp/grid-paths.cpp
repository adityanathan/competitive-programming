#include<bits/stdc++.h> // dp
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	vector<string> s(n);
	vector<vector<int>> dp(n,vector<int>(n));
	
	for(int i=0;i<n;i++)
		cin>>s[i];
	dp[0][0]=s[0][0]=='.';

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(i)
				dp[i][j]+=(s[i-1][j]=='.')*dp[i-1][j], dp[i][j]%=(int)1e9+7;
			if(j)
				dp[i][j]+=(s[i][j-1]=='.')*dp[i][j-1], dp[i][j]%=(int)1e9+7;
			dp[i][j]*=s[i][j]=='.';
		}

			

	cout<<dp[n-1][n-1];
}