#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long t,x,y,a,b;
	cin>>t;

	while(t--){
		cin>>x>>y>>a>>b;
		if(2*a<b)
			cout<<a*(abs(x)+abs(y))<<"\n";
		else
			cout<<a*abs(abs(x)-abs(y))+b*min(abs(x),abs(y))<<endl;
	}
	return 0;
}


