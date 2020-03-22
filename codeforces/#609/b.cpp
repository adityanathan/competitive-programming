#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,m;

	cin>>n>>m;

	vector<int> a(n),b(n);
	string dif="",dif2="";


	forn(i,n){
		cin>>a[i];
	}

	forn(i,n){
		cin>>b[i];
	}

	forn(i,n){
		dif+=a[(i+1)%n]-dif[i];
		dif2+=a[(i+1)%n]-dif2[i];
	}

	forn(i,m){
		dif=dif
	}

	return 0;
}