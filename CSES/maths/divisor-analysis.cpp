#include<bits/stdc++.h>
using namespace std;

long long fast(long long a, int n, int mod){
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
	long long n, mod=1e9+7, num=1, num2=1, sum=1, prod=1;
	cin>>n;
	vector<long long> x(n), k(n);
	for(int i=0;i<n;i++){
		cin>>x[i]>>k[i];
		num*=k[i]+1, num%=mod;
		num2*=k[i]+1, num2%=mod-1;
		sum*=(fast(x[i],k[i]+1,mod)-1)*fast(x[i]-1,mod-2,mod)%mod, sum%=mod;
	}
	for(int i=0;i<n;i++)
		prod*=fast(x[i],k[i]*(k[i]+1)/2%(mod-1)*num2%(mod-1)*fast(k[i]+1,(mod-5)/2,mod-1)%(mod-1),mod), prod%=mod;
	cout<<num<<' '<<sum<<' '<<prod;
}