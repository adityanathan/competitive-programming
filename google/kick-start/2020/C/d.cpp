#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	int t,n,test,q,l,r;
	char which;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>q;
		vector<long long> a(n),sum(n+1,0),weird(n+1,0);
		map<int,int> m;
		forn(i,n){
			cin>>a[i];
			sum[i+1]=(i%2?-(i+1)*a[i]:(i+1)*a[i])+sum[i];
			weird[i+1]=(i%2?-a[i]:a[i])+weird[i];
		}
		long long ans=0;
		while(q--){
			cin>>which>>l>>r;
			if(which=='U'){
				a[l-1]=r;
				forn(i,n){
					sum[i+1]=(i%2?-(i+1)*a[i]:(i+1)*a[i])+sum[i];
					weird[i+1]=(i%2?-a[i]:a[i])+weird[i];
				}
				continue;
			}
			ans+=pow(-1,l-1)*(sum[r]-sum[l-1]-(l-1)*(weird[r]-weird[l-1]));
		}
		cout<<"Case #"<<test-t<<": "<<ans<<"\n";
	}
	return 0;
}