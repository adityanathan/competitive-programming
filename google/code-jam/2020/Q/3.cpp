#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

int main(){
	int t,test,n,a,b,c,j,it;
	cin>>test;
	t=test;
	while(t--){
		cin>>n;
		string s="";
		forn(i,n)
			s+='0';
		vector<pair<pair<int,int>,int> > time(n);
		forn(i,n){
			cin>>a>>b;
			time[i]=make_pair(make_pair(b,a),i);
		}
		sort(time.begin(),time.end());
		s[time[0].second]='C';
		c=time[0].first.first;
		if(c<=time[1].first.second){
			s[time[1].second]='C';
			c=time[1].first.first;
			j=0;
		}
		else{
			s[time[1].second]='J';
			j=time[1].first.first;
		}
		for(int i=2;i<n;i++){
			it=time[i].second;
			a=time[i].first.second;
			b=time[i].first.first;
			if(j<=a && j>c){
				s[it]='J';
				j=b;
			}
			else if(c<=a){
				s[it]='C';
				c=b;
			}
			else if(j<=a){
				s[it]='J';
				j=b;
			}
			else{
				s="IMPOSSIBLE";
				break;
			}
		}

		cout<<"Case #"<<test-t<<": "<<s<<"\n";
	    
	}
	return 0;
}