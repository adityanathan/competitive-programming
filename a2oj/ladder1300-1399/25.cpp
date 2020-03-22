#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,m,sum=0,i=0;
	cin>>n>>m;
	vector<int> v(n,0);
	forn(i,n){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	while(v[i]<0 && m){
		sum-=v[i];
		i--;
		m--;
	}
	cout<<sum;
	return 0;
}
