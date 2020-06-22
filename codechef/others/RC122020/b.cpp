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
	string s;
	cin>>t;

	while(t--){
		cin>>s;
		n=s.length();
		if(s[n-1]+s.substr(0,n-1) == s.substr(1,n-1)+s[0])
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}


