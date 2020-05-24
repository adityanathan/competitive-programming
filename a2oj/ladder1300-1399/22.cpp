#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n;
	cin>>n;
	forn(i,2*n+1)
		forn(j,2*n-abs(i-n)+1)
			if(n>abs(i-n)+abs(j-n) || n==abs(i-n)+abs(j-n) && j<n)
				cout<<n-abs(i-n)-abs(j-n)<<" ";
			else if(n==abs(i-n)+abs(j-n))
				cout<<"0\n";
			else
				cout<<"  ";
	return 0;
}
