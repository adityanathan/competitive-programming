#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	string s;
	cin>>s;
	if(s[0]!='1'){
		cout<<"NO";
		return 0;
	}
	for(int i=1;s[i];i++){
		if(s[i]=='1')
			continue;
		if(s[i]!='4'){
			cout<<"NO";
				return 0;	
		}
		if(s[i+1]=='4'){
			if(s[i+2]=='4'){
				cout<<"NO";
				return 0;	
			}
			i++;
		}
	}
	cout<<"YES";
	return 0;
}
