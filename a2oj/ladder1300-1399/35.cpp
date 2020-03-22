#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	string s,a="";
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
			a+=" ";
			i+=2;
		}
		else a+=s[i];
	}
	int flag=true;
	forn(i,a.length()){
		if(a[i]==' ' && flag==true)
			continue;
		else if(flag==true){flag=false;}
		else if(a[i]==' '){flag=true;}
		cout<<a[i];
	}
	return 0;
}
