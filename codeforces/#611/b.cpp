#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int t,n,k,count;

	cin>>t;

	while(t--){
		cin>>n>>k;
		count=k*(n/k)+min(n%k,k/2);

		cout<<count<<"\n";
	}
	return 0;
}