#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	cin>>n;
	vector<int> a(n,0),b(n,0);
	forn(i,n){
		cin>>b[i];
		a[i]=b[i]+a[i-1];
	}
	a[0]=b[0];
	sort(b.begin(),b.end());

	for(int i=1;i<n;i++){
		b[i]+=b[i-1];
	}
	int q;
	cin>>q;
	forn(i,q){
		if(i==1)
			cout<<a[r]-a[l-1];
	}
	return 0;
} 