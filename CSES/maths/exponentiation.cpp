#include<bits/stdc++.h>
using namespace std;

int main(){
	long long res,n,a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		res=1;
		while(b){
			if(b&1)
				res*=a, res%=1000000007;
			a*=a, a%=1000000007;
			b/=2;
		}
		cout<<res<<'\n';
	}
}