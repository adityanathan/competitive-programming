#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int h,m,t;

	cin>>t;

	while(t--){
		cin>>h>>m;
		cout<<(23-h)*60+(60-m)<<"\n";
	}
	return 0;
}