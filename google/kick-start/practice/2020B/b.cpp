#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int t,n,test;
	long long d;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>d;
		vector<long long> a(n);
		forn(i,n)
			cin>>a[i];
		forn(i,n)
			d=d/a[n-1-i]*a[n-1-i];
		cout<<"Case #"<<test-t<<": "<<d<<"\n";
	}
	return 0;
}