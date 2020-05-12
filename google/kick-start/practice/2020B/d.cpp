#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

int w,h,l,u,r,d;

map< pair<int,int> ,double> m;
double prob(int x, int y){
	if(x<=r && x>=l && y<=d && y>=u)
		return 0;
	if(x==w && y==h)
		return 1;
	if(x==w){
		if(m.find(make_pair(x,y+1))==m.end())
			m[make_pair(x,y+1)]=prob(x,y+1);
		return m[make_pair(x,y+1)];
	}
	if(y==h){
		if(m.find(make_pair(x+1,y))==m.end())
			m[make_pair(x+1,y)]=prob(x+1,y);
		return m[make_pair(x+1,y)];
	}
	if(m.find(make_pair(x,y+1))==m.end())
			m[make_pair(x,y+1)]=prob(x,y+1);
	if(m.find(make_pair(x+1,y))==m.end())
			m[make_pair(x+1,y)]=prob(x+1,y);
	return m[make_pair(x,y+1)]/2+m[make_pair(x+1,y)]/2;
}

int main(){
	int t,test;
	cin>>test;
	t=test;
	while(t--){
		m.clear();
		cin>>w>>h>>l>>u>>r>>d;
		cout<<"Case #"<<test-t<<": "<<prob(1,1)<<"\n";
	}
	return 0;
}