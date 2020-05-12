#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int t,n,test,con;
	cin>>test;
	t=test;
	while(t--){
		cin>>n;
		con=0;
		vector<int> a(n);
		forn(i,n)
			cin>>a[i];
		forn(i,n-2)
			if(a[i+1]>a[i] && a[i+1]>a[i+2])
				con++;
		cout<<"Case #"<<test-t<<": "<<con<<"\n";
	}
	return 0;
}