#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,s,d,p1,p2;
	cin>>t;//t=1;

	while(t--){
		cin>>n>>s;
		vector<int> p(n);
		forn(i,n)
			cin>>p[i];
		p1=p2=1000;
		forn(i,n){
			cin>>d;
			if(d)
				p1=min(p1,p[i]);
			else
				p2=min(p2,p[i]);
		}
		if(p1+p2+s<=100)
			cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}


