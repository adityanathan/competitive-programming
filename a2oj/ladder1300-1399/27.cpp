
#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int s,n,a,b;
	
	cin>>s>>n;

	vector< pair<int , int> > v;
	forn(i,n){
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	forn(i,n){
		if(v[i].first>=s){
			cout<<"NO"; return 0;
		}
		s+=v[i].second;
	}
	cout<<"YES";
	return 0;
}
