#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,t,sum,ans=0,curr;

	cin>>n>>t;
	vector<long long> a(n),b,c;

	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=0;i<1<<n/2;i++){
		sum=0;
		for(int j=0;j<n/2;j++)
			if(i&1<<j)
				sum+=a[j];
		b.push_back(sum);
	}

	for(int i=0;i<1<<n-n/2;i++){
		sum=0;
		for(int j=0;j<n-n/2;j++)
			if(i&1<<j)
				sum+=a[n/2+j];
		c.push_back(sum);
	}

	sort(c.begin(),c.end());

	for(auto x:b){
		curr=*(upper_bound(c.begin(),c.end(),t-x)-1);
		if(curr+x<=t)
			ans=max(ans,curr+x);
	}
	
	cout<<ans;
}