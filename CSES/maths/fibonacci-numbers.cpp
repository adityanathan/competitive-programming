#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n, mod=1e9+7;
	cin>>n;
	vector<vector<long long>> a={{1,1},{1,0}}, res={{1,0},{0,1}}, temp(2,vector<long long>(2));

	while(n){
		if(n%2){
			temp[0][0]=(res[0][0]*a[0][0]+res[0][1]*a[1][0])%mod;
			temp[0][1]=(res[0][0]*a[0][1]+res[0][1]*a[1][1])%mod;
			temp[1][0]=(res[1][0]*a[0][0]+res[1][1]*a[1][0])%mod;
			temp[1][1]=(res[1][0]*a[0][1]+res[1][1]*a[1][1])%mod;
			res=temp;
		}
		temp[0][0]=(a[0][0]*a[0][0]+a[0][1]*a[1][0])%mod;
		temp[0][1]=(a[0][0]*a[0][1]+a[0][1]*a[1][1])%mod;
		temp[1][0]=(a[1][0]*a[0][0]+a[1][1]*a[1][0])%mod;
		temp[1][1]=(a[1][0]*a[0][1]+a[1][1]*a[1][1])%mod;
		a=temp;
		n/=2;
	}
	cout<<res[1][0];
}