#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	long long n,t,x,sum,i;
	bool flag;
	cin>>t;

	while(t--){
		cin>>n>>x;
		vector<long long> a(n);
		
		forn(i,n){
			cin>>a[i];
		}
		sort(a.begin(),a.end(),greater<int>());
		sum=0;
		for(i=0;i<n;i++){
			sum+=a[i];
			if(sum<x*(i+1)){
				// cout<<"i"<<i;
				break;
			}
			// cout<<a[i]<<" ";
		}
		if(sum<x*(i+1))
			cout<<i<<"\n";
		else cout<<n<<"\n";
	}
	return 0;
}
