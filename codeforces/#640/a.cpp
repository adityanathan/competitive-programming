#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,l;
	string s;
	cin>>t;

	while(t--){
		cin>>n;
		s = to_string(n);
		l=0;
		forn(i,s.length())
			if(s[i]!='0')
				l++;
		cout<<l<<"\n";
		forn(i,s.length())
			if(s[i]!='0'){
				string x(s.length()-i-1,'0');
				cout<<s[i]<<x<<" ";
			}
		cout<<endl;
	}
	return 0;
}