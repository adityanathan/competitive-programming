#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long t,n,k,num,ans;
	
	cin>>t;

	while(t--){
		cin>>n>>k;
		num=n;
		ans=1;
		while(num>>=1) 
			ans<<=1;
		ans^=n;
		cout<<(n+((ans<<1)+2*k)%n)%n+1<<"\n";
	}

}