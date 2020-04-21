#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t;
	cin>>t;

	while(t--){
		cin>>n;
		if((n/2)&1)
			cout<<"NO\n";
		else{
			cout<<"YES\n";
			forn(i,n/2)
				cout<<2*i+2<<" ";
			forn(i,n/2)
				cout<<2*i+(2*i+1<n/2?1:3)<<" ";
		}
	}
	return 0;
}


