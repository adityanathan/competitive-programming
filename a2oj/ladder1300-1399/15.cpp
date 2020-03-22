#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,x=0;
	string s;
	cin>>n;
	forn(i,n){
		cin>>s;
		if(s[1]=='+'){
			x++;
		}
		else x--;
	}
	cout<<x;
	return 0;
}