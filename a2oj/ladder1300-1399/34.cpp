#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	map<string,int> m;
	int n;
	string s;
	cin>>n;
	forn(i,n){
		cin>>s;
		m[s]++;
	}
	map<string,int>::iterator it=m.begin(),max=it;
	while(it!=m.end()){
		if(it->second>max->second)
			max=it;
		it++;
	}
	cout<<max->first;
	return 0;
}
