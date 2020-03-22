
#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,x,y;
	
	cin>>n>>x>>y;

	if(1.0*y/100<=1.0*x/n)
	{
		cout<<0;
		return 0;
	}
	cout<<ceil(1.0*n*y/100-x);
	return 0;
}
