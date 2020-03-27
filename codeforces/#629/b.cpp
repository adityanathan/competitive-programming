#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	long long n,k,t,x,y;

	cin>>t;

	while(t--){
		cin>>n>>k;
		x=int(sqrt(2*k));
		y=k-x*(x-1)/2;
		x=n-1-x;
		y=n-y;
		// cout<<x<<"x"<<y;
		if (y<=x){
			forn(i,n){
				if(i==x-1 || i==n-1+y-x)
				{
					cout<<"b";
					continue;
				}
				cout<<"a";
			}
		}
		else
			forn(i,n){
				if(i==x || i==y)
				{
					cout<<"b";
					continue;
				}
				cout<<"a";
			}
		cout<<"\n";
	}
	return 0;
}
