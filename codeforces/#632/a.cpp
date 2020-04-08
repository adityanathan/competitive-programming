#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	int t,m,n;

	cin>>t;

	while(t--){
		cin>>n>>m;
		cout<<"W";
		forn(i,m-1)
			cout<<"B";
		cout<<"\n";
		forn(i,n-1){
			forn(j,m)
				cout<<"B";
			cout<<"\n";
		}
	}
	return 0;
}
