#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i=1, j,ans=0;
	cin>>n;
	while(n/i>=i && i<n){
		ans+=n/i*i, i++;
		// cerr<<n/i<<' '<<i<<'\n';
	}
	while(i<n){
		j=n/(n/i+1);
	}

	cout<<ans+n*(n+1)/2-i*(i-1)/2;
}