#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,count=0;
	bool bool1,bool2,bool3;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		bool1=bool2=bool3=false;
		count=0;
		forn(i,s.length()){
			if(!bool1 && s[i]=='0'){
				bool1=true;
				continue;
			}
			if(!bool2 && (s[i]-'0')%2==0)
				bool2=true;
			count+=(s[i]-'0')%3;
			count%=3;
		}
		if(bool1 && bool2 && count%3==0)
			cout<<"red\n";
		else cout<<"cyan\n";

	}
	

	return 0;
}