#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;



int main(){
	int t,test,n,k,elem,tot,x;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>k;
		vector<int> a(n);
		forn(i,n){
			cin>>a[i];
		}
		vector<int> diff(n-1);
		forn(i,n-1){
			diff[i]=a[i+1]-a[i];
		}
		tot=a[n-1]-a[0];
		sort(diff.begin(),diff.end());
		x=0;
		forn(i,n-1){
			x=max(x, (int)(diff[n-2]/(k*1.0*(diff[n-2]-1)/(tot-n+1))));
		}
		cout<<"Case #"<<test-t<<": "<<x<<"\n";
	    
	}
	return 0;
}