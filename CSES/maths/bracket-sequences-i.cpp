#include<bits/stdc++.h>
using namespace std;

int n, mod=1e9+7;

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
	cin>>n;
	if(n%2){
		cout<<0;
		return 0;
	}
	vector<long long> fact(n,1);
	for(int i=1;i<n;i++)
		fact[i]=fact[i-1]*(i+1)%mod;
	cout<<fact[n-1]*fast(fact[n/2-1],2*mod-4)%mod*fast(n/2+1,mod-2)%mod;
}