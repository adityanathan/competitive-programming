#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	int t,a,b,n,ai,bi;
	bool bo;

	cin>>t;

	while(t--){
		cin>>n;
		vector<int> a(n),b(n);
		forn(i,n)
			cin>>a[i];
		sort(a.begin(),a.end());
		forn(i,n){
			if(i&1)
				b[n-i-1]=a[i/2];
			else
				b[n-i-1]=a[n-i/2-1];
		}
		forn(i,n)
			cout<<b[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
