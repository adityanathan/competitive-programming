#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
int main(){
	string a,b;
	cin>>a>>b;
	forn(i,a.length()){
		int x=((int) a[i]-48)^((int)b[i]-48);
		cout<<x;
	}
	return 0;
}

