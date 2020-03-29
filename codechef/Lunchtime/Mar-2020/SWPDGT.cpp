#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a/10==0 && b/10==0){
			cout<<a+b<<"\n";
			continue;
		}
		if(a/10==0 && b/10!=0){
			cout<<max(a+b,b/10+a*10+b%10)<<"\n";
			continue;
		}
		if(a/10!=0 && b/10==0){
			cout<<max(a+b,a/10+b*10+a%10)<<"\n";
			continue;
		}
		int x=a+b;
		x=max(x,a/10+(b%10)*10+a%10+(b/10)*10);
		x=max(x,b/10+(a%10)*10+b%10+(a/10)*10);
		cout<<x<<"\n";
	}
	return 0;
}