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
	int n,a,b;
	cin>>n;
	vector<long long> fact(1000001,1), inv(1000001,1);
	for(int i=1;i<1000001;i++){
		fact[i]=fact[i-1]*i, fact[i]%=mod;
		inv[i]=inv[i-1]*fast(i,mod-2), inv[i]%=mod;
	}
	while(n--){
		cin>>a>>b;
		cout<<fact[a]*inv[b]%mod*inv[a-b]%mod<<'\n';
	}
}