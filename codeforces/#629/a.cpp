#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	long long n,t,b,a;

	cin>>t;

	while(t--){
		cin>>a>>b;
		cout<<(2*(a/b+10)*b-a)%b<<"\n";
	}
	return 0;
}
