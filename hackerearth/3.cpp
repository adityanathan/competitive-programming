#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,mm,id,maxx=0;
	map<int,map<int,int> > m;
	cin>>n>>mm;
	forn(i,n){
		forn(j,mm){
			cin>>id;
			m[id][i]=1;
		}
	}
	map<int,map<int,int> >::iterator it;
	for(it=m.begin();it!=m.end();it++){
		if(maxx<it->second.size())
			maxx=it->second.size();
	}
	if(maxx<=2){
		cout<<0;
	}
	else cout<<maxx-2;
	return 0;
}
