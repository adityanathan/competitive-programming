#include<bits/stdc++.h> // dp
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	vector<int> dp(1e6+1,1e9);
	for(int i=1;i<=9;i++)
		dp[i]=1;

	for(int i=0;i<=n;i++){
		int j=i;
		while(j){
			if(i-j%10>=0)
				dp[i]=min(dp[i],1+dp[i-j%10]);
			j/=10;
		}	
	}
			

	cout<<dp[n];
}