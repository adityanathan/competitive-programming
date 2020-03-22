#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	string a1=to_string(a);
	string b1=to_string(b);
	string c1=to_string(c);
	string a2="",b2="",c2="";
	forn(i,a1.length()){
		if(a1[i]!='0')
			a2+=a1[i];
	}
	forn(i,b1.length()){
		if(b1[i]!='0')
			b2+=b1[i];
	}
	forn(i,c1.length()){
		if(c1[i]!='0')
			c2+=c1[i];
	}
	// cout<<c2<<"&"<<stoi(a2)+stoi(b2);
	if(stoi(c2)==stoi(a2)+stoi(b2))
	cout<<"YES";
	else cout<<"NO";
	return 0;
}
