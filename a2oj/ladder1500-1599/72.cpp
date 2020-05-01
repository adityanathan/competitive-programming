#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

vector<int> v(10000000,0);

int main(){
	long long n,power = 3;
	cin>>n;
	v[1]=3;
	forn(i,n)
		if(i>=2){
			v[i]=(v[i-2]+2*power)%1000000007;
			power=power*3%1000000007;
		}
	cout<<v[n-1];
	return 0;
} 