#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,a,ans,rem;
	cin>>t;

	while(t--){
		cin>>n;
		map<int,int> m;
		forn(i,n){
			cin>>a;
			m[a]++;
		}

		ans=rem=0;
		forit(it,m){
			ans+=it->second/it->first;
			rem+=it->second%it->first;
			ans+=rem/it->first;
			rem%=it->first;
		}

		cout<<ans<<endl;
	}
	return 0;
}

