#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;

int fast(long long a, int n){
	long long res=1;
	while(n){
		if(n%2)
			res*=a, res%=mod;
		a*=a, a%=mod;
		n/=2;
	}
	return res;
}
int main(){
	string s;
	cin>>s;
	vector<long long> fact(1e6+1,1), inv(1e6+1,1);
	for(int i=1;i<1e6+1;i++){
		fact[i]=fact[i-1]*i, fact[i]%=mod;
		inv[i]=inv[i-1]*fast(i,mod-2), inv[i]%=mod;
	}
	map<char,int> m;
	for(auto x:s)
		m[x]++;
	long long ans=fact[s.size()];
	for(auto x:m)
		ans*=inv[x.second], ans%=mod;
	cout<<ans;
}