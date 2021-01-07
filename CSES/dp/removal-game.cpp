#include<bits/stdc++.h> // minimax, min-max dp, adversarial two player game
using namespace std;

long long dp[5000][5000][2]={0};

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=n-1;i>=0;i--)
		for(int j=i;j<n;j++){
			if(i==j)
				dp[i][j][0]=a[i];
			else
				dp[i][j][0]=max(dp[i+1][j][1]+a[i],dp[i][j-1][1]+a[j]),
				dp[i][j][1]=min(dp[i+1][j][0],dp[i][j-1][0]);
		}
	cout<<dp[0][n-1][0];
}