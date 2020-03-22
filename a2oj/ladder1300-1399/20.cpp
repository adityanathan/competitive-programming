#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,t;
	string s;
	cin>>n>>t>>s;
	forn(i,t)
		forn(j,n-1){
			if(s[j]=='B' && s[j+1]=='G'){
				s[j+1]='B';
				s[j]='G';
				j++;
			}
		}
	cout<<s;
	return 0;
}