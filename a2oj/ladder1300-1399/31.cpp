
#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,m,pos=0,house;
	long long time=0;
	cin>>n>>m;

	forn(i,m){
		cin>>house;
		house--;
		time+=(n + (house-pos)%n)%n;
		pos=house;
	}
	cout<<time;

	return 0;
}
