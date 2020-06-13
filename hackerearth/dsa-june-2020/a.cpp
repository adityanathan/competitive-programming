#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t,k=2;
	long long ans,n,m,p;

	cin>>t;
	while(t--){
		cin>>n>>m;
		ans=(n%m)*(n%m+1)/2;
		p=k;
		while(p<n){
			ans-=((n/p)%m)*((n/p)%m+1)/2-1000000000000000007LL/m*m;
			ans%=m;
			p*=k;
		}
		cout<<ans%m<<"\n";
	}
}