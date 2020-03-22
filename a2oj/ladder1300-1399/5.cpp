#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
int main(){
	string s;
	cin>>s;
	forn(i,s.length()){
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){cout<<"YES";return 0;}
	}
	cout<<"NO";
	return 0;
}

