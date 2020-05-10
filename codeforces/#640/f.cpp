#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,a,b,c,count;
	cin>>t;

	while(t--){
		cin>>a>>b>>c;
		string x(a+1,'0'),y(c+1,'1'),z="";
		count=1;
		if(b==0){
			if(a==0)
				x="";
			if(c==0)
				y="";
		}

		while(count++<b)
			z+=(count%2)?'1':'0';

		cout<<x<<y<<z<<endl;
	}
	return 0;
}