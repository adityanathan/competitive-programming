#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

;
int main(){
	int n,k;
	cin>>n>>k;
	forn(i,k+1){
		cout<<k+1-i<<" ";
	}
	forn(i,n-k-1)
		cout<<i+k+2<<" ";
	return 0;
}
