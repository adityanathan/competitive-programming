#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int q;
long long a,b,c;
int main(){
	cin>>q;
	while(q--){
		cin>>a>>b>>c;
		cout<<(a+b+c)/2<<"\n";
	}
	return 0;
}