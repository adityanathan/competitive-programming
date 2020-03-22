#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	long long n,m,t,maxi;

	cin>>t;

	while(t--){
		cin>>n>>m;
		vector<long long> a(n);
		maxi=0;
		forn(i,n){
			cin>>a[i];
			if(a[0]<m && a[i]>0 && i!=0){
				a[0]+=a[i];
			}
		}
		if(a[0]>=m){
			cout<<m<<"\n";
			continue;
		}
		cout<<a[0]<<"\n";


	}
	return 0;
}