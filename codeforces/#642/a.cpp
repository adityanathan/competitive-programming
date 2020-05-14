#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,m,t;
	cin>>t;

	while(t--){
		cin>>n>>m;
		if(n==1)
			cout<<"0\n";
		else if(n==2)
			cout<<m<<"\n";
		else
			cout<<2*m<<endl;
	}
	return 0;
}


