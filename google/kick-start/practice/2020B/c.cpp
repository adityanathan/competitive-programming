#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

long long p = 1000000000;

int main(){
	int t,test;
	string s;
	cin>>test;
	t=test;
	while(t--){
		cin>>s;
		map<char,long long> m;
		vector<long long> mul(1,1);
		forn(i,s.length()){
			if(s[i]<='9' && s[i]>='2')
				mul.push_back(((long long)mul.back()*(s[i++]-'0'))%p);
			else if(s[i]==')')
				mul.pop_back();
			else{
				m[s[i]]+=mul.back();
				m[s[i]]%=p;
			}
		}

		cout<<"Case #"<<test-t<<": "<<1+(30*p+m['E']-m['W'])%p<<" "<<1+(m['S']-m['N']+30*p)%p<<"\n";
	    
	}
	return 0;
}