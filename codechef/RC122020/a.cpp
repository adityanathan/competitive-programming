#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,a,b,maxc,count,ans,tot;
	cin>>t;

	while(t--){
		cin>>n;
		maxc=0;
		ans=0;
		map<int,int> m;
		map<int,int> count;
		forn(i,n){
			cin>>a;
			if(m.find(a)==m.end()){
				m[a]=i;
				count[a]++;
			}
			else{
				if(m[a]!=i-1){
					m[a]=i;
					count[a]++;
				}
			}
		}
		
		forit(it,count){
			ans=maxc<it->second?it->first:ans;
			maxc=max(it->second,maxc);
		}
		
		cout<<ans<<endl;
	}
	return 0;
}


