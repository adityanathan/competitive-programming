#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
int main(){
	int n;cin>>n;
	vector<int> a(n,0);
	forn(i,n)
	cin>>a[i];
	int amaz=0,min=a[0],max=a[0];
	forn(i,n){
		if(min>a[i]){min=a[i];amaz++;}	
		if(max<a[i]){max=a[i];amaz++;}	
	}
	cout<<amaz;
	return 0;
}

