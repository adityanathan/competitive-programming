#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	int t,a,b,n,ai,bi;
	bool bo;

	cin>>t;

	while(t--){
		bo=true;
		cin>>n;
		cin>>ai>>bi;
		if(ai<bi)
			bo=false;
		forn(i,n-1){
			cin>>a>>b;
			if(a-ai<b-bi || a<ai || b<bi)
				bo=false;
			ai=a,bi=b;
		}
		if(bo)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
