#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	string s,t;

	{
		cin>>s>>t;
		if(s==t.substr(0,s.length()) && s.length()+1 == t.length())
			cout<<"Yes";
		else cout<<"No";
		
		cout<<endl;
	}
	return 0;
}


