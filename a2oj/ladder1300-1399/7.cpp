#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
int main(){
	string a,b;
	cin>>a>>b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	forn(i,a.length()){
		if(a[i]<b[i]) {cout<<-1;return 0;}	
		if(a[i]>b[i]) {cout<<1;return 0;}	
	}
	cout<<0;
	return 0;
}

