#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int a,b,t,aa,c,d;
	cin>>t;

	while(t--){
		cin>>a>>b>>c>>d;
		aa=min(a,b);
		b=max(a,b);
		a=aa;
		aa=min(c,d);
		d=max(c,d);
		c=aa;
		
		cout<<(a+c==b && b==d?"Yes":"No")<<endl;
	}
	return 0;
}


