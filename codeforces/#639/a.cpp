#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,m;
	cin>>t;

	while(t--){
		cin>>n>>m;
		if(n==1 || m==1 || (n==m && n==2))
			cout<<"YES\n";
		else
			cout<<"NO"<<endl;
	}
	return 0;
}


