#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,a,aprev,maxtot,mintot,now;
	cin>>t;

	while(t--){
		cin>>n;
		now=1;
		maxtot=-1;
		mintot=10000;
		cin>>aprev;
		forn(i,n-1){
			cin>>a;
			if(a>aprev+2)
			{
				maxtot=max(now,maxtot);
				mintot=min(now,mintot);
				now=0;
			}
			now++;
			aprev=a;
		}
		maxtot=max(now,maxtot);
		mintot=min(now,mintot);
		now=0;
		
		cout<<mintot<<" "<<maxtot<<endl;
	}
	return 0;
}


