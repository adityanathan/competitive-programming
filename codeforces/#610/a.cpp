#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,t,a,b,c,x,r;

	cin>>t;

	while(t--){
		cin>>a>>b>>c>>r;
		x=min(a,b);
		b=max(a,b);
		a=x;

		if(c<a){
			if(r+c<a){
				cout<<b-a<<"\n";
				continue;
			}
			if(r+c>b){
				cout<<"0\n";
				continue;
			}
			cout<<b-(r+c)<<"\n";
			continue;
		}
		if(c>b){
			if(c-r>b){
				cout<<b-a<<"\n";
				continue;
			}
			if(-r+c<a){
				cout<<"0\n";
				continue;
			}
			cout<<(-r+c)-a<<"\n";
			continue;
		}
		cout<<max(0,b-(c+r))+max(0,c-r-a)<<"\n";
	}


	return 0;
}