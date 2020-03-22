#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n;
	cin>>n;
	string s;
	bool flag;
	while(n--){
		flag=true;
		cin>>s;
		if(s[0]=='?'){
			if(s[1]!='a')
				s[0]='a';
			else s[0]='b';
		}
		 if(s[s.length()-1]=='?'){
			// cout<<s.length();
			if(s[s.length()-2]!='a')
				s[s.length()-1]='a';
			else s[s.length()-1]='b';
		}

		for(int i=1;s[i+1];i++){
			if(s[i]=='?' && s[i+1]=='?'){
				if(s[i-1]!='a')
					s[i]='a';
				else s[i]='b';
			}
			if(s[i]=='?'){
				if(s[i-1]!='a' && s[i+1]!='a')
					s[i]='a';
				else if(s[i-1]!='b' && s[i+1]!='b')
					s[i]='b';
				else s[i]='c';
			}
			else if(s[i]==s[i-1]||s[i]==s[i+1]){
				cout<<-1<<"\n";
				flag=false;
				break;
			}
		}

		if(flag){
			if(s[0]==s[1])
			{	cout<<-1<<"\n";
			}
			else
			cout<<s<<"\n";
		}
	}
	return 0;
}