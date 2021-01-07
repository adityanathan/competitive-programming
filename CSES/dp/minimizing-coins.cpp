#include<bits/stdc++.h> // dp, Knapsack Problem (Duplicate Items Permitted)
using namespace std;
typedef long long ll;

int main(){
	int n,x;
	cin>>n>>x;
	vector<int> a(n),dp(1e6+1,1e9);
	while(n--)
		cin>>a[n];
	for(auto c:a)
		dp[c]=1;
	for(int i=0;i<=x;i++)
		for(auto c:a)
			if(i-c>=0)
				dp[i]=min(dp[i],1+dp[i-c]);
	cout<<(dp[x]==1e9?-1:dp[x]);
}