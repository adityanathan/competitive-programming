#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k,i,sum;
	cin>>t;

	while(t--){
		cin>>n>>k;
		vector<int> a(n),b(n);
		forn(i,n)
			cin>>a[i];
		forn(i,n)
			cin>>b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		i=0;
		while(k-- && a[i]<b[n-1-i] && i<n){
			a[i]=b[n-1-i];
			i++;
		}
		sum=0;
		forn(i,n)
			sum+=a[i];
		cout<<sum<<endl;
	}
	return 0;
}


