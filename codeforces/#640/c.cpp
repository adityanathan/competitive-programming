#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k,ans,prev;
	vector<int> div;
	cin>>t;

	while(t--){
		cin>>n>>k;
		prev=-1;
		ans=k+k/n;
		while(prev!=ans){
			prev=ans;
			ans=k+ans/n;
		}
		cout<<ans<<endl;
	}
	return 0;
}


