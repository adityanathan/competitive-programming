#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t,n,x;
	string s;
	
	cin>>t;
	
	while(t--){
		cin>>n>>s;
		vector<int> a(n);

		a[0]=s[0]=='A'?1:0;
		forn(i,n-1)
			a[i+1]=a[i]+(s[i+1]=='A'?1:0);

		x=a[n-1];
		forn(i,n)
			x=min(x,a[n-1]-2*a[i]+i+1);

		cout<<x<<"\n";
	}

}