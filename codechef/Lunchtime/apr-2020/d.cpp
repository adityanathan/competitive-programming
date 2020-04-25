#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,q,x,y,l,r;
	cin>>t;
	vector<pair<int,int> >::iterator it;

	while(t--){
		cin>>n>>q;
		vector<pair<int,int> > v(n);

		forn(i,n){
			cin>>x>>y;
			v[i]=make_pair(-x-y,x-y);
		}
		sort(v.begin(),v.end());
		forn(i,q){
			cin>>l>>r;
			it=loweer-bound(v.begin(),v.end(),-r);
		}
		cout<<n<<endl;
	}
	return 0;
}


