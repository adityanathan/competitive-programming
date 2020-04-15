#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,m,h;
	cin>>t;

	while(t--){
		cin>>h>>n>>m;
		while(n-- && (h/2+10)<h)
			h=h/2+10;
		while(m--)
			h-=10;
		cout<< ((h<=0)?"YES":"NO") << endl;
	}
	return 0;
}


