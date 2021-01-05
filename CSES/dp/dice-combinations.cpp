#include<bits/stdc++.h> // dp
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	vector<ll> dp(n+6);
	for(int j=0; j<6;j++)
		dp[j]=1;
	for(int i=0;i<n;i++)
		for(int j=0; j<6;j++)
			if(i-j>0)
				dp[i]+=dp[i-j-1], dp[i]%=(int)1e9+7;
	cout<<dp[n-1];
}