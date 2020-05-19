#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long x,n,fact=1;
	
	cin>>x>>n;
	x%=10;
	if(n<5)
		while(n--)
			fact*=n+1;
	else
		fact=0;

	cout<<(long long)pow(x,fact%10)%10<<"\n";

}