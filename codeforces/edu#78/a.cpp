#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,j;
	string s,h;
	unordered_map<char,int> m,mn,mx,my;
	
	cin>>n;

	while(n--){
		cin>>s>>h;
		if(s.length()>h.length()){
			cout<<"NO\n";
			continue;
		}
		m.clear();
		for(int i=0;s[i];i++){
			m[s[i]]++;
		}
		for(j=0;j<=h.length()-s.length();j++){
			mx.clear();
			for(int i=0;s[i];i++){
				mx[h[i+j]]++;
			}
			if(mx==m)
			{	cout<<"YES\n";
				break;
			}
		}
		if(j==h.length()-s.length()+1)
			cout<<"NO\n";
	}

	

	return 0;
}