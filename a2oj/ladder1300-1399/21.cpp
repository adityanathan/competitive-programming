#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n;
	string s;
	cin>>n;
	forn(i,n){
		cin>>s;
		if(s.length()>10)
		cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
		else cout<<s<<"\n";
	}
	return 0;
}