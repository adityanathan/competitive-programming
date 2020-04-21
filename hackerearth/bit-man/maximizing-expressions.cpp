#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,temp;
	long long sum=0;
	
	cin>>n;
	vector<int> x(n);

	forn(i,n)
		cin>>x[i];

	forn(i,n){
		cin>>temp;
		x[i]^=temp;
	}

	forn(i,n){
		cin>>temp;
		sum+=x[i]^temp&~x[i];
	}

	cout<<sum;
}
