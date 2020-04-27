#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

vector<int> v(10000001,0);

int f(int n){
	if(n==2)
		return 3;
	return f(n-1);
}
int main(){
	int n,a;
	cin>>n;
	cout<<f(n);
	return 0;
} 