#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int n,m,maxi;
	cin>>n>>m;
	vector<int> a(m,0);
	forn(i,m){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	maxi=a[n-1]-a[0];
	forn(i,m-n+1){
		maxi=min(maxi,a[i+n-1]-a[i]);
	}
	cout<<maxi;
	return 0;
}