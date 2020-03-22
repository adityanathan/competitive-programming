#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,k,a=0,b=0,c=0,ak,bk,ck;
	string s;
	cin>>n>>k>>s;
	ak=bk=ck=k;
	forn(i,s.length()){
		if(s[i]=='a'){
			a++;
			bk--;
			ck--;
		}
		else if(s[i]=='b'){
			b++;
			bk--;
			ck--;
		}
		if(s[i]=='c'){
			c++;
			bk--;
			ck--;
		}
		if()
	}
	return 0;
}
