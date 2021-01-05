#include<bits/stdc++.h> // dp
using namespace std;
typedef long long ll;

int main(){
	int n,x;
	cin>>n>>x;
	vector<int> a(n),dp(1e6+1);
	while(n--)
		cin>>a[n];
	for(auto c:a)
		dp[c]=1;
	for(int i=0;i<=x;i++)
		for(auto c:a)
			if(i-c>=0)
				dp[i]+=dp[i-c], dp[i]%=(int)1e9+7;
	cout<<dp[x];
}