#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,a,ans;
	cin>>t;

	while(t--){
		cin>>n;
		ans=1;
		map<int,vector<int> > m;
		forn(i,n){
			cin>>a;
			if(m.find(a)==m.end()){
				vector<int> v;
				m[a]=v;
			}
			m[a].push_back(i);
		}
		
		forit(it,m){
			map<int,vector<int> >::iterator jt=++it;
			it--;
			if(jt==m.end())
				break;
			if( (it->second)[0] > (jt->second)[(jt->second).size()-1] )
				ans++;
		}
		
		cout<<ans<<endl;
	}
	return 0;
}


