#include<bits/stdc++.h> // dp, restricted
using namespace std;
typedef long long ll;

int main(){
	int n,m,ans=0;
	cin>>n>>m;
	vector<int> a(n);
	vector<vector<int>> dp(n,vector<int>(m));

	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int j=0;j<m;j++)
		dp[0][j]=a[0]==0||j==a[0]-1;

	for(int i=1;i<n;i++)
		if(a[i]){
			for(int j=a[i]-2;j<=a[i];j++)
				if(j>=0 && j<m)
					dp[i][a[i]-1]+=dp[i-1][j], dp[i][a[i]-1]%=(int)1e9+7;
		}
		else
			for(int k=0;k<m;k++)
				for(int j=k-1;j<=k+1;j++)
					if(j>=0 && j<m)
						dp[i][k]+=dp[i-1][j], dp[i][k]%=(int)1e9+7;
	for(int i=0;i<m;i++)
		ans+=dp[n-1][i], ans%=(int)1e9+7;

	cout<<ans;
}