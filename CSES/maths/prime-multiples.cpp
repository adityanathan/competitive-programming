#include<bits/stdc++.h> // principle of includsion-exclusion, PIE, counting
using namespace std;

int main(){
	long long n,k,ans=0;
	cin>>n>>k;
	vector<long long> a(k);
	for(int i=0;i<k;i++)
		cin>>a[i];
	for(int i=0;i<1<<k;i++){
		long long setbits=0, val=n;
		for(int j=0;j<k;j++)
			if(i&1<<j)
				val/=a[j], setbits++;
		ans+=setbits%2?-val:val;
	}
	cout<<n-ans;
}