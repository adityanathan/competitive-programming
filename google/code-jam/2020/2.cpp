#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

string f(string s,int x){
	if(s.length()==0)
		return "";
	int mini=0,n=s.length();
	forn(i,n)
		mini=s[mini]>s[i]?i:mini;
	string L="",R="";
	forn(i,s[mini]-'0'-x){
		L+='(';
		R+=')';
	}
	return L+f(s.substr(0,mini),s[mini]-'0')+s[mini]+f(s.substr(mini+1,n-mini-1),s[mini]-'0')+R;
}
int main(){
	int t,test,n;
	string s;
	cin>>test;
	t=test;
	while(t--){
		cin>>s;
		cout<<"Case #"<<test-t<<": "<<f(s,0)<<"\n";
	    
	}
	return 0;
}