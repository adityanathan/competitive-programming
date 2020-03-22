#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,k;
	cin>>n>>k;
	forn(i,n){
		forn(j,n){
			cout<<(j+i+1)/n*k*!((j+i+1)%n)<<" ";
		}cout<<"\n";
	}
	return 0;
}