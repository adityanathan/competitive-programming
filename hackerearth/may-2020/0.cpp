#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long t,n;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		cout<<n*(n-1)+1<<"\n";
	}

}