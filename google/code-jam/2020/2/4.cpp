#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long t,x,y,test,n;
	bool b;
	string s;

	cin>>test;
	t=test;

	while(t--){
		b=true;
		cin>>x>>y>>s;
		n=s.length();

		cout<<"Case #"<<test-t<<": ";

		vector<long long> a(n);
		
		forn(i,n){
			cin>>a[i];
		}

		if(b)
			cout<<"IMPOSSIBLE"<<"\n";
	}
	return 0;
}	