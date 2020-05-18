#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t=1,ans=0,now;

	while(t--){
		cin>>n;
		vector<int> a(n);
		forn(i,n)
			cin>>a[i];

		forn(k,n)
			forn(i,n){
				now=0;
				for(int j=i;j<=k;j++){
					now^=a[j];
				}
				ans=max(ans,now);
			}
		cout<<ans<<endl;
	}
	return 0;
}


