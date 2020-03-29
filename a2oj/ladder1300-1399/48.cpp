#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int n,a[2]={0,0},ai;
	cin>>n;
	forn(i,n){
		cin>>ai;
		a[(ai/100)-1]++;
	}
	if(a[0]%2 || (a[0]==0 && a[1]%2))
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
} 