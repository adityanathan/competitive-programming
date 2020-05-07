#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

pair<float,float> ss(char n){
	if(n=='N')
		return make_pair(0,0.5);
	if(n=='S')
		return make_pair(0,-0.5);
	if(n=='E')
		return make_pair(0.5,0);
	if(n=='W')
		return make_pair(-0.5,0);
}
int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int t,x,y,time;
	string s;
	cin>>t;

	while(t--){
		cin>>s;
		x=y=time=0;
		map<pair<float,float>,bool> m;
		forn(i,s.length()){
			pair<float,float> mv=ss(s[i]);
			if(m.find(make_pair(x+mv.first,y+mv.second))==m.end())
				time+=5;
			else 
				time+=1;
			m[make_pair(x+mv.first,y+mv.second)]=true;
			if(s[i]=='N')
				y++;
			if(s[i]=='S')
				y--;
			if(s[i]=='E')
				x++;
			if(s[i]=='W')
				x--;
		}
		cout<<time<<endl;
	}
	return 0;

}


