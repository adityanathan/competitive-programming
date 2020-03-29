#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int n,q,type,l,r;
	cin>>n;
	vector<long long> a(n,0),b(n,0);
	forn(i,n){
		cin>>b[i];
		if(i==0)
			a[0]=b[0];
		else
			a[i]=b[i]+a[i-1];
	}
	
	sort(b.begin(),b.end());

	for(int i=1;i<n;i++){
		b[i]+=b[i-1];
	}
	cin>>q;
	while(q--){
		cin>>type>>l>>r;
		l--;r--;
		if(type==1)
			cout<<a[r]-(l>0?a[l-1]:0)<<"\n";
		else
			cout<<b[r]-(l>0?b[l-1]:0)<<"\n";
	}
	return 0;
} 