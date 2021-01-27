#include<bits/stdc++.h>
using namespace std;

int main(){
	long long res,n,a,b,c;
	cin>>n;
	while(n--){
		cin>>a>>b>>c;
		res=1;
		while(c){
			if(c&1)
				res*=b, res%=1000000006;
			b*=b, b%=1000000006;
			c/=2;
		}
		b=res, res=1;
		while(b){
			if(b&1)
				res*=a, res%=1000000007;
			a*=a, a%=1000000007;
			b/=2;
		}
		cout<<res<<'\n';
	}
}