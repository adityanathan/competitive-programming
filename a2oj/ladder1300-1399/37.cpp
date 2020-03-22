#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	string s;
	char c;
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i=0;s[i];i++){
		c=s[i];
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
			continue;
		cout<<"."<<s[i];
	}
	return 0;
}
