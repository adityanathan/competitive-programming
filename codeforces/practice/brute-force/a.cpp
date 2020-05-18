#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int t,a,b,c,count=0;
	cin>>t;

	while(t--){

		cin>>a>>b>>c;
		if(a+b+c>1)
			count++;
		}
		cout<<count<<endl;
	
	return 0;
}


