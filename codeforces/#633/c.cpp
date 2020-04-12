#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int dig(long long x){
	int b=0;
	while(x){
		x/=2;
		b++;
	}
	return b;
}
int main(){
	long long t,n,need,mini,maxi;

	cin>>t;

	while(t--){
		cin>>n;
		need=0,mini=0,maxi=0;
		vector<long long> a(n);
		forn(i,n)
			cin>>a[i];
		forn(i,n){
			maxi=a[maxi]<a[i]?i:maxi;
			if(a[i]+pow(2,need)-1<a[maxi])
				need=need<dig(a[maxi]-a[i])?dig(a[maxi]-a[i]):need;
			// cout<<"i"<<a[i]<<"need"<<need<<"\n";
		}
		cout<<need<<"\n";
	}
	return 0;
}
