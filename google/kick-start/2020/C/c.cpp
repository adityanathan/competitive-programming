#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	int t,n,test,k,kk,count;
	long long x;
	cin>>test;
	t=test;
	while(t--){
		cin>>n;
		vector<int> a(n),sum(n+1,0);
		forn(i,n){
			cin>>a[i];
			sum[i+1]=sum[i]+a[i];
		}
		count=0;
		forn(i,n+1)
			for(int j=i+1;j<n+1;j++){
				x=sum[j]-sum[i];
				if(((long long)sqrt(x))*((long long)sqrt(x))==x)
					count++;
			}

		cout<<"Case #"<<test-t<<": "<<count<<"\n";
	}
	return 0;
}