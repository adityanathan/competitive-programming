#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int n;
int f( int , int );
int main(){
	cin>>n;
	forn(i,n){
		forn(j,n){
			cout<<f(j,(i+j)%n)<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

int f( int i, int j){
	return (i+1)+n*(j);
}