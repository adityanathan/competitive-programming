#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < (n); ++i)
int main(){
	int n,aa;
	vector<int> a;
	cin>>n;
	forn(i,n){
		cin>>aa;
		a.push_back(aa);
	}
	int maxi=0,mini=0;
	forn(i,n){
		maxi=a[maxi]<a[i]?i:maxi;
		mini=a[mini]>=a[i]?i:mini;
	}	
	if(mini>maxi)
		cout<<(-mini+n-1+maxi);
	else cout<<(-mini+n-2+maxi);
	return 0;
}

