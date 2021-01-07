#include<bits/stdc++.h> // minimax, min-max dp, adversarial two player game
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int>> dp(n+1,vector<int>(n*(n+1)/2+1));
	dp[0][0]=1;
	for(int i=1;i<=n;i++)
		for(int j=0;j<=n*(n+1)/2;j++){
			dp[i][j]+=dp[i-1][j], dp[i][j]%=(int)1e9+7;
			if(j-i>=0)
				dp[i][j]+=dp[i-1][j-i], dp[i][j]%=(int)1e9+7;
		}
	cout<<(n*(n+1)/2%2==0)*dp[n][n*(n+1)/4]*500000004ll%((int)1e9+7);
}