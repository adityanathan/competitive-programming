#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)



int main(){
	int t,m,n;
	bool b;
	unordered_map<int,int> mp;
	
	cin>>t;

	while(t--){
		cin>>n>>m;
		vector<int> a(n),b(m);
		forn(i,n){
			cin>>a[i];
			mp[a[i]]=i;
		}
		long long ordered=-1,cost=0;
		forn(i,m){
			cin>>b[i];
			if(mp[b[i]]<=ordered){
				cost+=1;
			}
			else{ ordered=mp[b[i]];
				cost+=2*(mp[b[i]]-i)+1;
			}
		}
		cout<<cost<<"\n";
	}

	

	return 0;
}