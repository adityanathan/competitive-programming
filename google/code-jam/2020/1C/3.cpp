#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef pair<long long, int> pi;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long t,test,n,d;
	bool b;
	cin>>test;
	t=test;
	while(t--){
		b=true;
		cin>>n>>d;
		cout<<"Case #"<<test-t<<": ";
		vector<long long> a(n);
		map<long long,int> m;
		map<long long,int>::iterator jt,maxc;
		forn(i,n){
			cin>>a[i];
			m[a[i]]++;
		}
		maxc=m.begin();
		forit(it,m){
			maxc=maxc->second<it->second?it:maxc;
		}
		if(maxc->second>=d){
			cout<<"0\n";
		}
		else if(d==2){
			cout<<"1\n";
		}
		else{
			if(maxc->second==2){
				jt = m.end(); jt--;
				if(jt->first!=maxc->first){
					cout<<"1\n";
					b=false;
				}
			}
			if(b){
				forit(it,m){
					if((it->first%2==0) && m.find(it->first/2)!=m.end()){
						b=false;
						cout<<"1\n";
						break;
					}
				}
			}
			if(b)
				cout<<"2\n";
		}
	    
	}
	return 0;
}