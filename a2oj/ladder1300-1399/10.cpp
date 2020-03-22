#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

;
int main(){
	int n,sum=0,a;
	cin>>n;
	forn(i,n){
		cin>>a;
		sum+=a;
	}
	cout<<1.0*sum/n;
	return 0;
}
