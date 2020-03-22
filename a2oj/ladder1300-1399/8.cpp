#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
int main(){
	int n,a,oddev[2],sum=0;
	oddev[0]=oddev[1]=0;
	cin>>n;
	forn(i,n){
		cin>>a;
		oddev[a&1]++;
		sum+=a;
	}
	cout<<oddev[sum&1];
	return 0;
}

