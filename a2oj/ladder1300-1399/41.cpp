#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int k;
	cin>>k;
	string a="",s;
	cin>>s;
	if(k==1){
		cout<<s;
		return 0;
	}
	map<char,int> m;
	for(int i=0;s[i];i++){
		m[s[i]]++;
	}
	for(auto it=m.begin();it!=m.end();++it){
		if(it->second%k!=0){
			cout<<-1;
			return 0;
		}
		forn(i,it->second/k)
		a+=it->first;
	}
	forn(i,k){
		cout<<a;
	}
	return 0;
}