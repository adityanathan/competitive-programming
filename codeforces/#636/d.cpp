#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		vector<int> a(n),b(2*k+2,0);

		forn(i,n)
			cin>>a[i];

		forn(i,n/2){
			b[1+min(a[i],a[n-i-1])]++;
			b[k+max(a[i],a[n-i-1])+1]--;
		}

		forn(i,2*k)			//integration
			b[i+1]+=b[i];

		forn(i,n/2)
			b[a[i]+a[n-i-1]]++;

		cout<<n-*max_element(b.begin(),b.end())<<endl;
	}
	return 0;
}


