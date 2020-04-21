#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,x;
	cin>>t;

	while(t--){
		cin>>n;
		x=3;
		while(n%(x)!=0){
			x<<=1;
			x++;
		}
		cout<<n/x<<endl;
	}
	return 0;
}


