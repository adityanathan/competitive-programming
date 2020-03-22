#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	cin>>n;
	vector<int> a(n,0);
	forn(i,n){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	forn(i,n){
		if(a[i]!=i+1){
			cout<<i+1;
			return 0;
		}
	}
	cout<<n+1;
	return 0;
}