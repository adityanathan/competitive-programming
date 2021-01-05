#include<bits/stdc++.h> // dp
using namespace std;
typedef long long ll;

int main(){
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	vector<vector<int>> dp(n,vector<int>(1e6+1));
	for(int i=0;i<n;i++)
		cin>>a[i], dp[i][a[i]]=1;

	for(int i=0;i<n;i++)
		for(int j=0;j<=x;j++){
			if(j-a[i]>=0)
				dp[i][j]+=dp[i][j-a[i]], dp[i][j]%=(int)1e9+7;
			if(i)
				dp[i][j]+=dp[i-1][j], dp[i][j]%=(int)1e9+7;
		}

	cout<<dp[n-1][x];
}