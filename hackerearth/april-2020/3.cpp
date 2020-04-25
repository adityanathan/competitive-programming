#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m,aa,ans=0;
	vector<int>::iterator it;
	
	cin>>n>>m;
	vector<int> a(n),b(m);

	forn(i,n){
		cin>>aa;
		a[i]=-aa;
	}

	forn(i,m)
		cin>>b[i];

	sort(a.begin(),a.end());
	sort(b.rbegin(),b.rend());

	while(a.size()>0){
		ans++;
		if(b[0]<-a[0]){
			ans=0;
			break;
		}
		forn(j,m){
			it = lower_bound(a.begin(), a.end(), -b[j]); 
			if(it==a.end())
				break;
			a.erase(it);
		}
	}
	cout<<2*ans-1<<"\n";
}