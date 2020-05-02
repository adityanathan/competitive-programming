#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		vector<int> a(n),b(k);
		map<int,int> m;
		forn(i,n){
			cin>>a[i];
			m[a[i]]++;
		}
		if(m.size()>k){
			cout<<"-1\n";
			continue;
		}
		int i=0;
		forit(it,m)
			b[i++]=it->first;
		while(i<k)
			b[i++]=1;
		cout<<k*n<<"\n";
		forn(i,n*k)
			cout<<b[i%k]<<" ";
		cout<<endl;
	}
	return 0;
}


