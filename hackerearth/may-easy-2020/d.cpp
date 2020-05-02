#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,x,y;

	map<int,map<int,int> > m;
	cin>>n;
	forn(i,n){
		cin>>x>>y;
		m[x][y]++;
	}
	forit(it,m)
		forit(jt,it->second){
			
		}
	cout<<n<<endl;
	
	return 0;
}


