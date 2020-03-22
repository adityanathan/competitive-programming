#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,a,b,c,sum1=0,sum2=0,sum3=0;
	cin>>n;
	forn(i,n){
		cin>>a>>b>>c;
		sum1+=a;sum2+=b;sum3+=c;
	}
	if(sum1==0 && sum2==0 && sum3==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}