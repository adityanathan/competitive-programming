#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int q,n;
	cin>>q;
	while(q--){
	cin>>n;
	int j;
	vector<int> a(n);
	forn(i,n){
		cin>>a[i];
		if(a[i]==1)
			j=i;
	}
	bool f=true;
	forn(i,n-1){
		if(a[(i+j)%n]==-1+a[(i+j+1)%n]){
			f=true;
		}
		else {f=false;
			break;}
	}
	if(f){
		cout<<"YES\n";
		continue;
	}
	j=n+j+1;
	forn(i,n-1){
		if(a[(i+j)%n]==1+a[(i+j+1)%n]){
			f=true;
		}
		else {f=false;break;}
	}
	if(f){
		cout<<"YES\n";
		continue;
	}
	else cout<<"NO\n";
}
return 0;
}