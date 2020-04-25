#include <bits/stdc++.h>
using namespace std; 


int main(){
	int n,q,aa,b;
	cin>>n;
	vector<int> a(n),sum(n+1,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum[i+1]=sum[i]+a[i];
	}

	cin>>q;
	for(int i=0;i<q;i++){
		cin>>aa>>b;
		cout<<(sum[b]-sum[aa-1])/10<<"\n";
	}
	return 0;
}