
#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int a,t;
	float n;
	cin>>t;
	forn(i,t){
		cin>>a;
		n=2.0/(1-1.0*a/180);
		// cout<<n<<"$ ";
		if(n==1.0*(int) n &&n>2)
			cout<< "YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
