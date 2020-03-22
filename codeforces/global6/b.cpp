#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)


bool dp(long long int n){
	if(n<15)
		return false;
	if(n<=20)
		return true;
	if(n==21)
		return false;
	if(n<28)
		return false;
	return dp(14+n%14);
}
int main(){
	long long int t,n;
	bool bool1,bool2,bool3;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		if(dp(n))
			cout<<"YES\n";
		else cout<<"NO\n";

	}
	

	return 0;
}