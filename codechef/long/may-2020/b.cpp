#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,q,ans,c;
	string s;
	cin>>t;

	while(t--){
		cin>>n>>q>>s;
		ans=0;
		map<char,int> m;
		forn(i,n){
			m[s[i]]++;
		}
		vector<int> v(n+2);
		forit(it,m){
			v[1]++;
			v[it->second+1]--;
		}
		forn(i,n){
			v[i+1]+=v[i];
		}
		forn(i,n){
			v[i+1]+=v[i];
		}
		while(q--){
			cin>>c;
			if(c>=n)
				cout<<"0\n";
			else
				cout<<n-v[c]<<"\n";
		}
	}
	return 0;
}


