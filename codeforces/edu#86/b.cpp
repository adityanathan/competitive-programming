#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t;
	bool f;
	string s;
	cin>>t;

	while(t--){
		cin>>s;
		f=true;
		forn(i,s.length()-1){
			if(s[i]!=s[i+1]){
				f=false;
				break;
			}
		}
		if(f)
			cout<<s;
		else
			forn(i,s.length())
				cout<<"01";
		
		cout<<endl;
	}
	return 0;
}


