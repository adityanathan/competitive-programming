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
	long long n,m, denom1=1, denom2=1, fact=1, inv=1;
	cin>>n>>m;
	for(int i=1;i<n+m;i++){
		fact=fact*i%mod;
		if(i<=max(n-1,m))
			inv=inv*fast(i,mod-2)%mod;
		if(i==n-1)
			denom1=inv;
		if(i==m)
			denom2=inv;
	}
	cout<<fact*denom1%mod*denom2%mod;
}