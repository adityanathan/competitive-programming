#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef pair<int, int> pi;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long t,x,y,test,i,j,xcurr,ycurr,n;
	bool b;
	string s;
	cin>>test;
	t=test;
	while(t--){
		b=true;
		cin>>x>>y>>s;
		xcurr=x,ycurr=y;
		n=s.length();
		cout<<"Case #"<<test-t<<": ";
		vector<int> v(n+1);
		forn(i,n){
			v[i]=abs(xcurr)+abs(ycurr)-i;
			if(s[i]=='N')
				ycurr++;
			if(s[i]=='S')
				ycurr--;
			if(s[i]=='E')
				xcurr++;
			if(s[i]=='W')
				xcurr--;
		}
		v[n]=abs(xcurr)+abs(ycurr)-n;
		forn(i,n+1){
			if(v[i]<=0){
				cout<<i<<"\n";
				b=false;
				break;
			}
		}
		if(b)
			cout<<"IMPOSSIBLE"<<"\n";
	    
	}
	return 0;
}