#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,nex;
	bool f;
	cin>>t;

	while(t--){
		cin>>n;
		map<int,bool> m;
		f=true;
		forn(i,n){
			cin>>nex;
			if(m.find((n+(i+nex)%n)%n)!=m.end())
				f=false;
			m[(n+(i+nex)%n)%n]=true;
		}
		
		cout<< (f?"YES\n":"NO\n");
	}
	return 0;
}


