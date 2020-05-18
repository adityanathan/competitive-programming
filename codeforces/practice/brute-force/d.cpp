#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int x,y,a,b;
	vector<pair<int,int> > v;

	cin>>x>>y>>a>>b;
	for(int i=a;i<=x;i++)
		for(int j=b;j<=y;j++)
			if(i>j)
				v.push_back(make_pair(i,j));


	sort(v.begin(),v.end());

	cout<<v.size()<<"\n";
	forn(i,v.size())
		cout<<v[i].first<<" "<<v[i].second<<endl;

	return 0;
}


