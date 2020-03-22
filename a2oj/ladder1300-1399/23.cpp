#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

;
int main(){
	int n,cnt5=0,num;
	bool zero=false;
	cin>>n;
	forn(i,n){
		cin>>num;
		if(num==5)
			cnt5++;
		else zero=true;
	}
	if(zero && cnt5>=9){
		forn(i,cnt5/9)
		cout<<555555555;
		forn(i,n-cnt5)
			cout<<0;
	}
	else if(zero) cout<<0;
	else cout<<-1;
	return 0;
}
